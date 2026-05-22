/*
 * XREFs of ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x1801CC8FC
 * Callers:
 *     ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801C8560 (-OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorI.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801C9CDC (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801CCA54 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

char __fastcall EdgyImpl::OnHitTest(EdgyImpl *this, const struct EdgyPointerInfo *a2, const struct D2D_VECTOR_2F *a3)
{
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  EdgyImpl::Reset(this);
  if ( !Edges::HitTest(
          (Edges *)(*((_QWORD *)this + 3) + 72LL),
          *((_DWORD *)a2 + 3),
          *((_DWORD *)a2 + 4),
          a3,
          (__int64 **)this) )
    return 0;
  if ( !*(_QWORD *)this )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyimpl.cpp",
      v6);
  return 1;
}
