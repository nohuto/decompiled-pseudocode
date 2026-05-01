/*
 * XREFs of ?GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ @ 0x18032FD68
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedVideoMemoryCap(GamingOverlayExperienceManager *this)
{
  __int64 v1; // rdi
  unsigned int i; // esi
  HDEVINFO ClassDevsW; // r14
  signed int j; // ebx
  void *ppFactory; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD DeviceInfoData[5]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v8[272]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+168h] [rbp+60h]
  __int64 v10; // [rsp+170h] [rbp+68h]

  v1 = 0LL;
  ppFactory = 0LL;
  if ( CreateDXGIFactory1(&GUID_770aae78_f26f_4dba_a829_253c83d1b387, &ppFactory) >= 0 )
  {
    DeviceInfoData[0] = 0LL;
    for ( i = 0;
          (*(unsigned int (__fastcall **)(void *, _QWORD, _QWORD *))(*(_QWORD *)ppFactory + 96LL))(
            ppFactory,
            i,
            DeviceInfoData) != -2005270526;
          ++i )
    {
      memset_0(v8, 0, 0x138uLL);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)DeviceInfoData[0] + 80LL))(DeviceInfoData[0], v8);
      memset(&DeviceInfoData[1], 0, 32);
      ClassDevsW = SetupDiGetClassDevsW(&ClassGuid, 0LL, 0LL, 0xAu);
      if ( ClassDevsW != (HDEVINFO)-1LL )
      {
        LODWORD(DeviceInfoData[1]) = 32;
        for ( j = 0;
              SetupDiEnumDeviceInfo(ClassDevsW, j, (PSP_DEVINFO_DATA)&DeviceInfoData[1])
           || GetLastError() != 259 && j <= 1000;
              ++j )
        {
          ;
        }
      }
      v1 += v9 + v10;
    }
  }
  return v1;
}
