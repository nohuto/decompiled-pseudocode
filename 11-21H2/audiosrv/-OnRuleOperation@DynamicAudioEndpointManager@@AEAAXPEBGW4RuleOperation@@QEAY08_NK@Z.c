/*
 * XREFs of ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180132540
 * Callers:
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x180132484 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180133320 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18011B7C0 (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x180132D8C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180133B74 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall DynamicAudioEndpointManager::OnRuleOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        bool *a4,
        unsigned int a5)
{
  bool *v5; // rdi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r12
  _QWORD **v10; // r14
  bool *v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rsi
  int (__fastcall *v15)(__int64, struct IAudioProcess **); // rbx
  struct IAudioProcess *v16; // [rsp+30h] [rbp-48h] BYREF
  struct IUnknown *v17; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-38h] BYREF
  _QWORD **v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  __int64 v22[3]; // [rsp+60h] [rbp-18h] BYREF
  int v23; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+50h]
  unsigned int v25; // [rsp+D0h] [rbp+58h]
  bool (*v26)[9]; // [rsp+D8h] [rbp+60h]

  v26 = (bool (*)[9])a4;
  v25 = a3;
  v24 = a2;
  v5 = a4;
  v7 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v22[1] = v7;
  v8 = 0LL;
  v21 = 0LL;
  v9 = 9LL;
  v10 = (_QWORD **)(a1 + 56);
  v11 = (bool *)v26;
  do
  {
    v19 = v10;
    v12 = 9LL;
    v20 = 9LL;
    do
    {
      v18 = *v10;
      if ( v18 )
      {
        v13 = v25;
        do
        {
          v14 = *ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                   v12,
                   &v18);
          v22[0] = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v23 = 0;
          if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(
                 v14,
                 v24,
                 v13,
                 a5,
                 &v23) >= 0 )
          {
            switch ( v23 )
            {
              case 2:
                v16 = 0LL;
                while ( 1 )
                {
                  v15 = *(int (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)v14 + 40LL);
                  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v16);
                  if ( v15(v14, &v16) < 0 )
                    break;
                  v17 = 0LL;
                  if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v14)(
                         v14,
                         &GUID_00000000_0000_0000_c000_000000000046,
                         &v17) >= 0 )
                    DynamicAudioEndpointManager::RemoveRule(
                      (DynamicAudioEndpointManager *)a1,
                      v16,
                      v17,
                      0,
                      (bool (*const)[9])v11);
                  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v16);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
                v8 = v21;
                break;
              case 3:
                *v5 = 1;
                break;
              case 4:
                v5[v8] = 1;
                v5[v9] = 1;
                break;
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v22);
        }
        while ( v18 );
        v10 = v19;
        v12 = v20;
      }
      v10 += 6;
      v19 = v10;
      ++v5;
      v20 = --v12;
    }
    while ( v12 );
    v9 -= 9LL;
    v8 -= 9LL;
    v21 = v8;
  }
  while ( v9 > -9 );
  DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies((DynamicAudioEndpointManager *)a1, v26);
  if ( a1 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
