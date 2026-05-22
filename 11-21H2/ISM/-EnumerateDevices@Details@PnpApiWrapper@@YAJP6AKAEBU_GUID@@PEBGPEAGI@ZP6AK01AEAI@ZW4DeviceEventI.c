/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18003C640
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18003D448 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003C894 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800A8CF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, PCWSTR, _WORD *, _QWORD),
        __int64 (__fastcall *a2)(__int64, PCWSTR, unsigned int *),
        int a3,
        __int64 a4,
        int a5,
        int a6,
        HSTRING a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  PCWSTR StringRawBuffer; // rdi
  void *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // esi
  unsigned __int64 v21; // rax
  _WORD *v22; // rsi
  void *v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // ecx
  int v29; // r12d
  HSTRING v30; // r13
  int v31; // edx
  size_t v32; // rdi
  unsigned int v33; // r8d
  HRESULT v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  void *v38; // rcx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  int v43; // [rsp+20h] [rbp-A8h]
  unsigned int MaxCount; // [rsp+30h] [rbp-98h] BYREF
  int MaxCount_4; // [rsp+34h] [rbp-94h]
  int v46; // [rsp+38h] [rbp-90h]
  HSTRING v47; // [rsp+40h] [rbp-88h]
  _WORD *v48; // [rsp+48h] [rbp-80h]
  _WORD *v49; // [rsp+50h] [rbp-78h]
  void (__fastcall *v50)(int, HSTRING, HSTRING); // [rsp+58h] [rbp-70h]
  HSTRING v51; // [rsp+60h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-60h] BYREF
  HSTRING string; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  MaxCount_4 = a3;
  v46 = a3;
  v47 = a7;
  v51 = a7;
  v50 = PnpDeviceWatcher::OnPnpNotification;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  if ( !*StringRawBuffer )
    StringRawBuffer = 0LL;
  v16 = 0LL;
  v48 = 0LL;
  do
  {
    v17 = a2(a4, StringRawBuffer, &MaxCount);
    v19 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v17, v18);
    v20 = v19;
    if ( v19 == -2147023728 )
    {
      if ( !v16 )
        return 2147943568LL;
      v38 = v16;
LABEL_38:
      operator delete(v38, 2uLL);
      return 2147943568LL;
    }
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v19,
        v43);
      if ( v16 )
        operator delete(v16, 2uLL);
      return v20;
    }
    v21 = 2LL * MaxCount;
    if ( !is_mul_ok(MaxCount, 2uLL) )
      v21 = -1LL;
    v22 = operator new[](v21, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v16;
    v16 = v22;
    v48 = v22;
    if ( v23 )
      operator delete(v23, 2uLL);
    if ( !v22 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x8007000ELL,
        v43);
      return 2147942414LL;
    }
    v24 = a1(a4, StringRawBuffer, v22, MaxCount);
  }
  while ( v24 == 26 );
  v26 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v24, v25);
  v27 = v26;
  if ( v26 == -2147023728 )
  {
    v38 = v22;
    goto LABEL_38;
  }
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v26,
      v43);
    operator delete(v22, 2uLL);
    return v27;
  }
  else
  {
    v49 = v22;
    v28 = MaxCount;
    v29 = MaxCount_4;
    v30 = v47;
    while ( v28 && *v22 )
    {
      v32 = wcsnlen(v22, v28);
      if ( v32 >= MaxCount )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x142,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)0x8000FFFFLL,
          v43);
        if ( v16 )
          operator delete(v16, 2uLL);
        return 2147549183LL;
      }
      string = 0LL;
      LODWORD(v47) = v32;
      MaxCount_4 = v32 + 1;
      if ( (int)v32 + 1 < (unsigned int)v32 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v31, v33);
        JUMPOUT(0x18006B8E8LL);
      }
      v34 = WindowsCreateStringReference(v22, v32, &hstringHeader, &string);
      if ( v34 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34, v35, v36);
        return sub_18006B8B9(v40, v39, v41, v42, a5, a6, (_DWORD)a7, a8, a9, a10, a11, a12);
      }
      v50(v29, string, v30);
      v22 += (unsigned int)(v32 + 1);
      v49 = v22;
      v28 = -1 - v32 + MaxCount;
      MaxCount = v28;
    }
    if ( v16 )
      operator delete(v16, 2uLL);
    return 0LL;
  }
}
