/*
 * XREFs of SmpInitializeManagedPagefileSupport @ 0x1400171B4
 * Callers:
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x140017424 (SmpMakeSystemManagedPagingFileDescriptor.c)
 * Callees:
 *     SmpComputeDesiredPfSizeBasedOnHistory @ 0x140016AB8 (SmpComputeDesiredPfSizeBasedOnHistory.c)
 *     SmpComputeDesiredPfSizeForCrashDump @ 0x140016D74 (SmpComputeDesiredPfSizeForCrashDump.c)
 */

void SmpInitializeManagedPagefileSupport()
{
  unsigned __int64 v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( SmpManagedPfInitialized != 1 )
  {
    v0 = 0x40000000LL;
    if ( (unsigned __int64)SmpMemorySize > 0x40000000 )
    {
      v0 = ((unsigned __int64)(SmpMemorySize - 0x40000000) >> 3) + 0x40000000;
      if ( v0 > 0x800000000LL )
        v0 = 0x800000000LL;
    }
    SmpDesiredPfSizeBasedOnRAM = v0;
    SmpDesiredPfSizeForCrashDump = SmpComputeDesiredPfSizeForCrashDump();
    v1 = SmpComputeDesiredPfSizeBasedOnHistory();
    v2 = 0LL;
    SmpDesiredPfSizeBasedOnHistory = v1;
    if ( SmpClientSku == 1 )
    {
      if ( (unsigned __int64)SmpMemorySize >= 0xA38E38E3 )
        v3 = 0LL;
      else
        v3 = 2744006883LL - SmpMemorySize;
      v2 = (v3 >> 4) + v3;
    }
    SmpDesiredPfSizeForApps = v2;
    if ( (int)TpAllocTimer(&v5, SmpUpdatePagefileUsageCallback, 0LL, &SmpCallbackEnviron) >= 0 )
    {
      v4 = -36000000000LL;
      TpSetTimer(v5, &v4, 3600000LL, 300000LL);
    }
    SmpManagedPfInitialized = 1;
  }
}
