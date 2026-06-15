/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180062178
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_::_Do_call @ 0x180065ED0 (std--_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1801174D0 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x180117540 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180118230 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x180036A20 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180040B6C (GetSpatialSettingsMonitoringPKey.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800656FC (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int i; // ebx
  __int64 v4; // r9
  unsigned int v5; // [rsp+30h] [rbp-50h] BYREF
  int v6; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v10; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v11; // [rsp+58h] [rbp-28h] BYREF

  v5 = 0;
  v8 = 0LL;
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v8) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 24LL))(v8, &v5) >= 0 )
  {
    v10 = 0LL;
    pv = 0LL;
    memset(&v11, 0, sizeof(v11));
    GetSpatialSettingsMonitoringPKey((__int64)&v11, v0, v1, v2);
    for ( i = 0; i < v5; ++i )
    {
      v9 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, i, &v9) >= 0
        && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL))(v9, &pv) >= 0
        && (*(int (__fastcall **)(PVOID, LPVOID, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv,
             1LL) >= 0 )
      {
        v6 = 0;
        CEndpointCharacteristics::ProcessPropertyChange(v10, &v11, &v6, v4);
        if ( v6 )
          CPolicyConfig::DisconnectHelper((const unsigned __int16 *)pv);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v10);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
}
