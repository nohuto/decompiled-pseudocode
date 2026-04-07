/*
 * XREFs of ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180048464
 * Callers:
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180007E0C (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180045A10 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180099170 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z @ 0x18009AC60 (-StartAnimationShowOrHide@CAcrylicSheet@@QEAAJW4AcrylicSheetAnimationType@@@Z.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800A7848 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B4EC4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B50A0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D295C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E3194 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8 (-StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::RegisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  struct IAnimationListener **v6; // rdx
  _QWORD *v7; // r10
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+8h] BYREF
  struct IAnimationListener *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !*((_BYTE *)this + 120) )
  {
    v3 = -2147221008;
    v12 = 550;
    goto LABEL_19;
  }
  v3 = 0;
  v4 = -1;
  v5 = 0;
  if ( !*((_DWORD *)this + 24) )
  {
LABEL_9:
    v7 = (_QWORD *)((char *)this + 72);
    if ( v4 >= 0 )
    {
      *(_QWORD *)(*v7 + 8LL * (unsigned int)v4) = v14;
      goto LABEL_11;
    }
    v9 = *((_DWORD *)this + 24);
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 )
    {
      if ( v10 <= *((_DWORD *)this + 23) )
      {
        *(_QWORD *)(*v7 + 8LL * *((unsigned int *)this + 24)) = v14;
        *((_DWORD *)this + 24) = v10;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8u, 1, &v14);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC0u);
      }
      goto LABEL_11;
    }
    v3 = -2147024362;
    v12 = 181;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v12);
    goto LABEL_11;
  }
  v6 = (struct IAnimationListener **)*((_QWORD *)this + 9);
  while ( *v6 != v14 )
  {
    if ( v4 < 0 && !*v6 )
      v4 = v5;
    ++v5;
    ++v6;
    if ( v5 >= *((_DWORD *)this + 24) )
      goto LABEL_9;
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v3;
}
