/*
 * XREFs of ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x180059BA0
 * Callers:
 *     ??_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z @ 0x180063D00 (--_ECCompressedSourceBitmap@@OHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x180059BFC (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::`vector deleting destructor'(
        CCompressedSourceBitmap *this,
        char a2)
{
  CCompressedSourceBitmap::~CCompressedSourceBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CCompressedSourceBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
