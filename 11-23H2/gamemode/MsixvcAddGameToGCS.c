/*
 * XREFs of MsixvcAddGameToGCS @ 0x1800056A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800027A8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180005BD0 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180005C50 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=28
__int64 __fastcall MsixvcAddGameToGCS(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // edx
  unsigned int v4; // r8d
  int ActivationFactory; // eax
  int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rdi
  __int64 v9; // rax
  int v10; // eax
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, PCWSTR, _BYTE *); // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // [rsp+28h] [rbp-39h] BYREF
  HSTRING v29; // [rsp+30h] [rbp-31h] BYREF
  __int64 v30; // [rsp+38h] [rbp-29h] BYREF
  __int64 v31; // [rsp+40h] [rbp-21h] BYREF
  __int64 v32; // [rsp+48h] [rbp-19h] BYREF
  __int64 v33; // [rsp+50h] [rbp-11h] BYREF
  __int64 v34; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-1h] BYREF
  HSTRING string; // [rsp+78h] [rbp+17h] BYREF
  __int64 v37; // [rsp+80h] [rbp+1Fh]
  _QWORD v38[2]; // [rsp+88h] [rbp+27h] BYREF
  _BYTE v39[16]; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v38[0] = a1;
  v28 = 0LL;
  if ( !a1 )
    return 2147942487LL;
  v34 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2, v3, v4);
    JUMPOUT(0x180005AF5LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v34);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v33 = 0LL;
    v7 = v34;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 176LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v38);
    v10 = v8(v7, *(_QWORD *)(v9 + 24), &v33);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA2,
        (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v10);
LABEL_32:
      v26 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      goto LABEL_34;
    }
    v30 = 0LL;
    v32 = 0LL;
    string = 0LL;
    v11 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v11 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
      __debugbreak();
    }
    v14 = RoGetActivationFactory(string, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v32);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v14);
LABEL_28:
      v24 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      goto LABEL_32;
    }
    v31 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v32 + 144LL))(v32, v33, &v31);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 169LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_26;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, 0LL, &v30);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 171LL;
      goto LABEL_15;
    }
    v17 = v30;
    v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 288LL);
    WindowsDeleteString(0LL);
    v29 = 0LL;
    v19 = v18(v17, &v29);
    v6 = v19;
    if ( v19 >= 0 )
    {
      v19 = CreateGameConfigStoreClient(&v28);
      v6 = v19;
      if ( v19 >= 0 )
      {
        v21 = *(__int64 (__fastcall **)(__int64, PCWSTR, _BYTE *))(*(_QWORD *)v28 + 40LL);
        StringRawBuffer = WindowsGetStringRawBuffer(v29, 0LL);
        v6 = v21(v28, StringRawBuffer, v39);
        if ( v6 < 0 )
        {
          *(_OWORD *)&hstringHeader.Reserved.Reserved2[4] = 0LL;
          v37 = 0LL;
          string = (HSTRING)WindowsGetStringRawBuffer(v29, 0LL);
          *(_DWORD *)&hstringHeader.Reserved.Reserved2[20] = 2;
          LODWORD(hstringHeader.Reserved.Reserved1) = 2;
          LODWORD(v37) = v37 & 0xFFFFFFE0 | 0x11;
          v6 = (**(__int64 (__fastcall ***)(__int64, HSTRING_HEADER *, _QWORD *))v28)(v28, &hstringHeader, v38);
        }
        if ( v28 )
          FreeGameConfigStoreClient();
        goto LABEL_25;
      }
      v20 = 178LL;
    }
    else
    {
      v20 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)(unsigned int)v19);
LABEL_25:
    WindowsDeleteString(v29);
    v29 = 0LL;
LABEL_26:
    v23 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_34:
  v27 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v6;
}
