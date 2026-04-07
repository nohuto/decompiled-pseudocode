/*
 * XREFs of ??_GCFlickVisual@@MEAAPEAXI@Z @ 0x1800C0030
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CFlickVisual@@MEAA@XZ @ 0x1800BFF9C (--1CFlickVisual@@MEAA@XZ.c)
 */

CFlickVisual *__fastcall CFlickVisual::`scalar deleting destructor'(CFlickVisual *this, char a2)
{
  CFlickVisual::~CFlickVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CFlickVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
