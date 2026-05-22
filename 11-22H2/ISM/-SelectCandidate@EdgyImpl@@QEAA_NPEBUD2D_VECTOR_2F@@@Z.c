/*
 * XREFs of ?SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z @ 0x1801DA310
 * Callers:
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1801D9470 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 * Callees:
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1801D71EC (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 */

char __fastcall EdgyImpl::SelectCandidate(EdgyImpl *this, struct D2D_VECTOR_2F *a2)
{
  char v4; // bl
  Edges *v5; // rcx
  const struct CandidateIdentity **v6; // rdx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (Edges *)(*((_QWORD *)this + 3) + 72LL);
  v6 = *(const struct CandidateIdentity ***)this;
  v9 = 0LL;
  if ( Edges::GetCandidate(v5, v6, (float *)a2, &v8, &v9) )
  {
    v4 = 1;
    *((_QWORD *)this + 1) = v9;
  }
  return v4;
}
