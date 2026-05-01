/*
 * XREFs of ??1?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18059B670
 * Callers:
 *     ??1CSnapAssistControllerBase@@QEAA@XZ @ 0x18059B6A8 (--1CSnapAssistControllerBase@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x18059EFB8 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<tagRECT>::~deque<tagRECT>(void **a1)
{
  void *v2; // rcx

  std::deque<tagRECT>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
