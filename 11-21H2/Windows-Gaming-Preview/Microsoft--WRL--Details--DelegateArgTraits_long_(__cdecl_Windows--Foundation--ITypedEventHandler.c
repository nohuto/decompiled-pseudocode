/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_bf617d1671b63836cbfdc32eeaad81a0___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs___::Invoke @ 0x1800227E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800182BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIContentsChangedEventArgs@Shim@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18001E194 (-_OnUtmCollectionChanged@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs_____::___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_bf617d1671b63836cbfdc32eeaad81a0___1_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileCollection___WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IContentsChangedEventArgs *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_2ddd0f6f_9c66_4b05_945c_d6ed78491b8c,
           &v14);
    v5 = v14;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v7);
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_16;
  }
  if ( !v5 )
  {
LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  v9 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnUtmCollectionChanged(
         *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl **)(a1 + 72),
         a3,
         *(_BYTE *)(a1 + 80));
  v7 = v9;
  if ( v9 >= 0 )
  {
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)v9);
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_16:
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v7);
  return (unsigned int)v7;
}
