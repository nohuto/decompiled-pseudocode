/*
 * XREFs of ?OnStoryboardStatusChanged@CAnimationEngine@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z @ 0x180014680
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180014844 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180014DD0 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::OnStoryboardStatusChanged(
        CAnimationEngine *this,
        struct IUIAnimationStoryboard2 *a2,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a3,
        enum __MIDL___MIDL_itf_UIAnimation_0000_0002_0001 a4)
{
  int v5; // ebx
  int v7; // eax
  unsigned int v8; // ebx
  int TransitionVisualSetIndex; // eax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  if ( a3 == UI_ANIMATION_STORYBOARD_FINISHED && ((a4 - 1) & 0xFFFFFFFD) == 0 )
  {
    v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, unsigned int *))a2->lpVtbl->GetTag)(
           a2,
           0LL,
           &v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5D7u);
    }
    else
    {
      v8 = v12;
      v11 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex(this, v8);
      if ( TransitionVisualSetIndex < 0 )
      {
        v5 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x575u);
      }
      else
      {
        v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, TransitionVisualSetIndex);
        v5 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x571u);
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5DBu);
    }
  }
  return (unsigned int)v5;
}
