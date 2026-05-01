/*
 * XREFs of ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001FC60
 * Callers:
 *     ?UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001D8D0 (-UnmergeEntryAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGame.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___ @ 0x1800212FC (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult__ea_1800212FC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_18002A110.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::UnmergeEntryAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v8; // rbx
  signed __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  signed __int32 v12; // eax
  __int64 v13; // r8
  signed __int64 v14; // rcx
  __int64 v15; // rax
  signed __int32 v16; // eax
  __int64 v17; // rdx
  int v18; // esi
  __int64 v19; // r8
  int v20[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  __int64 v22; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2 )
  {
    v6 = 597LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v6 = 598LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = a1 - 16;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    if ( v9 < 0 )
    {
      do
LABEL_13:
        v12 = *(_DWORD *)(2 * v9 + 0x10);
      while ( v12 != 0x7FFFFFFF
           && v12 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v12 + 1, v12) );
    }
    else
    {
      while ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v9 + 1, v9);
        v10 = v9 == v11;
        v9 = v11;
        if ( v10 )
          break;
        if ( v11 < 0 )
          goto LABEL_13;
      }
    }
  }
  v21 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v22 = v8;
  if ( v8 )
  {
    v14 = *(_QWORD *)(v8 + 32);
    if ( v14 < 0 )
    {
      do
LABEL_21:
        v16 = *(_DWORD *)(2 * v14 + 0x10);
      while ( v16 != 0x7FFFFFFF
           && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v14 + 16), v16 + 1, v16) );
    }
    else
    {
      while ( (_DWORD)v14 != 0x7FFFFFFF )
      {
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 32), v14 + 1, v14);
        v10 = v14 == v15;
        v14 = v15;
        if ( v10 )
          break;
        if ( v15 < 0 )
          goto LABEL_21;
      }
    }
  }
  v20[0] = 3;
  v20[1] = 128;
  v20[2] = 0;
  v18 = ((__int64 (__fastcall *)(int *, __int64, __int64, __int64 *))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___)(
          v20,
          a3,
          v13,
          &v21);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
      v22,
      v17,
      v19);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v18);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
      v8,
      v17,
      v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v18;
}
