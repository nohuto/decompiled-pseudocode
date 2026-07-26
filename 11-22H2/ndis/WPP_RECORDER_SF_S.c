/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C003572C
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002E974 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0118E58 (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0119D88 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C011C7F8 (ndisBindReadFilterDriverFromV3Registry.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C012BF90 (ndisLWMBuildConfigurationKeyPath.c)
 *     NdisQueryDiagnosticSetting @ 0x1C012E2B0 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C013A518 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C013A664 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00B214C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // r9
  const wchar_t *v18; // r8
  int v19; // [rsp+20h] [rbp-48h]

  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v18, v17, 0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v19, v6);
}
