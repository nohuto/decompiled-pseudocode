/*
 * XREFs of ??_GCIconicAnimatedVisual@@MEAAPEAXI@Z @ 0x1800C23C0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x1800C22FC (--1CIconicAnimatedVisual@@MEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::`scalar deleting destructor'(
        CIconicAnimatedVisual *this,
        char a2)
{
  CIconicAnimatedVisual::~CIconicAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CIconicAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
