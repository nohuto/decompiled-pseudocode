/*
 * XREFs of ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002EE7C
 * Callers:
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002CF30 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180029D78 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18003A564 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
        const unsigned __int16 *a1,
        struct Windows::Storage::IStorageFile **a2)
{
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  struct Windows::Storage::IStorageFile *v10; // rcx
  struct Windows::Storage::IStorageFile *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct Windows::Storage::IStorageFile *v15; // [rsp+20h] [rbp-29h] BYREF
  __int64 v16; // [rsp+28h] [rbp-21h] BYREF
  __int64 v17; // [rsp+30h] [rbp-19h] BYREF
  const WCHAR *v18; // [rsp+38h] [rbp-11h] BYREF
  HSTRING string; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-1h] BYREF
  HSTRING_HEADER v21; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v18 = a1;
  if ( WindowsCreateStringReference(L"Windows.Storage.StorageFile", 0x1Bu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v17 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_5984c710_daf2_43c8_8bb4_a4d3eacfd03f, &v17);
  v4 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v16 = 0LL;
    v5 = v17;
    v6 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v17 + 48LL);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, &v18);
    v8 = v6(v5, v7[1].Reserved.Reserved1, &v16);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v15 = 0LL;
      v9 = v16;
      v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>(v16);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::IStorageFile **))(*(_QWORD *)v9 + 64LL))(
               v9,
               &v15);
      if ( v4 >= 0 )
      {
        v11 = v15;
        v10 = 0LL;
        v15 = 0LL;
        *a2 = v11;
        v4 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x436,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v4);
        v10 = v15;
      }
      if ( v10 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(struct Windows::Storage::IStorageFile *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x433,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v8);
    }
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x430,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v4;
}
