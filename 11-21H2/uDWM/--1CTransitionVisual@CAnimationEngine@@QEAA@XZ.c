/*
 * XREFs of ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x18004801C
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180047FDC (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x180048088 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisual::~CTransitionVisual(
        CAnimationEngine::CTransitionVisual *this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVariable **v3; // rbx
  __int64 v4; // rdi

  v3 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v4 = 7LL;
  do
  {
    if ( *v3 )
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 272LL))(*(_QWORD *)this);
}
