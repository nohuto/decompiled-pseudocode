/*
 * XREFs of ??1?$unique_ptr@VInvocationMethodTracker@KeyboardHosting@@U?$default_delete@VInvocationMethodTracker@KeyboardHosting@@@std@@@std@@QEAA@XZ @ 0x18050C244
 * Callers:
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$41 @ 0x1802B6F0D (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$41.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<KeyboardHosting::InvocationMethodTracker>::~unique_ptr<KeyboardHosting::InvocationMethodTracker>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
