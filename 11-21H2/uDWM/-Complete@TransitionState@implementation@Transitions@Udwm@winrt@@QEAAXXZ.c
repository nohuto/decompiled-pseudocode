/*
 * XREFs of ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800125AC
 * Callers:
 *     ?Complete@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHXZ @ 0x180012580 (-Complete@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@34.c)
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180044E00 (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     wil::details::lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___::_lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___ @ 0x1800FCADC (wil--details--lambda_call__lambda_881286cebb4b836f1a7019bafcd2a93d___--_lambda_call__lambda_8812.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800FE5B0 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 *     ?TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@AEAV?$vector@PEAVCAnimatedTransitionVisual@@V?$allocator@PEAVCAnimatedTransitionVisual@@@std@@@std@@@Z @ 0x1800FE910 (-TransferWindowVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGloba.c)
 * Callees:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x180012668 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001268C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::TransitionState::Complete(
        winrt::Udwm::Transitions::implementation::TransitionState *this)
{
  CRenderDataVisual **v2; // rsi
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  int v6; // eax
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CRenderDataVisual **)((char *)this + 48);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    v6 = VisualCollection::RemoveAll((VisualCollection *)(v3 + 32));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = CRenderDataVisual::ClearInstructions(*v2);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x48,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
        (const char *)(unsigned int)v7,
        v10);
    v8 = (volatile signed __int32 *)*((_QWORD *)*v2 + 3);
    v12 = v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = v12;
    }
    if ( v8 )
    {
      v9 = VisualCollection::Remove((VisualCollection *)(v8 + 8), *v2);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionstate.cpp",
          (const char *)(unsigned int)v9,
          v10);
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset(v2);
    if ( v8 )
      CBaseObject::Release((CBaseObject *)v8);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8));
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(*((winrt::Windows::Foundation::IUnknown **)this
                                                                                + 10));
  *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  v4 = (_QWORD *)((char *)this + 104);
  if ( (volatile signed __int32 **)((char *)this + 104) != &v12 )
  {
    if ( *v4 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 104));
    *v4 = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 112);
  if ( (volatile signed __int32 **)((char *)this + 112) != &v12 )
  {
    if ( *v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::implementation::TransitionState *)((char *)this + 112));
    *v5 = 0LL;
  }
  *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 696LL) = 0;
  *((_BYTE *)this + 120) = 1;
}
