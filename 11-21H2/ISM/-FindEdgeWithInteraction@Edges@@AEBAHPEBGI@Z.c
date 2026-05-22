/*
 * XREFs of ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801AB4D4
 * Callers:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801AB41C (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801ABAF8 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801ABB24 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdgeWithInteraction(Edges *this, const unsigned __int16 *a2, int a3)
{
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v9; // rcx
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)this;
  v7 = 0;
  if ( (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7) <= 0 )
    return 0xFFFFFFFFLL;
  while ( !Edge::IsEdge((Edge *)(v6 + ((__int64)(int)v7 << 7)), a2) )
  {
    v6 = *(_QWORD *)this;
    if ( (int)++v7 >= (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7) )
      return 0xFFFFFFFFLL;
  }
  v9 = ((__int64)(int)v7 << 7) + *(_QWORD *)this;
  if ( (!*(_DWORD *)(v9 + 64) || *(_DWORD *)(v9 + 64) != a3) && !(unsigned __int8)Edge::IsClientPresent(v9, 1LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      641LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
      v10);
  return v7;
}
