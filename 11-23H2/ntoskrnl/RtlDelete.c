/*
 * XREFs of RtlDelete @ 0x140327CC0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140326A34 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x140326D8C (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140327174 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x1403272F8 (FsRtlFastUnlockSingleShared.c)
 *     RtlDeleteElementGenericTable @ 0x140327C30 (RtlDeleteElementGenericTable.c)
 *     RtlRemoveUnicodePrefix @ 0x14079E7F0 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1409BAB80 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSplay @ 0x140327ED0 (RtlSplay.c)
 *     RtlSubtreePredecessor @ 0x140328190 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1403281B8 (SwapSplayLinks.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rcx
  __int64 v4; // rdx
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v6; // rdx
  PRTL_SPLAY_LINKS v7; // rax

  if ( Links->LeftChild && Links->RightChild )
  {
    v7 = RtlSubtreePredecessor(Links);
    SwapSplayLinks(v7, Links);
  }
  result = Links->LeftChild;
  if ( result || (result = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent != Links )
    {
      v6 = 8LL;
      if ( Parent->LeftChild != Links )
        v6 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v6) = result;
      v3 = Links->Parent;
      result->Parent = Links->Parent;
      return RtlSplay(v3);
    }
    result->Parent = result;
  }
  else
  {
    v3 = Links->Parent;
    if ( Links->Parent != Links )
    {
      v4 = 8LL;
      if ( v3->LeftChild != Links )
        v4 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&v3->Parent + v4) = 0LL;
      return RtlSplay(v3);
    }
    return 0LL;
  }
  return result;
}
