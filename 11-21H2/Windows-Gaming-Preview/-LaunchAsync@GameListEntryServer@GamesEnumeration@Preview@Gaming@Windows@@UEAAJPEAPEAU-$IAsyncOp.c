/*
 * XREFs of ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002DE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003BAA4 (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18004AD54 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::LaunchAsync(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  signed __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // eax
  volatile signed __int64 *v8; // rbp
  signed __int64 v9; // rcx
  __int64 v10; // rax
  signed __int32 v11; // eax
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // edi
  _DWORD v20[6]; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a1 )
    goto LABEL_9;
  v4 = *((_QWORD *)a1 + 17);
  if ( v4 < 0 )
  {
    do
LABEL_8:
      v7 = *(_DWORD *)(2 * v4 + 0x10);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v4 + 16), v7 + 1, v7) );
LABEL_9:
    v8 = a1;
    if ( !a1 )
      goto LABEL_17;
    goto LABEL_10;
  }
  while ( (_DWORD)v4 != 0x7FFFFFFF )
  {
    v6 = _InterlockedCompareExchange64(a1 + 17, v4 + 1, v4);
    v5 = v4 == v6;
    v4 = v6;
    if ( v5 )
      break;
    if ( v6 < 0 )
      goto LABEL_8;
  }
LABEL_10:
  v9 = *((_QWORD *)a1 + 17);
  v8 = a1;
  if ( v9 < 0 )
  {
    do
LABEL_16:
      v11 = *(_DWORD *)(2 * v9 + 0x10);
    while ( v11 != 0x7FFFFFFF
         && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v11 + 1, v11) );
  }
  else
  {
    while ( (_DWORD)v9 != 0x7FFFFFFF )
    {
      v10 = _InterlockedCompareExchange64(a1 + 17, v9 + 1, v9);
      v5 = v9 == v10;
      v9 = v10;
      if ( v5 )
        break;
      if ( v10 < 0 )
        goto LABEL_16;
    }
  }
LABEL_17:
  v20[0] = 3;
  v20[1] = 128;
  v20[2] = 0;
  v12 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( !v12 )
  {
    *a2 = 0LL;
    goto LABEL_29;
  }
  *((_QWORD *)v12 + 1) = a1;
  v14 = v12 + 16;
  *(_QWORD *)v14 = 0LL;
  if ( v14 != &v21 )
  {
    *(_QWORD *)v14 = a1;
    v8 = 0LL;
  }
  *(_QWORD *)v13 = &off_180053170;
  *((_DWORD *)v13 + 6) = 0;
  `eh vector constructor iterator'(
    v13 + 32,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  *((_DWORD *)v13 + 6) = 0;
  *a2 = 0LL;
  v15 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v15
    || (v16 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
                v15,
                v20,
                L"Windows.Foundation.IAsyncOperation`1<Boolean>",
                0LL),
        (v17 = v16) == 0) )
  {
    (**(void (__fastcall ***)(char *, __int64))v13)(v13, 1LL);
LABEL_29:
    v18 = -2147024882;
    goto LABEL_30;
  }
  *(_QWORD *)(v16 + 256) = v13;
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 104LL))(v16 + 8);
  if ( v18 >= 0 )
  {
    *a2 = v17 + 176;
    v17 = 0LL;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 16LL))(v17 + 8);
LABEL_30:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v8);
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v18);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(a1);
  return (unsigned int)v18;
}
