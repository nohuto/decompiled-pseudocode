/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18004D420
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCEndpointCharacteristics@@@Z @ 0x18004B23C (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___ @ 0x18004B3DC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_WORK Work)
{
  char v4; // al
  int v5; // eax
  __int64 v6; // r8
  unsigned int i; // edi
  void *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int128 v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]
  LPVOID v15; // [rsp+88h] [rbp+28h] BYREF
  LPVOID v16; // [rsp+98h] [rbp+38h] BYREF

  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    v13 = 0LL;
    v14 = 0LL;
    v4 = Context[96];
    if ( !v4 )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 32LL))(
             g_DeviceEnumerator,
             0LL,
             0LL,
             &v10) >= 0 )
      {
        v16 = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &v16) >= 0 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
            Context,
            v16,
            0LL,
            1LL,
            &v15);
          if ( v15 )
            std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
              (__int64)&v13,
              &v15);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
        }
        CoTaskMemFree(v16);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
      v4 = Context[96];
      if ( !v4 )
      {
        v16 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, LPVOID *))(*(_QWORD *)g_DeviceEnumerator + 32LL))(
               g_DeviceEnumerator,
               1LL,
               0LL,
               &v16) >= 0 )
        {
          v15 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v16 + 40LL))(v16, &v15) >= 0 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
              Context,
              v15,
              0LL,
              1LL,
              &v12);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
          }
          CoTaskMemFree(v15);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
        v4 = Context[96];
      }
    }
    if ( !v4 )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 32LL))(
             g_DeviceEnumerator,
             0LL,
             2LL,
             &v10) >= 0 )
      {
        v16 = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &v16) >= 0 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
            Context,
            v16,
            0LL,
            1LL,
            &v15);
          if ( v15 )
            std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
              (__int64)&v13,
              &v15);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
        }
        CoTaskMemFree(v16);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
      if ( !Context[96] )
      {
        v16 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)g_DeviceEnumerator + 32LL))(
               g_DeviceEnumerator,
               1LL,
               2LL,
               &v16) >= 0 )
        {
          v15 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v16 + 40LL))(v16, &v15) >= 0 )
          {
            v12 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
              Context,
              v15,
              0LL,
              1LL,
              &v12);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
          }
          CoTaskMemFree(v15);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
        if ( !Context[96] )
        {
          v10 = 0LL;
          v5 = PerformEndpointDiscoveryForUnpluggedEndpoints();
          v6 = 1LL;
          if ( v5 )
            v6 = 9LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 24LL))(
                 g_DeviceEnumerator,
                 2LL,
                 v6,
                 &v10) >= 0
            && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 24LL))(v10, &v15) >= 0 )
          {
            for ( i = 0; !Context[96] && i < (unsigned int)v15; ++i )
            {
              v12 = 0LL;
              if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, i, &v12) >= 0 )
              {
                pv = 0LL;
                if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &pv) >= 0 )
                {
                  v16 = 0LL;
                  (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
                    Context,
                    pv,
                    0LL,
                    1LL,
                    &v16);
                  if ( v16 )
                    std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                      (__int64)&v13,
                      &v16);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
                }
                CoTaskMemFree(pv);
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
        }
      }
    }
    v8 = (void *)v13;
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_dd5a36618363c980e2dbe2951b82ae74___(
      (__int64)&v15,
      (_QWORD *)v13,
      *((_QWORD **)&v13 + 1));
    CoUninitialize();
    if ( v8 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
        v8,
        *((_QWORD *)&v13 + 1),
        v9);
      std::_Deallocate<16,0>(v8, (v14 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
}
