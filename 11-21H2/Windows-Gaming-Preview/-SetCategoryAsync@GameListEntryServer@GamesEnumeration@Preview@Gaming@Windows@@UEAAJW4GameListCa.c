/*
 * XREFs of ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___ @ 0x180032A6C (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Internal--ComTaskPo.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetCategoryAsync(
        __int64 a1,
        int a2,
        __int64 a3)
{
  signed __int64 v5; // rcx
  bool v6; // zf
  __int64 v7; // rax
  signed __int32 v8; // eax
  signed __int64 v9; // rcx
  __int64 v10; // rax
  signed __int32 v11; // eax
  int v12; // edi
  int v13[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 144) == 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x544,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 < 0 )
    {
      do
LABEL_9:
        v8 = *(_DWORD *)(2 * v5 + 0x10);
      while ( v8 != 0x7FFFFFFF
           && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v5 + 16), v8 + 1, v8) );
    }
    else
    {
      while ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v5 + 1, v5);
        v6 = v5 == v7;
        v5 = v7;
        if ( v6 )
          break;
        if ( v7 < 0 )
          goto LABEL_9;
      }
    }
    v9 = *(_QWORD *)(a1 + 136);
    v14 = a1;
    v15 = (volatile signed __int64 *)a1;
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
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v9 + 1, v9);
        v6 = v9 == v10;
        v9 = v10;
        if ( v6 )
          break;
        if ( v10 < 0 )
          goto LABEL_16;
      }
    }
    v13[2] = 0;
    v16 = a2;
    v13[0] = 3;
    v13[1] = 128;
    v12 = ((__int64 (__fastcall *)(int *, __int64, __int64, __int64 *))Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___)(
            v13,
            a3,
            a3,
            &v14);
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v15);
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x557,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
    return (unsigned int)v12;
  }
}
