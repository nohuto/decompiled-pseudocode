/*
 * XREFs of ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x180099AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x180099970 (--1CAcrylicSheet@@EEAA@XZ.c)
 */

CAcrylicSheet *__fastcall CAcrylicSheet::`scalar deleting destructor'(CAcrylicSheet *this, char a2)
{
  CAcrylicSheet::~CAcrylicSheet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAcrylicSheet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
