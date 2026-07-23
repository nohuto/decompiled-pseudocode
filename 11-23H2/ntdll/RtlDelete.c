/*
 * XREFs of RtlDelete @ 0x180063000
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x180062AF0 (RtlDeleteElementGenericTable.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1F06 (RtlpTpIoDllLoaded.c)
 *     PfxRemovePrefix @ 0x1800F20B0 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x1800630A0 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1800630C8 (SwapSplayLinks.c)
 */

PRTL_SPLAY_LINKS __cdecl RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v2; // rax
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v5; // rdx
  _RTL_SPLAY_LINKS *v6; // rcx
  __int64 v7; // rdx

  if ( Links->LeftChild && Links->RightChild )
  {
    v2 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v2, Links);
  }
  result = Links->LeftChild;
  if ( result || (result = Links->RightChild) != 0LL )
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
