/*
 * XREFs of ?GetDefault@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIGameModeUserConfiguration@2345@@Z @ 0x1800426A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180013390 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042EB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180042EB0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetDefault(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **a2)
{
  char *v3; // r14
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  int Interface; // ebx
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **); // rdi
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
  if ( !*(_QWORD *)v3 )
  {
    *(_QWORD *)v3 = 0LL;
    v5 = (char *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( !v5 )
    {
      Interface = -2147024882;
LABEL_11:
      v11 = (unsigned int)Interface;
      v12 = 107LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v11);
      if ( v4 )
        LeaveCriticalSection(v4);
      v17 = v20;
      goto LABEL_22;
    }
    v8 = v5 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
    *((_QWORD *)v6 + 7) = 1LL;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Microsoft::WRL::RuntimeClass<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable';
    *((_QWORD *)v6 + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `IWeakReferenceSource'};
    *v8 = &Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 64), 0, 0);
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    v21 = 0LL;
    v9 = CreateGameConfigStoreClient(&v21);
    Interface = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v6);
      goto LABEL_11;
    }
    v10 = *((_QWORD *)v6 + 14);
    *((_QWORD *)v6 + 14) = v21;
    if ( v10 )
      FreeGameConfigStoreClient(v10);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
                  v6,
                  &GUID_72d34af4_756b_470f_a0c2_ba62a90795db,
                  v3);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v6);
    if ( Interface < 0 )
      goto LABEL_11;
  }
  v13 = *(_QWORD *)v3;
  v14 = ***(__int64 (__fastcall ****)(__int64, GUID *, struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration **))v3;
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v13, &GUID_72d34af4_756b_470f_a0c2_ba62a90795db, &v20);
  Interface = v16;
  if ( v16 < 0 )
  {
    v11 = (unsigned int)v16;
    v12 = 110LL;
    goto LABEL_16;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v17 = 0LL;
  *a2 = v20;
  Interface = 0;
LABEL_22:
  if ( v17 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)Interface;
}
