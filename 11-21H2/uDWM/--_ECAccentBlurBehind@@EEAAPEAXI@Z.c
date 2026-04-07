/*
 * XREFs of ??_ECAccentBlurBehind@@EEAAPEAXI@Z @ 0x180097150
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x1800970F0 (--1CAccentBlurBehind@@EEAA@XZ.c)
 */

CAccentBlurBehind *__fastcall CAccentBlurBehind::`vector deleting destructor'(CAccentBlurBehind *this, char a2)
{
  CAccentBlurBehind::~CAccentBlurBehind(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAccentBlurBehind *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
