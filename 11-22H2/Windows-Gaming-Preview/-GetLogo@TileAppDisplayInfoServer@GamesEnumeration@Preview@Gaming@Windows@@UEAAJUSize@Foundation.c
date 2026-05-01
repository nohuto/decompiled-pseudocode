/*
 * XREFs of ?GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180044B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180013AFC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180044ED0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Fou.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::GetLogo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  HRESULT v14; // eax
  HSTRING v15; // rbx
  int ActivationFactory; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+38h] [rbp-29h] BYREF
  __int64 v25; // [rsp+40h] [rbp-21h] BYREF
  __int64 v26; // [rsp+48h] [rbp-19h] BYREF
  __int64 v27; // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  __int64 v29; // [rsp+60h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v24 = a2;
  v29 = a2;
  if ( !a3 )
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return (unsigned int)v4;
  }
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), &v24);
  v4 = v5;
  if ( v5 >= 0 )
  {
    if ( !v24 )
    {
      v4 = -2147467261;
      v6 = 2147500035LL;
      v7 = 64LL;
      goto LABEL_7;
    }
    v28 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v28);
    v4 = v8;
    if ( v8 < 0 )
    {
      v10 = (unsigned int)v8;
      v11 = 67LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)v10);
LABEL_33:
      v21 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_35;
    }
    if ( !v28 )
    {
      v4 = -2147467261;
      v10 = 2147500035LL;
      v11 = 68LL;
      goto LABEL_12;
    }
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, v9, v29, &v27);
    v4 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)(unsigned int)v12);
LABEL_31:
      v20 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_33;
    }
    v26 = 0LL;
    v13 = v27;
    v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *> *>(v27);
    if ( v4 >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v26);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)(unsigned int)v4);
LABEL_29:
      v19 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      goto LABEL_31;
    }
    v25 = 0LL;
    string = 0LL;
    v14 = WindowsCreateStringReference(
            L"Windows.Storage.Streams.RandomAccessStreamReference",
            0x33u,
            &hstringHeader,
            &string);
    if ( v14 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
      JUMPOUT(0x180044EC9LL);
    }
    v15 = string;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    ActivationFactory = RoGetActivationFactory(v15, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v25);
    v4 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 64LL))(v25, v26, a3);
      v4 = ActivationFactory;
      if ( ActivationFactory >= 0 )
        goto LABEL_27;
      v17 = 88LL;
    }
    else
    {
      v17 = 86LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_27:
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_29;
  }
  v6 = (unsigned int)v5;
  v7 = 63LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
    (const char *)v6);
LABEL_35:
  v22 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return (unsigned int)v4;
}
