/*
 * XREFs of ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x1800BFBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CImmersiveState@@EEAA@XZ @ 0x1800BFB88 (--1CImmersiveState@@EEAA@XZ.c)
 */

CImmersiveState *__fastcall CImmersiveState::`scalar deleting destructor'(CImmersiveState *this, char a2)
{
  CImmersiveState::~CImmersiveState(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CImmersiveState *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
