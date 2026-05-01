/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180030110
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800300F0 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 *     wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___ @ 0x180030B34 (wil--details--lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___--_lambda_call__lambda_95b9.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800357AC (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18004AD54 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile *a2,
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  signed __int32 v22; // eax
  HSTRING v23; // r14
  HSTRING v24; // r15
  volatile signed __int64 *v25; // rsi
  signed __int64 v26; // rcx
  __int64 v27; // rax
  signed __int32 v28; // eax
  char *v29; // rax
  __int64 v30; // r8
  char *v31; // rdi
  char *v32; // rax
  HSTRING string; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v34[12]; // [rsp+40h] [rbp-41h] BYREF
  HSTRING newString; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v36; // [rsp+58h] [rbp-29h] BYREF
  HSTRING v37; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v38[4]; // [rsp+68h] [rbp-19h] BYREF
  char v39; // [rsp+88h] [rbp+7h]
  char v40; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  UINT32 length; // [rsp+E8h] [rbp+67h] BYREF

  if ( *((_QWORD *)this + 30) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CB,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  if ( WindowsGetStringLen(a3) < 0x104 )
  {
    string = 0LL;
    if ( a2 )
    {
      *(_QWORD *)v34 = 0LL;
      v10 = (**(__int64 (__fastcall ***)(struct Windows::Storage::IStorageFile *, GUID *, _BYTE *))a2)(
              a2,
              &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
              v34);
      v9 = v10;
      if ( v10 < 0 )
      {
        v11 = (unsigned int)v10;
        v12 = 1492LL;
        goto LABEL_21;
      }
      v13 = *(_QWORD *)v34;
      v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(**(_QWORD **)v34 + 96LL);
      WindowsDeleteString(string);
      v15 = v14(v13, &string);
      v9 = v15;
      if ( v15 < 0 )
      {
        v11 = (unsigned int)v15;
        v12 = 1493LL;
        goto LABEL_21;
      }
      length = 0;
      WindowsGetStringRawBuffer(string, &length);
      if ( !string || !length )
      {
        v9 = -2147024809;
        v11 = 2147942487LL;
        v12 = 1497LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v11);
        v21 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 )
        {
          *(_QWORD *)v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
LABEL_47:
        WindowsDeleteString(string);
        return v9;
      }
      v16 = *(_QWORD *)v34;
      if ( *(_QWORD *)v34 )
      {
        *(_QWORD *)v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v17 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v18 = *((_QWORD *)v17 + 17);
      if ( v18 < 0 )
      {
        do
LABEL_25:
          v22 = *(_DWORD *)(2 * v18 + 0x10);
        while ( v22 != 0x7FFFFFFF
             && v22 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v18 + 16), v22 + 1, v22) );
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
            goto LABEL_25;
        }
      }
    }
    WindowsDeleteString(0LL);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v23 = string;
    string = 0LL;
    v36 = v23;
    v24 = newString;
    newString = 0LL;
    v37 = v24;
    v38[0] = &string;
    v38[1] = &v36;
    v38[2] = &newString;
    v38[3] = &v37;
    v39 = 1;
    v25 = (volatile signed __int64 *)((char *)this - 16);
    if ( v17 )
    {
      v26 = *((_QWORD *)v17 + 17);
      if ( v26 < 0 )
      {
        do
LABEL_33:
          v28 = *(_DWORD *)(2 * v26 + 0x10);
        while ( v28 != 0x7FFFFFFF
             && v28 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v26 + 16), v28 + 1, v28) );
      }
      else
      {
        while ( (_DWORD)v26 != 0x7FFFFFFF )
        {
          v27 = _InterlockedCompareExchange64(v17 + 17, v26 + 1, v26);
          v19 = v26 == v27;
          v26 = v27;
          if ( v19 )
            break;
          if ( v27 < 0 )
            goto LABEL_33;
        }
      }
      v23 = v36;
      v24 = v37;
    }
    *(_DWORD *)v34 = 3;
    *(_QWORD *)&v34[4] = 128LL;
    v29 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v31 = v29;
    if ( v29 )
    {
      *((_QWORD *)v29 + 1) = v17;
      v32 = v29 + 16;
      *(_QWORD *)v32 = 0LL;
      if ( v32 != &v40 )
      {
        *(_QWORD *)v32 = v17;
        v25 = 0LL;
      }
      *((_QWORD *)v31 + 3) = v23;
      *((_QWORD *)v31 + 4) = v24;
      *(_QWORD *)v31 = &off_180053150;
      *((_DWORD *)v31 + 10) = 0;
      `eh vector constructor iterator'(
        v31 + 48,
        8uLL,
        1uLL,
        (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
        (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
      *((_DWORD *)v31 + 10) = 0;
    }
    else
    {
      v31 = 0LL;
    }
    v9 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           v34,
           a4,
           v30,
           v31);
    if ( v25 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v25);
    if ( (v9 & 0x80000000) == 0 )
    {
      v39 = 0;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x603,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v9);
    }
    wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___(v38);
    WindowsDeleteString(newString);
    newString = 0LL;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    goto LABEL_47;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5CE,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x80070057LL);
  return v9;
}
