/*
 * XREFs of ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800D300C
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800D2890 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x1800AFB00 (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AFD84 (--$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFi.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800B0594 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x1800B0714 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800D3890 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall CopyFaviconToEdge(HSTRING a1, HSTRING *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r8d
  __int64 v8; // rsi
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  int v12; // eax
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  HRESULT v15; // eax
  __int64 v16; // r8
  __int64 *v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rcx
  HSTRING v21; // rbx
  HSTRING_HEADER *v22; // rax
  HRESULT v23; // eax
  const char *v24; // r9
  __int64 result; // rax
  int v26; // [rsp+20h] [rbp-98h]
  int v27; // [rsp+20h] [rbp-98h]
  unsigned int v28; // [rsp+30h] [rbp-88h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-80h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-78h] BYREF
  HSTRING string; // [rsp+48h] [rbp-70h] BYREF
  __int64 v32; // [rsp+50h] [rbp-68h] BYREF
  int v33[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-58h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  HSTRING_HEADER v36; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v28 = 0;
  try
  {
    GetEdgeFaviconCache();
    v29 = 0LL;
    v5 = *(_QWORD *)wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>((const WCHAR *)v33, v3, v4);
    v6 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v5);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1671LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
        (const char *)(unsigned int)v6,
        v26);
    wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
      &v32,
      v29,
      v7);
    v28 = 2;
    v8 = v32;
    v32 = 0LL;
    v35 = v8;
    if ( *(_QWORD *)v33 )
      (*(void (**)(void))(**(_QWORD **)v33 + 16LL))();
    string = 0LL;
    v29 = 0LL;
    v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v8)(v8, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v29);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v9,
        v26);
    v10 = v29;
    v11 = (*v29)[11];
    WindowsDeleteString(string);
    string = 0LL;
    v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), HSTRING *))v11)(v10, &string);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        68LL,
        (__int64)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
        (const char *)(unsigned int)v12,
        v26);
    if ( v29 )
      ((void (*)(void))(*v29)[2])();
    newString = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_18011A180, v13);
    v15 = WindowsConcatString(string, (HSTRING)v14[1].Reserved.Reserved1, &newString);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
        (const char *)(unsigned int)v15,
        v26);
    v28 = 1;
    *(_QWORD *)v33 = newString;
    v29 = v34;
    v17 = (__int64 *)___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFile_Storage_Windows__P8456_EAAJPEAUIStorageFolder_56_PEAUHSTRING____W4NameCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU756___QEAPEAU8___QEAW4956__Z(
                       (__int64)&v32,
                       v8,
                       v16,
                       &v29,
                       v33,
                       &v28);
    v19 = *v17;
    *v17 = 0LL;
    *(_QWORD *)v33 = v19;
    v20 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = newString;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_18011A188, v18);
    v23 = WindowsConcatString((HSTRING)v22[1].Reserved.Reserved1, v21, a2);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        83LL,
        (__int64)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
        (const char *)(unsigned int)v23,
        v27);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    WindowsDeleteString(newString);
    newString = 0LL;
    WindowsDeleteString(string);
    string = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v34 )
      ((void (*)(void))(*v34)[2])();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x56,
                           (int)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
                           v24);
  }
  return result;
}
