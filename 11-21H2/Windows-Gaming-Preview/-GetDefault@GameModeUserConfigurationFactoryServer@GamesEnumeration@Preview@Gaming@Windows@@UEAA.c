/*
 * XREFs of ?GetDefault@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeUserConfiguration@2345@@Z @ 0x180041910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180012E20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042120 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180042120.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetDefault(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **a2)
{
  char *v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **); // rbx
  char *v6; // rax
  char *v7; // rdi
  int Interface; // ebx
  _QWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(_QWORD, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **); // rdi
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v15; // rcx
  int v16; // eax
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *v20; // [rsp+40h] [rbp+8h] BYREF
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v3 = (char *)this + 104;
  v20 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **))v3;
  if ( !*(_QWORD *)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    v6 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      Interface = -2147024882;
LABEL_12:
      v12 = (unsigned int)Interface;
      v13 = 107LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v12);
      if ( v4 )
        LeaveCriticalSection(v4);
      v17 = v20;
      goto LABEL_24;
    }
    v9 = v6 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
    *((_QWORD *)v7 + 7) = 1LL;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v9 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable';
    *((_QWORD *)v7 + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `IWeakReferenceSource'};
    *v9 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v7 + 64), 0, 0);
    *((_QWORD *)v7 + 13) = 0LL;
    *((_QWORD *)v7 + 14) = 0LL;
    v21 = 0LL;
    v10 = CreateGameConfigStoreClient(&v21);
    Interface = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)v7 + 14);
      *((_QWORD *)v7 + 14) = v21;
      if ( v11 )
        FreeGameConfigStoreClient(v11);
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
                    v7,
                    &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
                    v3);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v7);
    if ( Interface < 0 )
      goto LABEL_12;
    v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **))v3;
  }
  v14 = **v5;
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v5, &GUID_72d34af4_756b_470f_a0c2_ba62a90795db, &v20);
  Interface = v16;
  if ( v16 < 0 )
  {
    v12 = (unsigned int)v16;
    v13 = 110LL;
    goto LABEL_18;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v17 = 0LL;
  *a2 = v20;
  Interface = 0;
LABEL_24:
  if ( v17 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)Interface;
}
