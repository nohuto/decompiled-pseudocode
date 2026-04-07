/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180047C44
 * Callers:
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180007E0C (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180045A10 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x180099170 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D295C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D2E34 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800D87EC (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8 (-StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180047D5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  struct IAnimatedVisual **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  int started; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+18h] BYREF

  v8 = -2147024809;
  v9 = 0LL;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v15 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 8LL * *(unsigned int *)(a3 + 24);
    if ( !is_mul_ok(*(unsigned int *)(a3 + 24), 8uLL) )
      v10 = -1LL;
    v9 = (struct IAnimatedVisual **)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v10);
    v11 = 0LL;
    if ( v9 )
    {
      v12 = *(_DWORD *)(a3 + 24);
      if ( v12 )
      {
        do
        {
          v9[v11] = *(struct IAnimatedVisual **)(*(_QWORD *)a3 + 8 * v11);
          v11 = (unsigned int)(v11 + 1);
          v12 = *(_DWORD *)(a3 + 24);
        }
        while ( (unsigned int)v11 < v12 );
      }
      started = CAnimationEngine::ScheduleStartAnimation(this, a2, v9, v12, a4);
      v8 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xA3u);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x9Du);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct IAnimatedVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v9);
  return v8;
}
