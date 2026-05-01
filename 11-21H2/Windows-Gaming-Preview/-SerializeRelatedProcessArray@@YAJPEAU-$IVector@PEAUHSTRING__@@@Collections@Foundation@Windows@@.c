/*
 * XREFs of ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180018E84
 * Callers:
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180019770 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FD60 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     _lambda_8d476462564c7429b3edd0aaa6c2160c_::operator() @ 0x180041414 (_lambda_8d476462564c7429b3edd0aaa6c2160c_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001B67C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=27
__int64 __fastcall SerializeRelatedProcessArray(__int64 (__fastcall ***a1)(_QWORD, GUID *, _QWORD *), HSTRING *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  char v6; // di
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  HRESULT v11; // eax
  int v12; // eax
  int v13; // ebx
  HRESULT v14; // eax
  __int64 v15; // rdx
  HSTRING v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v23; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v26; // [rsp+80h] [rbp+30h] BYREF
  HSTRING newString; // [rsp+90h] [rbp+40h] BYREF
  HSTRING string; // [rsp+98h] [rbp+48h] BYREF

  string = 0LL;
  v24[0] = 0LL;
  v21 = 0LL;
  v3 = (**a1)(a1, &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e, v24);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 420LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_33;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v24[0] + 48LL))(v24[0], &v21);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 421LL;
    goto LABEL_7;
  }
  WindowsDeleteString(string);
  string = 0LL;
  v3 = WindowsCreateString(&word_18005773C, 1u, &string);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 422LL;
    goto LABEL_7;
  }
  v6 = 0;
  newString = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 56LL))(v21, &v26);
  if ( v7 >= 0 )
  {
    while ( v26 )
    {
      v23 = 0LL;
      v8 = v21;
      v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 48LL);
      WindowsDeleteString(0LL);
      v23 = 0LL;
      v10 = v9(v8, &v23);
      v4 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AF,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_27;
      }
      string2 = 0LL;
      v24[1] = WindowsGetStringRawBuffer(v23, 0LL);
      v11 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string2);
      v4 = v11;
      if ( v11 < 0 )
      {
        v17 = 434LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v11);
        WindowsDeleteString(string2);
        string2 = 0LL;
LABEL_27:
        WindowsDeleteString(v23);
        goto LABEL_21;
      }
      WindowsDeleteString(newString);
      newString = 0LL;
      v11 = WindowsConcatString(*a2, string2, &newString);
      v4 = v11;
      if ( v11 < 0 )
      {
        v17 = 435LL;
        goto LABEL_25;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      WindowsDeleteString(0LL);
      newString = 0LL;
      v11 = WindowsConcatString(*a2, string, &newString);
      v4 = v11;
      if ( v11 < 0 )
      {
        v17 = 438LL;
        goto LABEL_25;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      v6 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 64LL))(v21, &v26);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          443LL,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v12);
      WindowsDeleteString(string2);
      string2 = 0LL;
      WindowsDeleteString(v23);
      if ( v13 < 0 )
        goto LABEL_18;
    }
    if ( v6 )
      goto LABEL_18;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      427LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v7);
  }
  WindowsDeleteString(string);
  string = 0LL;
  v14 = WindowsCreateString(&word_180057740, 2u, &string);
  v4 = v14;
  if ( v14 < 0 )
  {
    v15 = 448LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
LABEL_21:
    v16 = newString;
    goto LABEL_32;
  }
LABEL_18:
  WindowsDeleteString(newString);
  newString = 0LL;
  v14 = WindowsConcatString(*a2, string, &newString);
  v4 = v14;
  if ( v14 < 0 )
  {
    v15 = 451LL;
    goto LABEL_20;
  }
  WindowsDeleteString(*a2);
  *a2 = newString;
  v16 = 0LL;
  newString = 0LL;
  v4 = 0;
LABEL_32:
  WindowsDeleteString(v16);
  newString = 0LL;
LABEL_33:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  WindowsDeleteString(string);
  return v4;
}
