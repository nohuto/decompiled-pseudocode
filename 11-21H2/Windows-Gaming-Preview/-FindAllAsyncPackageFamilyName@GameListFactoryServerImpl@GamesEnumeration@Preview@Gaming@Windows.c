/*
 * XREFs of ?FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001E8F0
 * Callers:
 *     ?FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001D7B0 (-FindAllAsync@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyn.c)
 *     ?FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001D7D0 (-FindAllAsyncPackageFamilyName@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UE.c)
 *     ?FindAllAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001E8D0 (-FindAllAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$I.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___ @ 0x180020E04 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_18002A110.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::FindAllAsyncPackageFamilyName(
        __int64 a1,
        HSTRING a2,
        __int64 a3)
{
  signed __int64 v6; // r9
  bool v7; // zf
  __int64 v8; // rax
  signed __int32 v9; // eax
  HRESULT v10; // eax
  __int64 v11; // r8
  int v12; // edi
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  __int64 v16; // rax
  signed __int32 v17; // eax
  HSTRING v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD v24[4]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+30h] [rbp-30h] BYREF
  __int16 v26; // [rsp+38h] [rbp-28h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  HSTRING string; // [rsp+50h] [rbp-10h]
  char v30; // [rsp+58h] [rbp-8h]
  char v31; // [rsp+59h] [rbp-7h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 < 0 )
    {
      do
LABEL_8:
        v9 = *(_DWORD *)(2 * v6 + 0x10);
      while ( v9 != 0x7FFFFFFF
           && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v6 + 16), v9 + 1, v9) );
    }
    else
    {
      while ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v6 + 1, v6);
        v7 = v6 == v8;
        v6 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
          goto LABEL_8;
      }
    }
  }
  v26 = 0;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v10 = WindowsDuplicateString(a2, &newString);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (unsigned int)v10;
    v14 = 377LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)v13);
    goto LABEL_24;
  }
  v27 = a1;
  v28 = a1;
  if ( a1 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    if ( v15 < 0 )
    {
      do
LABEL_18:
        v17 = *(_DWORD *)(2 * v15 + 0x10);
      while ( v17 != 0x7FFFFFFF
           && v17 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v15 + 16), v17 + 1, v17) );
    }
    else
    {
      while ( (_DWORD)v15 != 0x7FFFFFFF )
      {
        v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v15 + 1, v15);
        v7 = v15 == v16;
        v15 = v16;
        if ( v7 )
          break;
        if ( v16 < 0 )
          goto LABEL_18;
      }
    }
  }
  v18 = newString;
  newString = 0LL;
  v24[2] = 0;
  string = v18;
  v30 = 0;
  v31 = HIBYTE(v26) + 1;
  LOBYTE(v26) = 1;
  v24[0] = 3;
  v24[1] = 128;
  v12 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 *))Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4___)(
          v24,
          a3,
          v11,
          &v27);
  WindowsDeleteString(string);
  if ( v28 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
      v28,
      v19,
      v20);
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 394LL;
    goto LABEL_23;
  }
LABEL_24:
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
      a1,
      v21,
      v22);
  return (unsigned int)v12;
}
