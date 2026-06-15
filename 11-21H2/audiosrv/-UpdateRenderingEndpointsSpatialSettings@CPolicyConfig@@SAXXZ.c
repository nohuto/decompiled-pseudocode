/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18005C314
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_::_Do_call @ 0x18005DE60 (std--_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800EB120 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800EB190 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800EBE70 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18004DF00 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180055FD0 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800E9748 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  __int64 v0; // rdx
  int v1; // r8d
  int v2; // r9d
  unsigned int i; // ebx
  unsigned int v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v9; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v10; // [rsp+58h] [rbp-28h] BYREF

  v4 = 0;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 24LL))(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v4) >= 0 )
  {
    v9 = 0LL;
    pv = 0LL;
    memset(&v10, 0, sizeof(v10));
    GetSpatialSettingsMonitoringPKey((__int64)&v10, v0, v1, v2);
    for ( i = 0; i < v4; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, i, &v8) >= 0
        && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &pv) >= 0
        && (*(int (__fastcall **)(PVOID, LPVOID, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv,
             1LL) >= 0 )
      {
        v5 = 0;
        CEndpointCharacteristics::ProcessPropertyChange(v9, &v10, &v5);
        if ( v5 )
          CPolicyConfig::DisconnectHelper((const unsigned __int16 *)pv);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
}
