/*
 * XREFs of ?GetDedicatedVideoMemoryCap@GamingOverlayExperienceManager@@AEAA_KXZ @ 0x1803FD228
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180404644 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::GetDedicatedVideoMemoryCap(GamingOverlayExperienceManager *this)
{
  __int64 v1; // rsi
  unsigned int i; // r14d
  char *ClassDevsW; // rbx
  signed int j; // edi
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
      ClassDevsW = (char *)SetupDiGetClassDevsW(&ClassGuid, 0LL, 0LL, 0xAu);
      if ( (unsigned __int64)(ClassDevsW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
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
      v1 += v10 + v9;
      if ( (unsigned __int64)(ClassDevsW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        SetupDiDestroyDeviceInfoList(ClassDevsW);
    }
  }
  return v1;
}
