/*
 * XREFs of ??_GCImage@@EEAAPEAXI@Z @ 0x18003A930
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImage@@EEAA@XZ @ 0x18003A8E0 (--1CImage@@EEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CImage *__fastcall CImage::`scalar deleting destructor'(CImage *this, char a2)
{
  CImage::~CImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x130uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CImage *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
