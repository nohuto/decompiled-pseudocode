/*
 * XREFs of ??0UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@_N@Z @ 0x1800FF584
 * Callers:
 *     ??$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@winrt@@YA?AUUserResizeVisual@Transitions@Udwm@0@AEAPEAVCTopLevelWindow3D@@$$QEA_N@Z @ 0x1800FC934 (--$make@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAPEAVCTopLevelWindow3D@@_N@wi.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18009A014 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800FF81C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Udwm::Transitions::implementation::UserResizeVisual *__fastcall winrt::Udwm::Transitions::implementation::UserResizeVisual::UserResizeVisual(
        winrt::Udwm::Transitions::implementation::UserResizeVisual *this,
        struct CTopLevelWindow3D *a2,
        char a3)
{
  struct CAcrylicSheet **v5; // rsi
  int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  float v13[4]; // [rsp+30h] [rbp-48h] BYREF
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v14; // [rsp+40h] [rbp-38h]
  struct tagRECT v15; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14 = this;
  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,std::tuple<winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::implementation::UserResizeVisual::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,Udwm::Transitions::IUserResizeVisualNative>'};
  v5 = (struct CAcrylicSheet **)((char *)this + 32);
  v6 = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_QWORD *)this + 16) = 0LL;
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset((CBaseObject **)this + 4);
  LOBYTE(v7) = a3;
  v8 = CAcrylicSheet::Create(*(struct CWindowData **)(*((_QWORD *)this + 5) + 336LL), v7, v5);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      20LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.userresizevisual.cpp",
      (const char *)(unsigned int)v8,
      v12);
  v9 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 12) = *(_DWORD *)(*(_QWORD *)(v9 + 336) + 672LL) & 0xFFF;
  CTopLevelWindow::GetActualWindowRect(*(CTopLevelWindow **)(*(_QWORD *)(v9 + 336) + 440LL), &v15, 0, 1, 1);
  v10 = 0;
  if ( v15.right - v15.left >= 0 )
    v10 = v15.right - v15.left;
  if ( v15.bottom - v15.top >= 0 )
    v6 = v15.bottom - v15.top;
  v13[0] = (float)v15.left;
  v13[1] = (float)v15.top;
  v13[2] = (float)v10;
  v13[3] = (float)v6;
  winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(
    this,
    (const struct winrt::Windows::Foundation::Rect *)v13);
  CVisual::SetInterpolationMode((unsigned int *)*v5, 1u);
  return this;
}
