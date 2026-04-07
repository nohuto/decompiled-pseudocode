/*
 * XREFs of ??_ECAccentTransition@@UEAAPEAXI@Z @ 0x1800A2190
 * Callers:
 *     ??_ECAccentTransition@@W7EAAPEAXI@Z @ 0x1800663C0 (--_ECAccentTransition@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAccentTransition@@UEAA@XZ @ 0x1800A2144 (--1CAccentTransition@@UEAA@XZ.c)
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
