/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800BFEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x180017C98 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::`scalar deleting destructor'(CSpriteVisual *this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CSpriteVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
