/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801AA590
 * Callers:
 *     _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&__::_1_::catch$1 @ 0x1801AA88A (_std--vector_CandidateIdentity_std--allocator_CandidateIdentity___--_Emplace_reallocate_Candidat.c)
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801AAA8C (--$_Uninitialized_move@PEAUCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@YAPEA.c)
 *     ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x1801AB180 (--_G-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x1801AC1E0 (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 * Callees:
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801AB1F0 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<CandidateIdentity>>(CandidateIdentity *this, CandidateIdentity *a2)
{
  CandidateIdentity *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CandidateIdentity::`scalar deleting destructor'(v3, 0);
      v3 = (CandidateIdentity *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
  return result;
}
