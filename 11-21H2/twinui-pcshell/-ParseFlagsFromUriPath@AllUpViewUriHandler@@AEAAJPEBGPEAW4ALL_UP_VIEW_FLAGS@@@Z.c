/*
 * XREFs of ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180493F7C
 * Callers:
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x180493D80 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A954 (--$GetActivationFactory@V-$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AllUpViewUriHandler::ParseFlagsFromUriPath(
        AllUpViewUriHandler *this,
        const unsigned __int16 *a2,
        enum ALL_UP_VIEW_FLAGS *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rdi
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rdi
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  const WCHAR *StringRawBuffer; // rax
  char v17; // si
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64 *); // rdi
  int v20; // eax
  __int64 v21; // rbx
  int (__fastcall *v22)(__int64, __int64, HSTRING *); // rdi
  const WCHAR *v23; // rax
  HSTRING v25; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  __int64 v27; // [rsp+40h] [rbp-19h] BYREF
  __int64 v28; // [rsp+48h] [rbp-11h] BYREF
  int v29; // [rsp+50h] [rbp-9h]
  __int64 v30; // [rsp+58h] [rbp-1h] BYREF
  const WCHAR *v31; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v31 = a2;
  v29 = 0;
  *(_DWORD *)a3 = 0;
  v30 = 0LL;
  v33 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Foundation.Uri", 0x17u, 0x16u);
  v4 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
         v33,
         (__int64)&v30);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v27 = 0LL;
    v6 = v30;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 48LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v31, v8);
    v10 = v7(v6, *(_QWORD *)(v9 + 24), &v27);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v10);
LABEL_20:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
      goto LABEL_21;
    }
    string = 0LL;
    v11 = v27;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 136LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v13 = v12(v11, &string);
    v5 = v13;
    if ( v13 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v17 = 1;
      if ( CompareStringOrdinal(StringRawBuffer, -1, L"ms-taskswitcher", -1, 1) == 2 )
      {
        v28 = 0LL;
        v18 = v27;
        v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 120LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
        v20 = v19(v18, &v28);
        v5 = v20;
        if ( v20 >= 0 )
        {
          v25 = 0LL;
          v21 = v28;
          v22 = *(int (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v28 + 48LL);
          WindowsDeleteString(0LL);
          v25 = 0LL;
          v33 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"invoketo", 9u, 8u);
          v29 = 1;
          if ( v22(v21, v33, &v25) < 0
            || (v23 = WindowsGetStringRawBuffer(v25, 0LL), CompareStringOrdinal(v23, -1, L"timeline", -1, 1) != 2) )
          {
            v17 = 0;
          }
          if ( v17 )
            *(_DWORD *)a3 |= 2u;
          v5 = 0;
          WindowsDeleteString(v25);
          v25 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
            (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
        goto LABEL_19;
      }
      v5 = -2147418113;
      v14 = 2147549183LL;
      v15 = 85LL;
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)v14);
LABEL_19:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  return v5;
}
