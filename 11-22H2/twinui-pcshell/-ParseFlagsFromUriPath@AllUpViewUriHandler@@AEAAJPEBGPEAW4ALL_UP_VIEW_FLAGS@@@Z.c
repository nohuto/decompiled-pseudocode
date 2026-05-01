/*
 * XREFs of ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180549B6C
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180549980 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802D2174 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AllUpViewUriHandler::ParseFlagsFromUriPath(
        AllUpViewUriHandler *this,
        const unsigned __int16 *a2,
        enum ALL_UP_VIEW_FLAGS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, __int64 *); // rdi
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  HSTRING string; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v24 = a2;
  *(_DWORD *)a3 = 0;
  v23 = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         v26,
         &v23);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v21 = 0LL;
    v5 = v23;
    v6 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v23 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v24, v7);
    v9 = v6(v5, v8[1].Reserved.Reserved1, &v21);
    v4 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v9);
LABEL_15:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      goto LABEL_16;
    }
    string = 0LL;
    v10 = v21;
    v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 136LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = v11(v10, &string);
    v4 = v12;
    if ( v12 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ms-taskswitcher", -1, 1) == 2 )
      {
        v22 = 0LL;
        v16 = v21;
        v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 120LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        v18 = v17(v16, &v22);
        v4 = v18;
        if ( v18 >= 0 )
          v4 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
            (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        goto LABEL_14;
      }
      v4 = -2147418113;
      v13 = 2147549183LL;
      v14 = 85LL;
    }
    else
    {
      v13 = (unsigned int)v12;
      v14 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)v13);
LABEL_14:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)v3);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  return v4;
}
