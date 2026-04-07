/*
 * XREFs of ?RemoveFromTree@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180045520
 * Callers:
 *     ?OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x180008AC0 (-OnAnimationComplete@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA.c)
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800454F8 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180047690 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::RemoveFromTree(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 60) )
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(this);
    v2 = VisualCollection::Remove(
           (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
           (struct CVisual *)((*((_QWORD *)this + 5) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                             + 5) >> 64)));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCC,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
        (const char *)(unsigned int)v2,
        v3);
    *((_BYTE *)this + 60) = 0;
  }
}
