/*
 * XREFs of ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001F84C
 * Callers:
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001F2AC (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x18001FE34 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000FB44 (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180018484 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B278 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D930 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 **a3,
        __int64 *a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r15d
  __int128 v11; // xmm6
  int GameFromGameConfigStore; // eax
  int v13; // edi
  volatile signed __int64 *v14; // rcx
  __int64 v15; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v16; // rax
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rax
  signed __int32 v21; // eax
  int v22; // eax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  void *v26[4]; // [rsp+38h] [rbp-79h] BYREF
  __int128 v27[2]; // [rsp+58h] [rbp-59h] BYREF
  __int128 v28; // [rsp+78h] [rbp-39h] BYREF
  __int64 v29; // [rsp+88h] [rbp-29h]
  unsigned int v30; // [rsp+90h] [rbp-21h] BYREF
  int *v31; // [rsp+98h] [rbp-19h]
  _BYTE v32[20]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v29 = a2;
  v31 = (int *)v32;
  memset(v32, 0, sizeof(v32));
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v30);
  *v31 = v7;
  if ( v7 >= 0 && v30 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, 0LL, &v32[4]);
    *v31 = v8;
  }
  v9 = 0;
  v10 = v30;
  while ( 1 )
  {
    if ( *v31 < 0 || v9 == v10 )
      return 0LL;
    v11 = *(_OWORD *)&v32[4];
    v26[0] = 0LL;
    v27[0] = *(_OWORD *)&v32[4];
    GameFromGameConfigStore = GetGameFromGameConfigStore(*a4, v27, v26);
    v13 = GameFromGameConfigStore;
    if ( GameFromGameConfigStore < 0 )
    {
      v24 = 549LL;
      goto LABEL_35;
    }
    v14 = *a3;
    if ( *a3 )
      break;
    v15 = *(_QWORD *)(a1 + 128);
    *a3 = 0LL;
    v16 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                               0x130uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
    if ( !v16 )
    {
      v13 = -2147024882;
LABEL_32:
      v23 = (unsigned int)v13;
      v24 = 559LL;
      goto LABEL_36;
    }
    v17 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v16);
    v26[1] = (void *)v17;
    v26[2] = 0LL;
    v27[1] = v11;
    v13 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v17,
            (v15 + 8) & -(__int64)(v15 != 0));
    if ( v13 < 0 )
    {
      if ( v17 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
      goto LABEL_32;
    }
    if ( v17 )
    {
      v18 = *((_QWORD *)v17 + 17);
      if ( v18 < 0 )
      {
        do
LABEL_18:
          v21 = *(_DWORD *)(2 * v18 + 0x10);
        while ( v21 != 0x7FFFFFFF
             && v21 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v18 + 16), v21 + 1, v21) );
      }
      else
      {
        while ( (_DWORD)v18 != 0x7FFFFFFF )
        {
          v20 = _InterlockedCompareExchange64(v17 + 17, v18 + 1, v18);
          v19 = v18 == v20;
          v18 = v20;
          if ( v19 )
            break;
          if ( v20 < 0 )
            goto LABEL_18;
        }
      }
    }
    *a3 = v17;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
LABEL_23:
    if ( v26[0] )
      operator delete[](v26[0]);
    ++v9;
    if ( *v31 >= 0 && v9 < v30 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, v9, &v32[4]);
      *v31 = v22;
    }
  }
  v28 = v11;
  GameFromGameConfigStore = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
                              v14 + 3,
                              &v28,
                              v26,
                              a4);
  v13 = GameFromGameConfigStore;
  if ( GameFromGameConfigStore >= 0 )
    goto LABEL_23;
  v24 = 566LL;
LABEL_35:
  v23 = (unsigned int)GameFromGameConfigStore;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)v23);
  if ( v26[0] )
    operator delete[](v26[0]);
  return (unsigned int)v13;
}
