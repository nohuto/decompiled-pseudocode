/*
 * XREFs of ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x1800C0768
 * Callers:
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x1800C0358 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800C0B90 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall IsGameManager::GetKGLLocationForApp(
        IsGameManager *this,
        CallerIdentity *a2,
        const unsigned __int16 *a3,
        struct Windows::Internal::String *a4)
{
  void *v7; // r14
  HSTRING v8; // rbx
  int ActivationFactory; // eax
  unsigned __int16 **v10; // r8
  int PackageFullNameFromAppId; // esi
  HRESULT v12; // eax
  int v13; // edi
  const WCHAR *StringRawBuffer; // rax
  int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-E0h]
  HSTRING v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING v30; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  HSTRING string; // [rsp+78h] [rbp-88h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  WCHAR pszPathOut[520]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4E8h] [rbp+3E8h]

  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v7 = 0LL;
  pv = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v29);
  PackageFullNameFromAppId = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v21 = (unsigned int)ActivationFactory;
    v22 = 1089LL;
LABEL_51:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v21,
      v24);
    goto LABEL_33;
  }
  v32 = -1LL;
  v33 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)&pv, v10);
  v7 = pv;
  if ( PackageFullNameFromAppId < 0 )
  {
LABEL_33:
    v13 = PackageFullNameFromAppId;
LABEL_34:
    v15 = v13;
    goto LABEL_18;
  }
  if ( !pv )
  {
    PackageFullNameFromAppId = -2147467261;
    goto LABEL_50;
  }
  PackageFullNameFromAppId = Windows::Internal::String::_InitializeHelper(
                               (Windows::Internal::String *)&v30,
                               (const unsigned __int16 *)pv);
  if ( PackageFullNameFromAppId < 0 )
  {
    v8 = v30;
LABEL_50:
    v21 = (unsigned int)PackageFullNameFromAppId;
    v22 = 1094LL;
    goto LABEL_51;
  }
  v8 = v30;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v29 + 416LL))(v29, 0LL, v30, &v28);
  v13 = v12;
  PackageFullNameFromAppId = -2147023728;
  if ( v12 == -2147023728 )
    goto LABEL_33;
  if ( v12 < 0 )
  {
    v23 = 1098LL;
LABEL_45:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v12,
      v24);
    goto LABEL_34;
  }
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageLocation", 0x30u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v12 = RoGetActivationFactory(string, &GUID_b8c8be3c_3a39_4e73_b4ba_c70d91d1b8ea, &v27);
  v13 = v12;
  if ( v12 < 0 )
  {
    v23 = 1100LL;
    goto LABEL_45;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v27 + 96LL))(v27, v28, &v26);
  v13 = v12;
  if ( v12 < 0 )
  {
    v23 = 1102LL;
    goto LABEL_45;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v26 + 128LL))(v26, &v25);
  v13 = v12;
  if ( v12 < 0 )
  {
    v23 = 1104LL;
    goto LABEL_45;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v25, 0LL);
  if ( a3 )
  {
    v12 = PathCchCombine(pszPathOut, 0x208uLL, StringRawBuffer, a3);
    v13 = v12;
    if ( v12 < 0 )
    {
      v23 = 1108LL;
    }
    else
    {
      v12 = Windows::Internal::String::_InitializeHelper(a4, pszPathOut);
      v13 = v12;
      if ( v12 >= 0 )
      {
LABEL_17:
        v15 = 0;
        goto LABEL_18;
      }
      v23 = 1110LL;
    }
    goto LABEL_45;
  }
  if ( StringRawBuffer )
  {
    v15 = Windows::Internal::String::_InitializeHelper(a4, StringRawBuffer);
    if ( v15 >= 0 )
      goto LABEL_17;
  }
  else
  {
    v15 = -2147467261;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45A,
    (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v15,
    v24);
LABEL_18:
  if ( v25 )
    WindowsDeleteString(v25);
  if ( v8 )
    WindowsDeleteString(v8);
  if ( v7 )
    CoTaskMemFree(v7);
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v15;
}
