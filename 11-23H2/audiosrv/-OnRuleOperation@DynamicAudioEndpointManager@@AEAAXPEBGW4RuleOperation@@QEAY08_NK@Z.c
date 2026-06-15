/*
 * XREFs of ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180002560
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x180002200 (s_mmeNotifyDeviceStateChanged.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18013F9A8 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180140400 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180008CE0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAAEAV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@AEAPEAU__POSITION@@@Z @ 0x18012D03C (-GetNext@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18013FE5C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall DynamicAudioEndpointManager::OnRuleOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        bool *a4,
        unsigned int a5)
{
  bool *v5; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r13
  _QWORD *v10; // rbx
  bool *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbp
  unsigned int v14; // ebx
  __int64 v15; // r12
  int (__fastcall *v16)(__int64, struct IAudioProcess **); // rdi
  struct IAudioProcess *v17; // [rsp+30h] [rbp-88h] BYREF
  struct IUnknown *v18; // [rsp+38h] [rbp-80h] BYREF
  __int64 v19; // [rsp+40h] [rbp-78h]
  __int64 v20; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  _QWORD v23[11]; // [rsp+60h] [rbp-58h] BYREF
  int v24; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+10h]
  unsigned int v26; // [rsp+D0h] [rbp+18h]
  bool (*v27)[9]; // [rsp+D8h] [rbp+20h]

  v27 = (bool (*)[9])a4;
  v26 = a3;
  v25 = a2;
  v5 = a4;
  v7 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v23[1] = v7;
  v19 = 0LL;
  v9 = 9LL;
  v10 = (_QWORD *)(a1 + 56);
  v11 = (bool *)v27;
  do
  {
    v21 = v10;
    v12 = 9LL;
    v22 = 9LL;
    do
    {
      v20 = *v10;
      if ( v20 )
      {
        v13 = v19;
        v14 = v26;
        do
        {
          v15 = *(_QWORD *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::GetNext(
                             v8,
                             &v20);
          v23[0] = v15;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          v24 = 0;
          if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v15 + 48LL))(
                 v15,
                 v25,
                 v14,
                 a5,
                 &v24) >= 0 )
          {
            switch ( v24 )
            {
              case 2:
                v17 = 0LL;
                while ( 1 )
                {
                  v16 = *(int (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)v15 + 40LL);
                  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v17);
                  if ( v16(v15, &v17) < 0 )
                    break;
                  v18 = 0LL;
                  if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v15)(
                         v15,
                         &GUID_00000000_0000_0000_c000_000000000046,
                         &v18) >= 0 )
                    DynamicAudioEndpointManager::RemoveRule(
                      (DynamicAudioEndpointManager *)a1,
                      v17,
                      v18,
                      0,
                      (bool (*const)[9])v11);
                  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v17);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
                }
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
                break;
              case 3:
                *v5 = 1;
                break;
              case 4:
                v5[v13] = 1;
                v5[v9] = 1;
                break;
            }
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v23);
        }
        while ( v20 );
        v10 = v21;
        v12 = v22;
      }
      v10 += 6;
      v21 = v10;
      ++v5;
      v22 = --v12;
    }
    while ( v12 );
    v9 -= 9LL;
    v19 -= 9LL;
  }
  while ( v9 > -9 );
  DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies((DynamicAudioEndpointManager *)a1, v27);
  if ( a1 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
