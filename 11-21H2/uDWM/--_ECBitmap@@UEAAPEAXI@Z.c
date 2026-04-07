/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x180108BB0
 * Callers:
 *     ??_ECBitmap@@WHA@EAAPEAXI@Z @ 0x180063E20 (--_ECBitmap@@WHA@EAAPEAXI@Z.c)
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x180059D00 (--1CBitmap@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
