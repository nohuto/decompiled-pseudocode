/*
 * XREFs of ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x180044A20
 * Callers:
 *     ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?AUAnimatedTransitionVisualWrapper@Transitions@Udwm@0@$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x18004497C (--$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWin.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x1800455BC (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180045FEC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        struct CTopLevelWindow3D *a2)
{
  struct CAnimatedTransitionVisual **v3; // rsi
  int v4; // edi
  struct CAnimatedTransitionVisual *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-40h]
  int v15; // [rsp+20h] [rbp-40h]
  _DWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v18; // [rsp+40h] [rbp-20h]
  struct tagRECT v19; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v18 = this;
  *((_QWORD *)this + 1) = &winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::`vftable';
  *(_QWORD *)this = &winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,std::tuple<winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
  *((_QWORD *)this + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  v3 = (struct CAnimatedTransitionVisual **)((char *)this + 40);
  v4 = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_DWORD *)this + 14) = -1;
  *((_BYTE *)this + 60) = 0;
  v5 = *v3;
  *v3 = 0LL;
  if ( v5 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v5 + 8));
  v6 = CAnimatedTransitionVisual::Create(v3);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v6,
      v14);
  CTopLevelWindow::GetActualWindowRect(
    *(CTopLevelWindow **)(*(_QWORD *)(*((_QWORD *)this + 6) + 336LL) + 440LL),
    &v19,
    1,
    1,
    1);
  v7 = CAnimatedTransitionVisual::SetVisual(
         *v3,
         *(struct CVisual **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 336LL) + 440LL) + 264LL),
         1,
         &v19);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v7,
      v15);
  v8 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
         *v3,
         *(struct CVisual **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 336LL) + 440LL) + 264LL),
         &v19);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)v8,
      v15);
  v9 = v19.right - v19.left;
  if ( v19.right - v19.left < 0 )
    v9 = 0;
  LODWORD(v17) = v9;
  v10 = 0;
  if ( v19.right - v19.left >= 0 )
    v10 = v19.right - v19.left;
  v11 = v19.bottom - v19.top;
  if ( v19.bottom - v19.top < 0 )
    v11 = 0;
  HIDWORD(v17) = v11;
  v12 = (__int64)*v3 + 8;
  v16[0] = v10;
  if ( v19.bottom - v19.top >= 0 )
    v4 = v19.bottom - v19.top;
  v16[1] = v4;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 96LL))(v12, v16);
  *((_QWORD *)*v3 + 119) = v17;
  CVisual::SetInterpolationMode((char *)*v3 + 8, 1LL);
  return this;
}
