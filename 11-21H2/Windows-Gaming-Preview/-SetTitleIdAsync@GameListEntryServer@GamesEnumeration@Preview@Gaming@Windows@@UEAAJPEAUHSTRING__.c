/*
 * XREFs of ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800306C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___ @ 0x180032B3C (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_180032B3C.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetTitleIdAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v9; // eax
  int v10; // edi
  char *v11; // rbx
  signed __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  signed __int32 v15; // eax
  HSTRING v16; // r8
  signed __int64 v17; // rcx
  __int64 v18; // rax
  signed __int32 v19; // eax
  _DWORD v20[4]; // [rsp+20h] [rbp-30h] BYREF
  char *v21; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v22; // [rsp+38h] [rbp-18h]
  HSTRING v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING newString; // [rsp+80h] [rbp+30h] BYREF

  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 1574LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  *a3 = 0LL;
  if ( WindowsGetStringLen(a2) >= 0x104 )
  {
    v6 = -2147024809;
    v7 = 1578LL;
    goto LABEL_3;
  }
  WindowsDeleteString(0LL);
  newString = 0LL;
  v9 = WindowsDuplicateString(a2, &newString);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (char *)this - 16;
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v12 = *((_QWORD *)v11 + 17);
      if ( v12 < 0 )
      {
        do
LABEL_15:
          v15 = *(_DWORD *)(2 * v12 + 0x10);
        while ( v15 != 0x7FFFFFFF
             && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v12 + 16), v15 + 1, v15) );
      }
      else
      {
        while ( (_DWORD)v12 != 0x7FFFFFFF )
        {
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 17, v12 + 1, v12);
          v13 = v12 == v14;
          v12 = v14;
          if ( v13 )
            break;
          if ( v14 < 0 )
            goto LABEL_15;
        }
      }
    }
    v16 = newString;
    newString = 0LL;
    v21 = (char *)this - 16;
    v22 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v17 = *((_QWORD *)v11 + 17);
      if ( v17 < 0 )
      {
        do
LABEL_23:
          v19 = *(_DWORD *)(2 * v17 + 0x10);
        while ( v19 != 0x7FFFFFFF
             && v19 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v17 + 16), v19 + 1, v19) );
      }
      else
      {
        while ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v18 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 17, v17 + 1, v17);
          v13 = v17 == v18;
          v17 = v18;
          if ( v13 )
            break;
          if ( v18 < 0 )
            goto LABEL_23;
        }
      }
    }
    v20[2] = 0;
    v23 = v16;
    v20[0] = 3;
    v20[1] = 128;
    v10 = ((__int64 (__fastcall *)(_DWORD *, struct Windows::Foundation::IAsyncAction **, HSTRING, char **))Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___)(
            v20,
            a3,
            v16,
            &v21);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v22);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x641,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v10);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this - 2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62D,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v9);
  }
  WindowsDeleteString(newString);
  return (unsigned int)v10;
}
