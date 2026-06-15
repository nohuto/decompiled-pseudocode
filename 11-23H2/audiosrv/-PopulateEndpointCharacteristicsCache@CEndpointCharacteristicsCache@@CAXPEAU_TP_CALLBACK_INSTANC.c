/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180062340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCEndpointCharacteristics@@@Z @ 0x180062658 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___ @ 0x180062688 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_WORK Work)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int i; // edi
  __int64 *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  LPVOID v13; // [rsp+88h] [rbp+28h] BYREF
  LPVOID v14; // [rsp+98h] [rbp+38h] BYREF

  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( !Context[104] )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             0LL,
             &v8) >= 0 )
      {
        v14 = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &v14) >= 0 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
            Context,
            v14,
            0LL,
            1LL,
            &v13);
          if ( v13 )
            std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
              &v11,
              &v13);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v13);
        }
        CoTaskMemFree(v14);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
      if ( !Context[104] )
      {
        v14 = 0LL;
        if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, _QWORD, LPVOID *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
               g_DeviceEnumerator,
               1LL,
               0LL,
               &v14) >= 0 )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v13) >= 0 )
          {
            v10 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
              Context,
              v13,
              0LL,
              1LL,
              &v10);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
          }
          CoTaskMemFree(v13);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
      }
    }
    if ( !Context[104] )
    {
      v8 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             2LL,
             &v8) >= 0 )
      {
        v14 = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &v14) >= 0 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
            Context,
            v14,
            0LL,
            1LL,
            &v13);
          if ( v13 )
            std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
              &v11,
              &v13);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v13);
        }
        CoTaskMemFree(v14);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
      if ( !Context[104] )
      {
        v14 = 0LL;
        if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, __int64, LPVOID *))g_DeviceEnumerator->lpVtbl->GetDefaultAudioEndpoint)(
               g_DeviceEnumerator,
               1LL,
               2LL,
               &v14) >= 0 )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v13) >= 0 )
          {
            v10 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
              Context,
              v13,
              0LL,
              1LL,
              &v10);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
          }
          CoTaskMemFree(v13);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
        if ( !Context[104] )
        {
          v8 = 0LL;
          v4 = PerformEndpointDiscoveryForUnpluggedEndpoints();
          v5 = 1LL;
          if ( v4 )
            v5 = 9LL;
          if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, __int64, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
                 g_DeviceEnumerator,
                 2LL,
                 v5,
                 &v8) >= 0
            && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 24LL))(v8, &v13) >= 0 )
          {
            for ( i = 0; !Context[104] && i < (unsigned int)v13; ++i )
            {
              v10 = 0LL;
              if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, i, &v10) >= 0 )
              {
                pv = 0LL;
                if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &pv) >= 0 )
                {
                  v14 = 0LL;
                  (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
                    Context,
                    pv,
                    0LL,
                    1LL,
                    &v14);
                  if ( v14 )
                    std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                      &v11,
                      &v14);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
                }
                CoTaskMemFree(pv);
              }
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
            }
          }
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
        }
      }
    }
    v7 = (__int64 *)v11;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___(
      &v13,
      v11,
      *((_QWORD *)&v11 + 1));
    CoUninitialize();
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
        v7,
        *((__int64 **)&v11 + 1));
      std::_Deallocate<16,0>(v7, (v12 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
}
