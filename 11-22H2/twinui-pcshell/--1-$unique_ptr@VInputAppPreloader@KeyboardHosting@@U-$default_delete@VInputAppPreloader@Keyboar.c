/*
 * XREFs of ??1?$unique_ptr@VInputAppPreloader@KeyboardHosting@@U?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18050C214
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$33 @ 0x1802B6E45 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$33.c)
 * Callees:
 *     ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1801B32E0 (--1InputAppPreloader@KeyboardHosting@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<KeyboardHosting::InputAppPreloader>::~unique_ptr<KeyboardHosting::InputAppPreloader>(
        KeyboardHosting::InputAppPreloader **a1)
{
  KeyboardHosting::InputAppPreloader *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    KeyboardHosting::InputAppPreloader::~InputAppPreloader(*a1);
    operator delete(v1);
  }
}
