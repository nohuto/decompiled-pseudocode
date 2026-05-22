/*
 * XREFs of ?EnumerateDevices@Details@PnpApiWrapper@@YAJP6AKAEBU_GUID@@PEBGPEAGI@ZP6AK01AEAI@ZW4DeviceEventId@2@0PEAUHSTRING__@@P6AX67PEAX@Z8@Z @ 0x18003F740
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x180037F50 (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18003F9A0 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C09F0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PnpApiWrapper::Details::EnumerateDevices(
        __int64 (__fastcall *a1)(__int64, PCWSTR, void *, _QWORD),
        const wchar_t *a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  PCWSTR StringRawBuffer; // rdi
  void *v15; // rbx
  const wchar_t *v16; // rsi
  wchar_t *v17; // r12
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // esi
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  unsigned int v26; // edi
  unsigned int v27; // ecx
  int v28; // r12d
  HSTRING v29; // r13
  int v30; // edx
  size_t v31; // rdi
  unsigned int v32; // r8d
  HRESULT v33; // eax
  int v34; // edx
  unsigned int v35; // r8d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  unsigned int MaxCount; // [rsp+30h] [rbp-98h] BYREF
  int MaxCount_4; // [rsp+34h] [rbp-94h]
  const wchar_t *v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+48h] [rbp-80h]
  void *v46; // [rsp+50h] [rbp-78h]
  void (__fastcall *v47)(int, HSTRING, HSTRING); // [rsp+58h] [rbp-70h]
  __int64 v48; // [rsp+60h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-60h] BYREF
  HSTRING string; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  MaxCount_4 = a3;
  v43 = a2;
  v44 = a3;
  v45 = a7;
  v48 = a7;
  v47 = PnpDeviceWatcher::OnPnpNotification;
  StringRawBuffer = WindowsGetStringRawBuffer(0LL, 0LL);
  if ( !*StringRawBuffer )
    StringRawBuffer = 0LL;
  v15 = 0LL;
  v46 = 0LL;
  v16 = 0LL;
  do
  {
    v17 = (wchar_t *)v16;
    v18 = ((__int64 (__fastcall *)(__int64, PCWSTR, unsigned int *))v43)(a4, StringRawBuffer, &MaxCount);
    v20 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v18, v19);
    v21 = v20;
    if ( v20 == -2147023728 )
    {
      if ( !v15 )
        return 2147943568LL;
LABEL_33:
      operator delete(v15, 2uLL);
      return 2147943568LL;
    }
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v20);
      if ( v15 )
        operator delete(v15, 2uLL);
      return v21;
    }
    v22 = 2LL * MaxCount;
    if ( !is_mul_ok(MaxCount, 2uLL) )
      v22 = -1LL;
    v15 = operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
    v16 = (const wchar_t *)v15;
    v46 = v15;
    if ( v17 )
      operator delete(v17, 2uLL);
    if ( !v15 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v23 = a1(a4, StringRawBuffer, v15, MaxCount);
  }
  while ( v23 == 26 );
  v25 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v23, v24);
  v26 = v25;
  if ( v25 == -2147023728 )
    goto LABEL_33;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v25);
    operator delete(v15, 2uLL);
    return v26;
  }
  else
  {
    v43 = (const wchar_t *)v15;
    v27 = MaxCount;
    v28 = MaxCount_4;
    v29 = (HSTRING)v45;
    while ( 1 )
    {
      if ( !v27 || !*v16 )
      {
        operator delete(v15, 2uLL);
        return 0LL;
      }
      v31 = wcsnlen(v16, v27);
      if ( v31 >= MaxCount )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x142,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)0x8000FFFFLL);
        operator delete(v15, 2uLL);
        return 2147549183LL;
      }
      string = 0LL;
      LODWORD(v45) = v31;
      MaxCount_4 = v31 + 1;
      if ( (int)v31 + 1 < (unsigned int)v31 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v30, v32);
        JUMPOUT(0x180089421LL);
      }
      v33 = WindowsCreateStringReference(v16, v31, &hstringHeader, &string);
      if ( v33 < 0 )
        break;
      v47(v28, string, v29);
      v16 += (unsigned int)(v31 + 1);
      v43 = v16;
      v27 = -1 - v31 + MaxCount;
      MaxCount = v27;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33, v34, v35);
    return sub_1800893F2(v38, v37, v39, v40, a5, a6, a7, a8, a9, a10, a11, a12);
  }
}
