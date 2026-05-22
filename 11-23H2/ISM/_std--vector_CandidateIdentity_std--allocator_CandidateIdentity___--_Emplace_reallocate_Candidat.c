/*
 * XREFs of _std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity_&__::_1_::catch$1 @ 0x1801C8C76
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801C897C (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 */

void __fastcall __noreturn std::vector_CandidateIdentity_std::allocator_CandidateIdentity___::_Emplace_reallocate_CandidateIdentity____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CandidateIdentity>>(
    *(CandidateIdentity **)(a2 + 112),
    *(CandidateIdentity **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 40LL * *(_QWORD *)(a2 + 120));
  throw;
}
