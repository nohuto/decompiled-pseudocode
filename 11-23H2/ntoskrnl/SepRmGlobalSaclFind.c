/*
 * XREFs of SepRmGlobalSaclFind @ 0x1408A65B2
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1405B8EBC (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x1407BBD30 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14084D850 (SepRmGlobalSaclSetWrkr.c)
 *     SeExamineGlobalSacl @ 0x1408A670A (SeExamineGlobalSacl.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CD510 (SeAuditingFileOrGlobalEvents.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1409D2424 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     RtlCompareUnicodeString @ 0x1406DA140 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  char v4; // bp
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax

  v4 = 0;
  v8 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      v4 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    }
    v10 = SepRmGlobalSaclHead;
    *a1 = (__int64 *)SepRmGlobalSaclHead;
    if ( a2 )
      *a2 = 0LL;
    while ( v10 )
    {
      if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(v10 + 8), 0) )
      {
        v8 = 0;
        goto LABEL_13;
      }
      if ( a2 )
        *a2 = *a1;
      v10 = **a1;
      *a1 = (__int64 *)v10;
    }
    if ( a2 )
      *a2 = 0LL;
LABEL_13:
    if ( v4 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
