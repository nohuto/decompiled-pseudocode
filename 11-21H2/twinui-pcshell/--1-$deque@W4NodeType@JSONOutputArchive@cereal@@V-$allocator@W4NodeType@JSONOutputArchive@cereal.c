/*
 * XREFs of ??1?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@QEAA@XZ @ 0x18022C2EC
 * Callers:
 *     ??1?$stack@IV?$deque@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x18034CC58 (--1-$stack@IV-$deque@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x180089004 (-_Tidy@-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@ce.c)
 */

void __fastcall std::deque<enum cereal::JSONOutputArchive::NodeType>::~deque<enum cereal::JSONOutputArchive::NodeType>(
        void **a1)
{
  void *v2; // rcx

  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, 0x10uLL);
}
