/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x180048088
 * Callers:
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x18004801C (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x1800483D4 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x1800480C8 (--1CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  CAnimationEngine::CTransitionVariable::~CTransitionVariable(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVariable *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
