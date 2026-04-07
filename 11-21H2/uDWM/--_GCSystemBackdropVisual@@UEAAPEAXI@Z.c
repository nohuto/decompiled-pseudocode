/*
 * XREFs of ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800E0ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CSystemBackdropVisual@@UEAA@XZ @ 0x1800E0E50 (--1CSystemBackdropVisual@@UEAA@XZ.c)
 */

CSystemBackdropVisual *__fastcall CSystemBackdropVisual::`scalar deleting destructor'(
        CSystemBackdropVisual *this,
        char a2)
{
  CSystemBackdropVisual::~CSystemBackdropVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CSystemBackdropVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
