/*
 * XREFs of ?InitializeInteropCompositor@CCompositor@@AEAAJXZ @ 0x180052B14
 * Callers:
 *     ?Initialize@CCompositor@@IEAAJXZ @ 0x180052A5C (-Initialize@CCompositor@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCompositor::InitializeInteropCompositor(CCompositor *this)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int ActivationFactory; // eax
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, GUID *, char *); // r14
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, char *); // r14
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = CoInitializeEx(0LL, 4u);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v16 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.Composition.Compositor",
    0x22u,
    0x21u);
  ActivationFactory = RoGetActivationFactory(v18, &GUID_00000035_0000_0000_c000_000000000046, &v16);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_12;
  }
  v15 = 0LL;
  v5 = *v16;
  v15 = 0LL;
  v6 = (*v5)(v16, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v15);
  v3 = v6;
  if ( v6 < 0 )
  {
    v14 = 458LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\windows\\dwm\\udwm\\compositor.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_11;
  }
  v7 = v15;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v15 + 48LL);
  v9 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v6 = v8(v7, 0LL, 0LL, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, (char *)this + 40);
  v3 = v6;
  if ( v6 < 0 )
  {
    v14 = 461LL;
    goto LABEL_19;
  }
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 5);
  v11 = **v10;
  v12 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v6 = v11(v10, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, (char *)this + 32);
  v3 = v6;
  if ( v6 < 0 )
  {
    v14 = 464LL;
    goto LABEL_19;
  }
  v3 = 0;
LABEL_11:
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>(&v15);
LABEL_12:
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)&v16);
  return v3;
}
