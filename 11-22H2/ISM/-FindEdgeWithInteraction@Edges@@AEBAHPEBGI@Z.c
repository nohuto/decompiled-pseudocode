/*
 * XREFs of ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801D711C
 * Callers:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801D7064 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801D7760 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801D778C (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdgeWithInteraction(Edges *this, const unsigned __int16 *a2, int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r14
  bool IsEdge; // al
  __int64 v11; // rcx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)this;
  v7 = 0;
  if ( (int)((*((_QWORD *)this + 1) - v6) >> 7) <= 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v8 = (__int64)(int)v7 << 7;
    IsEdge = Edge::IsEdge((Edge *)(v8 + v6), a2);
    v6 = *(_QWORD *)this;
    if ( IsEdge )
      break;
    if ( (int)++v7 >= (int)((*((_QWORD *)this + 1) - v6) >> 7) )
      return 0xFFFFFFFFLL;
  }
  v11 = v8 + v6;
  if ( (!*(_DWORD *)(v11 + 64) || *(_DWORD *)(v11 + 64) != a3) && !(unsigned __int8)Edge::IsClientPresent(v11, 1LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x281,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
      v12);
  return v7;
}
