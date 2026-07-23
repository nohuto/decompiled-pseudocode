/*
 * XREFs of RtlDelete @ 0x18006A780
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006A220 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1D36 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800F10A0 (PfxRemovePrefix.c)
 * Callees:
 *     SwapSplayLinks @ 0x18006A8D0 (SwapSplayLinks.c)
 *     RtlSubtreePredecessor @ 0x18006A9E0 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  PRTL_SPLAY_LINKS v3; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v5; // rdx
  _RTL_SPLAY_LINKS *v6; // rcx
  __int64 v7; // rdx

  result = Links->LeftChild;
  if ( result
    && (!Links->RightChild
     || (v3 = RtlSubtreePredecessor(Links), SwapSplayLinks(v3, Links), (result = Links->LeftChild) != 0LL))
    || (result = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent != Links )
    {
      v5 = 8LL;
      if ( Parent->LeftChild != Links )
        v5 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v5) = result;
      v6 = Links->Parent;
      result->Parent = Links->Parent;
      return RtlSplay(v6);
    }
    result->Parent = result;
  }
  else
  {
    v6 = Links->Parent;
    if ( Links->Parent != Links )
    {
      v7 = 8LL;
      if ( v6->LeftChild != Links )
        v7 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v6->Parent + v7) = 0LL;
      return RtlSplay(v6);
    }
    return 0LL;
  }
  return result;
}
