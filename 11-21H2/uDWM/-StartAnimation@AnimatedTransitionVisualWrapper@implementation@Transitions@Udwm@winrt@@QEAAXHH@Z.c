/*
 * XREFs of ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180007E0C
 * Callers:
 *     ?StartAnimation@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHHH@Z @ 0x180007DE0 (-StartAnimation@-$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180047690 (-EnsureSnapshotVisualIsAlive@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@win.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F13D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StartAnimation(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *this,
        int a2,
        int a3)
{
  __int64 v6; // rax
  int v7; // eax
  CAnimationEngine *v8; // rax
  int started; // eax
  CAnimationEngine *v10; // rax
  int inserted; // eax
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::EnsureSnapshotVisualIsAlive(this);
  v6 = *((_QWORD *)this + 5);
  *(_DWORD *)(v6 + 736) = a2;
  *(_DWORD *)(v6 + 740) = a3;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v18 = *((_QWORD *)this + 5);
  v7 = DynArrayImpl<0>::AddMultipleAndSet(&v14, 8LL, 1LL, &v18);
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
  v8 = CDesktopManager::AcquireAnimationEngine();
  started = CAnimationEngine::ScheduleStartAnimation(v8, 105);
  if ( started < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)started,
      v12);
  v10 = CDesktopManager::AcquireAnimationEngine();
  CAnimationEngine::RegisterForAnimationCompleteNotification(
    v10,
    (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((char *)this + 32));
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
               (struct CVisual *)((*((_QWORD *)this + 5) + 8LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL)),
               0LL,
               0,
               1);
  if ( inserted < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x90,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.animatedtransitionvisualwrapper.cpp",
      (const char *)(unsigned int)inserted,
      v13);
  *((_BYTE *)this + 60) = 1;
  DynArrayImpl<0>::~DynArrayImpl<0>(&v14);
}
