/*
 * XREFs of ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180041280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180034240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeUserConf.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800357AC (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18004AD54 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::SaveAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  signed __int64 v4; // r8
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // eax
  volatile signed __int64 *v8; // rsi
  signed __int64 v9; // rcx
  __int64 v10; // rax
  signed __int32 v11; // eax
  char *v12; // rax
  __int64 v13; // r8
  char *v14; // rdi
  char *v15; // rax
  int v16; // edi
  _DWORD v18[6]; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !this )
    goto LABEL_9;
  v4 = *((_QWORD *)this + 7);
  if ( v4 < 0 )
  {
    do
LABEL_8:
      v7 = *(_DWORD *)(2 * v4 + 0x10);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v4 + 16), v7 + 1, v7) );
LABEL_9:
    v8 = (volatile signed __int64 *)this;
    if ( !this )
      goto LABEL_17;
    goto LABEL_10;
  }
  while ( (_DWORD)v4 != 0x7FFFFFFF )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v4 + 1, v4);
    v5 = v4 == v6;
    v4 = v6;
    if ( v5 )
      break;
    if ( v6 < 0 )
      goto LABEL_8;
  }
LABEL_10:
  v9 = *((_QWORD *)this + 7);
  v8 = (volatile signed __int64 *)this;
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
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v9 + 1, v9);
      v5 = v9 == v10;
      v9 = v10;
      if ( v5 )
        break;
      if ( v10 < 0 )
        goto LABEL_16;
    }
  }
LABEL_17:
  v18[2] = 0;
  v18[0] = 3;
  v18[1] = 128;
  v12 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 1) = this;
    v15 = v12 + 16;
    *(_QWORD *)v15 = 0LL;
    if ( v15 != &v19 )
    {
      *(_QWORD *)v15 = this;
      v8 = 0LL;
    }
    *((_DWORD *)v14 + 6) = 0;
    *(_QWORD *)v14 = &off_180053748;
    `eh vector constructor iterator'(
      v14 + 32,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v14 + 6) = 0;
  }
  else
  {
    v14 = 0LL;
  }
  v16 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
          (__int64)v18,
          a2,
          v13,
          (void (__fastcall ***)(_QWORD, __int64))v14);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release(v8);
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v16);
  if ( this )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)this);
  return (unsigned int)v16;
}
