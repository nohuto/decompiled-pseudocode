/*
 * XREFs of ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x18000DDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18000DE3C (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CImageLegacyMilBrushProxy *__fastcall CImageLegacyMilBrushProxy::`vector deleting destructor'(
        CImageLegacyMilBrushProxy *this,
        char a2)
{
  CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x18uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CImageLegacyMilBrushProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
