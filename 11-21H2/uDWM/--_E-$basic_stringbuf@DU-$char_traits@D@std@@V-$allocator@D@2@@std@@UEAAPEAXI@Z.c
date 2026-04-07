/*
 * XREFs of ??_E?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1800F37C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180042CA8 (--1-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::stringbuf::`vector deleting destructor'(_QWORD *a1, char a2)
{
  std::stringbuf::~stringbuf(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
