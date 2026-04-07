/*
 * XREFs of ?RegisterTransitionBitmap@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAX_K@Z @ 0x1800FEA50
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x1800406CC (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x1800AC9B8 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UIUserResizeVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUserResizeVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F8C20 (--$as@UIUserResizeVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FFA50 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::RegisterTransitionBitmap(
        winrt::Udwm::Transitions::implementation::TransitionManager *this,
        HWND a2,
        const struct tagRECT *a3,
        void *a4,
        unsigned __int64 a5)
{
  signed int v7; // ecx
  signed int v8; // edx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 result; // rax
  __int64 (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // rdx
  const char *v15; // r9
  CBaseObject *v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v20; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3->right - a3->left;
  if ( v7 < 0 )
    v7 = 0;
  v8 = a3->bottom - a3->top;
  if ( v8 < 0 )
    v8 = 0;
  try
  {
    v9 = (unsigned int)v7 * (unsigned __int64)(unsigned int)v8;
    if ( v9 > 0xFFFFFFFF )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
        (const char *)0x80070216LL);
      return 2147942934LL;
    }
    v10 = 4LL * (unsigned int)v9;
    if ( v10 > 0xFFFFFFFF )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
        (const char *)0x80070216LL);
      return 2147942934LL;
    }
    if ( a5 >= (unsigned int)v10 )
    {
      v20 = 0LL;
      v11 = CBitmapSource::Create(v7, v8, v7, v8, a4, &v20);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9A,
          (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
          (const char *)(unsigned int)v11);
        if ( v20 )
          CBaseObject::Release(v20);
        return v12;
      }
      v14 = *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(
                                                                        (unsigned __int64)this,
                                                                        (winrt::Windows::Foundation::IUnknown *)&v17,
                                                                        6);
      winrt::impl::as<Udwm::Transitions::IUserResizeVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        v18,
        v14);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
      if ( !v18[0] )
        wil::details::in1diag3::_Throw_NullAlloc(
          retaddr,
          (void *)0x9F,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
          v15);
      v16 = v20;
      (*(void (__fastcall **)(__int64, HWND, CBaseObject *))(*(_QWORD *)v18[0] + 48LL))(v18[0], a2, v20);
      winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(v18);
      if ( v16 )
        CBaseObject::Release(v16);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA4,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
                           (const char *)a4);
  }
  return result;
}
