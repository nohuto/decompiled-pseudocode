/*
 * XREFs of ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x180043C08
 * Callers:
 *     ??_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z @ 0x180043920 (--_GCTransitionVisualSet@CAnimationEngine@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180043CA4 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(
        CAnimationEngine::CTransitionVisualSet *this,
        unsigned int a2)
{
  __int64 v3; // rcx
  __int64 i; // rdi
  CAnimationEngine::CTransitionVisual *v5; // rcx

  *(_QWORD *)this = &CAnimationEngine::CTransitionVisualSet::`vftable';
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
  {
    v5 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v5 )
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v5, a2);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 5));
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
