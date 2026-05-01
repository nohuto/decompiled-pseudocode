/*
 * XREFs of ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002E740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013C20.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CBasicResult_unsigned_char_0__bool_Windows::Internal::ComTaskPoolHandler__lambda_75b78523e3da460933f50e5d76bfa16b___ @ 0x180031CB4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CBasicResult_unsigned_char_0__bool_Wind.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::LaunchAsync(
        volatile signed __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  bool v4; // zf
  __int64 v5; // rax
  signed __int32 v6; // eax
  signed __int64 v7; // rcx
  __int64 v8; // rax
  signed __int32 v9; // eax
  int v10; // edi
  int v12[4]; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v13; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a1 )
  {
    a3 = *((_QWORD *)a1 + 17);
    if ( a3 < 0 )
    {
      do
LABEL_8:
        v6 = *(_DWORD *)(2 * a3 + 0x10);
      while ( v6 != 0x7FFFFFFF
           && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * a3 + 16), v6 + 1, v6) );
    }
    else
    {
      while ( (_DWORD)a3 != 0x7FFFFFFF )
      {
        v5 = _InterlockedCompareExchange64(a1 + 17, a3 + 1, a3);
        v4 = a3 == v5;
        a3 = v5;
        if ( v4 )
          break;
        if ( v5 < 0 )
          goto LABEL_8;
      }
    }
  }
  v13 = a1;
  v14 = a1;
  if ( a1 )
  {
    v7 = *((_QWORD *)a1 + 17);
    if ( v7 < 0 )
    {
      do
LABEL_16:
        v9 = *(_DWORD *)(2 * v7 + 0x10);
      while ( v9 != 0x7FFFFFFF
           && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v7 + 16), v9 + 1, v9) );
    }
    else
    {
      while ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = _InterlockedCompareExchange64(a1 + 17, v7 + 1, v7);
        v4 = v7 == v8;
        v7 = v8;
        if ( v4 )
          break;
        if ( v8 < 0 )
          goto LABEL_16;
      }
    }
  }
  v12[2] = 0;
  v12[0] = 3;
  v12[1] = 128;
  v10 = ((__int64 (__fastcall *)(int *, __int64, signed __int64, volatile signed __int64 **))Windows::Internal::MakeAsyncOperation_Windows::Internal::CBasicResult_unsigned_char_0__bool_Windows::Internal::ComTaskPoolHandler__lambda_75b78523e3da460933f50e5d76bfa16b___)(
          v12,
          a2,
          a3,
          &v13);
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v14);
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v10);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(a1);
  return (unsigned int)v10;
}
