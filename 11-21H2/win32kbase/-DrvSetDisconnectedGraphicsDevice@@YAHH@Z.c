/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C006A740
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0069DB0 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C006A51C (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006BAAC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(int a1)
{
  unsigned int v1; // r12d
  PVOID v4; // rdi
  __int64 Pool2; // rbx
  WCHAR v6; // ax
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  int v8; // edi
  WCHAR *v9; // r14
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rax
  int DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  PVOID BackTrace[20]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR ValueName[16]; // [rsp+F8h] [rbp-10h] BYREF

  DestinationString = 0;
  v1 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  if ( a1 )
  {
    if ( gpLocalDiscGraphicsDevice )
      return 1LL;
  }
  else if ( gpRemoteDiscGraphicsDevice )
  {
    return 1LL;
  }
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646747) != 0x76646747
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 312LL);
LABEL_7:
    if ( !Pool2 )
      return v1;
    goto LABEL_8;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1986291527 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(260LL, 328LL);
  if ( !Pool2 )
    return v1;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
      goto LABEL_33;
    Pool2 += 16LL;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           BackTrace) )
  {
LABEL_33:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return v1;
  }
LABEL_8:
  DestinationString_8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString_8,
    L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString_8.Buffer, DestinationString_8.Length + 2);
  *(_OWORD *)Pool2 = *(_OWORD *)ValueName;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&ValueName[8];
  v6 = ValueName[12];
  *(_DWORD *)(Pool2 + 216) = 0;
  *(_QWORD *)(Pool2 + 224) = 0LL;
  *(_DWORD *)(Pool2 + 160) |= 0x2000000u;
  *(_WORD *)(Pool2 + 24) = v6;
  *(_WORD *)(Pool2 + 220) = -1;
  RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                                 Pool2,
                                                 0LL,
                                                 0LL,
                                                 0LL,
                                                 0,
                                                 &DestinationString);
  v8 = DestinationString;
  v9 = (WCHAR *)RegistryHandleFromDeviceMap;
  if ( DestinationString >= 0 )
  {
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation((PVOID)Pool2, RegistryHandleFromDeviceMap, 0);
      ZwClose(v9);
      v1 = 1;
    }
    if ( !*(_QWORD *)(Pool2 + 208) )
    {
      v10 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              260LL,
              0x20uLL,
              1936876615);
      *(_QWORD *)(Pool2 + 208) = v10;
      if ( v10 )
      {
        v11 = (void *)DrvGetRegistryHandleFromDeviceMap(Pool2, 0LL, 0LL, v10, 16, &DestinationString);
        if ( v11 )
          ZwClose(v11);
        v8 = DestinationString;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    if ( v8 >= 0 )
    {
      swprintf_s((wchar_t *)(Pool2 + 64), 0x20uLL, L"WinDisc");
      *(_QWORD *)(Pool2 + 136) = 0LL;
      if ( gpGraphicsDeviceList )
        *((_QWORD *)gpGraphicsDeviceListLast + 16) = Pool2;
      else
        gpGraphicsDeviceList = (wchar_t *)Pool2;
      gpGraphicsDeviceListLast = (struct tagGRAPHICS_DEVICE *)Pool2;
      if ( a1 )
        gpLocalDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)Pool2;
      else
        gpRemoteDiscGraphicsDevice = (struct tagGRAPHICS_DEVICE *)Pool2;
      if ( (*(_DWORD *)(Pool2 + 160) & 0x800000) != 0 )
        DrvAddAdapterLuid(*(struct _LUID *)(Pool2 + 248));
      return v1;
    }
  }
  DrvCleanupOneGraphicsDevice((_QWORD *)Pool2);
  return 0LL;
}
