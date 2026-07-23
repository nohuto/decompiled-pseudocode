/*
 * XREFs of sub_140882B96 @ 0x140882B96
 * Callers:
 *     sub_1405F4EC8 @ 0x1405F4EC8 (sub_1405F4EC8.c)
 *     NtSetSecurityObject @ 0x1406B57C0 (NtSetSecurityObject.c)
 *     sub_1408545B0 @ 0x1408545B0 (sub_1408545B0.c)
 *     sub_140882A70 @ 0x140882A70 (sub_140882A70.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1409CA280 (SeAuditingFileOrGlobalEvents.c)
 *     sub_1409CE4F8 @ 0x1409CE4F8 (sub_1409CE4F8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall sub_140882B96(__int64 *a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  char v4; // bp
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 *v11; // rax

  v4 = 0;
  v8 = -1073741772;
  if ( qword_140D04998 )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v4 = 1;
      ExAcquireResourceSharedLite(&stru_140CF6650, 1u);
    }
    v10 = qword_140D04998;
    *a1 = qword_140D04998;
    if ( a2 )
      *a2 = 0LL;
    while ( v10 )
    {
      if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(v10 + 8), 0) )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v11 = (__int64 *)*a1;
      if ( a2 )
        *a2 = v11;
      v10 = *v11;
      *a1 = v10;
    }
    if ( a2 )
      *a2 = 0LL;
LABEL_13:
    if ( v4 )
    {
      ExReleaseResourceLite(&stru_140CF6650);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
