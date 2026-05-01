/*
 * XREFs of ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001E1A4
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001DCC4 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180013AFC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4CollectionProvider@Shim@UnifiedTile@Shell@WindowsInternal@@AEAV?$ComPtr@UIUnifiedTileCollection@Shim@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@PEAUEventRegistrationToken@@@Z @ 0x18001E570 (-_RegisterListenerOnTileCollection@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Win.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180023364 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVUnifiedTileManager@Shim@UnifiedTile@Shell@Windows.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A9B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_18002A9B0.c)
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x180043080 (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x180044030 (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this)
{
  int v2; // esi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  signed __int64 v13; // rdx
  signed __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  signed __int32 v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglAsync();
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync();
  v2 = 1;
  RtlGetDeviceFamilyInfoEnum(0LL, &v24, 0LL);
  if ( v24 == 3 || v24 == 9 )
    v2 = 3;
  v23 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.UnifiedTile.Shim.UnifiedTileManager",
         0x39u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x18001E567LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_5a2ffb33_28a6_56fa_b567_129b48b36784, &v23);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_37;
  }
  v25 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _DWORD, __int64 *))(*(_QWORD *)v23 + 48LL))(
         v23,
         0LL,
         0LL,
         268435511LL,
         v2,
         0,
         &v25);
  v5 = v6;
  if ( v6 >= 0 )
  {
    v9 = *((_QWORD *)this + 7);
    if ( v9 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v25;
    v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTileManager *> *>(v25);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 64LL))(v10, (char *)this + 56);
    if ( v5 >= 0 )
    {
      if ( *((_QWORD *)this + 16) )
      {
        *((_QWORD *)this + 16) = 0LL;
        ((void (*)(void))Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release)();
      }
      *((_QWORD *)this + 16) = 0LL;
      v11 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        v11[4] = 1LL;
        *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable';
        v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
        v11[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v12 = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable';
        v12[1] = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable'{for `Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler'};
        v12[2] = &Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
        v12[5] = 0LL;
        InitializeSRWLock((PSRWLOCK)v12 + 6);
        InitializeSRWLock((PSRWLOCK)v12 + 7);
        v14 = v12[4];
        if ( v14 < 0 )
        {
          do
          {
LABEL_29:
            v17 = *(_DWORD *)(2 * v14 + 0x10);
            if ( v17 == 0x7FFFFFFF )
              break;
            v13 = (unsigned int)(v17 + 1);
          }
          while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v14 + 16), v13, v17) );
        }
        else
        {
          while ( (_DWORD)v14 != 0x7FFFFFFF )
          {
            v13 = v14 + 1;
            v16 = _InterlockedCompareExchange64(v12 + 4, v14 + 1, v14);
            v15 = v14 == v16;
            v14 = v16;
            if ( v15 )
              break;
            if ( v16 < 0 )
              goto LABEL_29;
          }
        }
        *((_QWORD *)this + 16) = v12;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(
          v12,
          v13,
          0x7FFFFFFFLL);
        v18 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_RegisterListenerOnTileCollection(
                this,
                1LL,
                (char *)this + 64,
                (char *)this + 40);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            218LL,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v18);
        v19 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_RegisterListenerOnTileCollection(
                this,
                0LL,
                (char *)this + 72,
                (char *)this + 48);
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            224LL,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v19);
        v5 = 0;
        goto LABEL_35;
      }
      v5 = -2147024882;
      v8 = 195LL;
    }
    else
    {
      v8 = 193LL;
    }
    v7 = (unsigned int)v5;
  }
  else
  {
    v7 = (unsigned int)v6;
    v8 = 191LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)v7);
LABEL_35:
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_37:
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)v5;
}
