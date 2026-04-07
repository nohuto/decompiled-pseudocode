/*
 * XREFs of ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x180099054
 * Callers:
 *     ??_ECAccentTransition@@W7EAAPEAXI@Z @ 0x180063760 (--_ECAccentTransition@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAccentTransition@@UEAA@XZ @ 0x180099008 (--1CAccentTransition@@UEAA@XZ.c)
 */

CAccentTransition *__fastcall CAccentTransition::`vector deleting destructor'(CAccentTransition *this, char a2)
{
  CAccentTransition::~CAccentTransition(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAccentTransition *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
