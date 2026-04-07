/*
 * XREFs of ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x180043D80
 * Callers:
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180043CE4 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800AAD50 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVariable::~CTransitionVariable(
        CAnimationEngine::CTransitionVariable *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
