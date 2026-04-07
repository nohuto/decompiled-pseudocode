/*
 * XREFs of ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800060F8
 * Callers:
 *     ?put_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAX@Z @ 0x180006050 (-put_AnimationComplete@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ??$get_weak@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@?$root_implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@impl@winrt@@IEAA?AU?$weak_ref@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@@2@XZ @ 0x180006084 (--$get_weak@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180006224 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??4?$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180006348 (--4-$function@$$A6AJXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@J$$V@std@@IEAAXXZ @ 0x180010A40 (-_Tidy@-$_Func_class@J$$V@std@@IEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800126B0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this,
        const struct winrt::Udwm::Transitions::AnimationCompletedHandler *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD v5[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+70h] [rbp+10h] BYREF
  _QWORD *v7; // [rsp+80h] [rbp+20h]

  winrt::Windows::Foundation::IUnknown::operator=((winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((char *)this + 40));
  v6 = 0LL;
  if ( (unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 40, &v6) )
  {
    std::_Func_class<long,>::_Tidy(*((_QWORD *)this + 4) + 552LL);
  }
  else
  {
    v3 = *((_QWORD *)this + 4);
    winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::get_weak<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler>(
      (__int64)this + 16,
      &v6);
    v4 = v6;
    v6 = 0LL;
    v5[0] = off_18010C6A8;
    v5[1] = v4;
    v5[7] = v5;
    v7 = v5;
    std::function<long (void)>::operator=(v3 + 552, v5);
    std::_Func_class<long,>::_Tidy(v5);
    if ( v6 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v6);
  }
}
