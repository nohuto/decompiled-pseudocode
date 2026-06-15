/*
 * XREFs of ??1?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAA@XZ @ 0x180125AE4
 * Callers:
 *     ??1CWorkFifo@@QEAA@XZ @ 0x180125C94 (--1CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXXZ @ 0x1801298B0 (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 */

void __fastcall std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::~deque<std::shared_ptr<CWorkFifo::WorkItem>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
