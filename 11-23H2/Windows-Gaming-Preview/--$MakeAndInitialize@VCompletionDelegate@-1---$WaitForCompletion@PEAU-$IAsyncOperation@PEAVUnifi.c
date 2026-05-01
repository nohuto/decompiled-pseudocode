/*
 * XREFs of ??$MakeAndInitialize@VCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@V1?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@23@YAJ01K2@Z@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@@WRL@Microsoft@@@012@@Z @ 0x180027700
 * Callers:
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180023364 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@Windows.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002640 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800081F0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180013390 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___MakeAndInitialize_VCompletionDelegate__1____WaitForCompletion_PEAU__IAsyncOperation_PEAVUnifiedTileManager_Shim_UnifiedTile_Shell_WindowsInternal___Foundation_Windows___details_wil__YAJPEAU__IAsyncOperation_PEAVUnifiedTileManager_Shim_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z_V1_1____WaitForCompletion_PEAU__IAsyncOperation_PEAVUnifiedTileManager_Shim_UnifiedTile_Shell_WindowsInternal___Foundation_Windows___23_YAJ01K2_Z___V_Details_WRL_Microsoft__YAJV__ComPtrRef_V__ComPtr_VCompletionDelegate__1____WaitForCompletion_PEAU__IAsyncOperation_PEAVUnifiedTileManager_Shim_UnifiedTile_Shell_WindowsInternal___Foundation_Windows___details_wil__YAJPEAU__IAsyncOperation_PEAVUnifiedTileManager_Shim_UnifiedTile_Shell_WindowsInternal___Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z__WRL_Microsoft___012__Z(
        char **a1)
{
  char *v2; // rcx
  char *v3; // rdi
  unsigned int v4; // esi
  wil::details *v5; // rcx
  HANDLE Event; // rbp
  int LastErrorFailHr; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = 0LL;
  v3 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    *(_QWORD *)v3 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 8));
    *((_DWORD *)v3 + 11) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *>'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *> *>'::`2'::CompletionDelegate::`vftable';
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_DWORD *)v3 + 12) = 0;
    *((_QWORD *)v3 + 7) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        (void **)v3 + 7,
        Event);
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
      v4 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x587,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
          (const char *)(unsigned int)LastErrorFailHr);
        (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
        return v4;
      }
    }
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
    *a1 = v3;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
