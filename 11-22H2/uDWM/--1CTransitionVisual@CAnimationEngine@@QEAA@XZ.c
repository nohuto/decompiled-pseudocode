/*
 * XREFs of ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180043CE4
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180043CA4 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CTransitionVariable@CAnimationEngine@@QEAA@XZ @ 0x180043D80 (--1CTransitionVariable@CAnimationEngine@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisual::~CTransitionVisual(CAnimationEngine::CTransitionVisual *this)
{
  CAnimationEngine::CTransitionVariable **v2; // rbx
  __int64 v3; // rdi
  CAnimationEngine::CTransitionVariable *v4; // rbp

  v2 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v3 = 7LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      CAnimationEngine::CTransitionVariable::~CTransitionVariable(*v2);
      (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVariable *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 272LL))(*(_QWORD *)this);
}
