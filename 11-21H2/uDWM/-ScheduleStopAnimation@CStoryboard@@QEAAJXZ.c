/*
 * XREFs of ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800D8A4C
 * Callers:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800D4D50 (-Abandon@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x1800D93F8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStoryboard::ScheduleStopAnimation(CStoryboard *this)
{
  unsigned int v2; // edi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  unsigned int v5; // edx
  int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 7);
    if ( v5 != -1 )
    {
      v6 = CAnimationEngine::ScheduleStopAnimation(v3, v5);
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x16F7u);
    }
  }
  CStoryboard::_Cleanup(this);
  if ( v4 )
    CAnimationEngine::Release(v4);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v2;
}
