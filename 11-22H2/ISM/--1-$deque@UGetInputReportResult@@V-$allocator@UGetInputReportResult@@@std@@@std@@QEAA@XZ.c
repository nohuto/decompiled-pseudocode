/*
 * XREFs of ??1?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@QEAA@XZ @ 0x1800F0C90
 * Callers:
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800F0D00 (--1DockDeviceCollection@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@UGetInputReportResult@@V?$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ @ 0x1800F1928 (-_Tidy@-$deque@UGetInputReportResult@@V-$allocator@UGetInputReportResult@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::deque<GetInputReportResult>::~deque<GetInputReportResult>(void **a1)
{
  void *v2; // rcx

  std::deque<GetInputReportResult>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
