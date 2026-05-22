/*
 * XREFs of ??_G?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAXI@Z @ 0x1801C9558
 * Callers:
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801CCA54 (-Reset@EdgyImpl@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801C897C (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 */

CandidateIdentity **__fastcall std::vector<CandidateIdentity>::`scalar deleting destructor'(CandidateIdentity **a1)
{
  CandidateIdentity *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(v2, a1[1]);
    std::_Deallocate<16,0>(*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  operator delete(a1);
  return a1;
}
