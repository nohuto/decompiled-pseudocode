/*
 * XREFs of ?reset@?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x18051D58C
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1801B32E0 (--1InputAppPreloader@KeyboardHosting@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<KeyboardHosting::InputAppPreloader>::reset(
        KeyboardHosting::InputAppPreloader **a1,
        KeyboardHosting::InputAppPreloader *a2)
{
  KeyboardHosting::InputAppPreloader *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    KeyboardHosting::InputAppPreloader::~InputAppPreloader(v2);
    operator delete(v2);
  }
}
