/*
 * XREFs of ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x18022F1C6
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18022EBB4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x180462A30 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ??$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z @ 0x180458234 (--$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::SetPrimaryViewId(TouchKeyboardExperienceManager *this, unsigned int a2)
{
  KeyboardHosting::TabTipAdapter *v4; // rcx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  TouchKeyboardExperienceTelemetryLogger::SetPrimaryViewId<unsigned int &>(&v5);
  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 92);
  *((_DWORD *)this + 191) = a2;
  KeyboardHosting::TabTipAdapter::SetPrimaryViewId(v4, a2);
}
