/*
 * XREFs of PnpDeleteDeviceInterfaces @ 0x140956454
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14087A734 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14022B6C0 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D3F44 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406D42B4 (PnpUnicodeStringToWstr.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1407D1938 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmDeleteDeviceInterface @ 0x140A615CC (_CmDeleteDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeleteDeviceInterfaces(unsigned __int16 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *Pool2; // rbx
  int inited; // edi
  unsigned int v5; // r14d
  const WCHAR *v6; // rsi
  int MatchingFilteredDeviceInterfaceList; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+98h] [rbp+38h] BYREF
  void *v11; // [rsp+A0h] [rbp+40h] BYREF

  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Pool2 = 0LL;
  DestinationString = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  inited = PnpUnicodeStringToWstr(&v11, 0LL, a1);
  if ( inited >= 0 )
  {
    v10 = 4096;
    inited = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v10, 538996816LL);
      v6 = (const WCHAR *)Pool2;
      if ( !Pool2 )
      {
        inited = -1073741670;
        break;
      }
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              0LL,
                                              (__int64)v11,
                                              0,
                                              0LL,
                                              0LL,
                                              (__int64)Pool2,
                                              v10,
                                              (__int64)&v10,
                                              0);
      ++v5;
      inited = MatchingFilteredDeviceInterfaceList;
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      {
        if ( MatchingFilteredDeviceInterfaceList >= 0 )
        {
          while ( *v6 )
          {
            inited = RtlInitUnicodeStringEx(&DestinationString, v6);
            if ( inited >= 0 )
              CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, DestinationString.Buffer, 0LL);
            v6 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
          }
        }
        break;
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  PnpUnicodeStringToWstrFree(v11, (__int64)a1);
  return (unsigned int)inited;
}
