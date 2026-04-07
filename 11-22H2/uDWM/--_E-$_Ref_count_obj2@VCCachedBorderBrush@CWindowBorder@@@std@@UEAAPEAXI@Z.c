/*
 * XREFs of ??_E?$_Ref_count_obj2@VCCachedBorderBrush@CWindowBorder@@@std@@UEAAPEAXI@Z @ 0x1800521B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
