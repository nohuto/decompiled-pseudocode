/*
 * XREFs of ??0SnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@QEAA@_KAEBURect@Foundation@56@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180688684
 * Callers:
 *     ??$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAURect@Foundation@67@PEAUIPrivilegedPresentationOperations@@@winrt@@YA?A_PAEA_KAEAURect@Foundation@Windows@0@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x180669A60 (--$make@USnapAnimationTag@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@AEA_KAEAUR.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1804BBB90 (--0-$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPr.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *__fastcall winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::SnapAnimationTag(
        winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag *this,
        __int64 a2,
        const struct winrt::Windows::Foundation::Rect *a3,
        struct IPrivilegedPresentationOperations *a4)
{
  float v7; // xmm0_4
  float v8; // xmm1_4
  int v9; // edx
  _DWORD v11[4]; // [rsp+38h] [rbp-30h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::KeyboardHosting::implementation::InputViewOptions,winrt::Windows::Internal::Shell::KeyboardHosting::IInputViewOptions>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::WindowSnapping::implementation::SnapAnimationTag::`vftable';
  *((_QWORD *)this + 3) = a2;
  wil::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>(
    (_QWORD *)this + 4,
    (__int64)a4);
  v7 = *((float *)a3 + 1) + *((float *)a3 + 3);
  v8 = *(float *)a3 + *((float *)a3 + 2);
  v9 = (int)*((float *)a3 + 1);
  v11[0] = (int)*(float *)a3;
  v11[1] = v9;
  v11[2] = (int)v8;
  v11[3] = (int)v7;
  (*(void (__fastcall **)(struct IPrivilegedPresentationOperations *, _QWORD, __int64, _DWORD *, int))(*(_QWORD *)a4 + 40LL))(
    a4,
    *((_QWORD *)this + 3),
    31LL,
    v11,
    16);
  return this;
}
