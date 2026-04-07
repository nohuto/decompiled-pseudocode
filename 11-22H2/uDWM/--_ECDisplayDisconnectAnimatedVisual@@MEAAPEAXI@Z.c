/*
 * XREFs of ??_ECDisplayDisconnectAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B8FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B8F0C (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDisconnectAnimatedVisual *__fastcall CDisplayDisconnectAnimatedVisual::`vector deleting destructor'(
        CDisplayDisconnectAnimatedVisual *this,
        char a2)
{
  CDisplayDisconnectAnimatedVisual::~CDisplayDisconnectAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDisplayDisconnectAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
