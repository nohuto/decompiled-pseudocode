/*
 * XREFs of PpCheckInDriverDatabase @ 0x140692C14
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14068F654 (PnpPrepareDriverLoading.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1403C4448 (McTemplateK0j_EtwWriteTransfer.c)
 *     IopBuildFullDriverPath @ 0x14068DB7C (IopBuildFullDriverPath.c)
 *     PiLookupInDDBCache @ 0x140692D24 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x140692E10 (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x140958CB0 (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(
        UNICODE_STRING *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  UNICODE_STRING P; // [rsp+38h] [rbp-20h] BYREF

  P = 0LL;
  if ( InitIsWinPEMode || !BYTE1(NlsMbCodePageTag) )
    return 0LL;
  v8 = IopBuildFullDriverPath(a1, a2, &P);
  if ( v8 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      P = 0LL;
      RtlInitUnicodeString(&P, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&P, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v8 = PiLookupInDDBCache(&P, a3, v11, a6);
    if ( v8 == -1073741823 )
      v8 = PiLookupInDDB(&P, a3, a4, a6);
    if ( v8 == -1073740948 )
    {
      if ( !a5 )
        v8 = -1073740949;
    }
    else if ( v8 == -1073740949 && a5 )
    {
      v8 = -1073740948;
    }
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P.Buffer, 0);
  }
  if ( (unsigned int)(v8 + 1073740949) <= 1 )
  {
    if ( (byte_140C0E20A & 2) != 0 )
      McTemplateK0j_EtwWriteTransfer((__int64)MS_KernelPnP_Provider_Context, (__int64)KMPnPEvt_Driver_Blocked, v9, a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
