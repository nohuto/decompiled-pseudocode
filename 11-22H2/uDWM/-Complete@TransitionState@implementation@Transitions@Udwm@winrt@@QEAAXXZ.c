/*
 * XREFs of ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180101408
 * Callers:
 *     wil::details::lambda_call__lambda_e5362848fe0381a2024b7815ced62145___::_lambda_call__lambda_e5362848fe0381a2024b7815ced62145___ @ 0x180100EBC (wil--details--lambda_call__lambda_e5362848fe0381a2024b7815ced62145___--_lambda_call__lambda_e536.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180100F44 (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Complete@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHXZ @ 0x1801013B0 (-Complete@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@34.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18004FC20 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800A42DC (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE48C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1801003E4 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010045C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::Complete(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  CRenderDataVisual **v2; // rsi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CRenderDataVisual **)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    v4 = VisualCollection::RemoveAll((VisualCollection *)(v3 + 32));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        71LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v4,
        v10);
    v5 = CRenderDataVisual::ClearInstructions(*v2);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        72LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v5,
        v10);
    v6 = (volatile signed __int32 *)*((_QWORD *)*v2 + 3);
    v12 = v6;
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = v12;
    }
    if ( v6 )
    {
      v7 = VisualCollection::Remove((VisualCollection *)(v6 + 8), *v2);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          76LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
          (const char *)(unsigned int)v7,
          v10);
    }
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(v2);
    if ( v6 )
      CBaseObject::Release((CBaseObject *)v6);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
    *((CBaseObject ***)this + 7),
    *((CBaseObject ***)this + 8));
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
    *((winrt::Windows::Foundation::IUnknown **)this + 10),
    *((winrt::Windows::Foundation::IUnknown **)this + 11));
  *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  v8 = (_QWORD *)((char *)this + 104);
  if ( (volatile signed __int32 **)((char *)this + 104) != &v12 )
  {
    if ( *v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
    *v8 = 0LL;
  }
  v9 = (_QWORD *)((char *)this + 112);
  if ( (volatile signed __int32 **)((char *)this + 112) != &v12 )
  {
    if ( *v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
    *v9 = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 680LL) = 0;
  *((_BYTE *)this + 120) = 1;
}
