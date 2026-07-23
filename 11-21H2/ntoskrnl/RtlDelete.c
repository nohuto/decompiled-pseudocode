/*
 * XREFs of RtlDelete @ 0x14021EBA0
 * Callers:
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 *     sub_14021D754 @ 0x14021D754 (sub_14021D754.c)
 *     sub_14021DEB4 @ 0x14021DEB4 (sub_14021DEB4.c)
 *     sub_14021E048 @ 0x14021E048 (sub_14021E048.c)
 *     RtlDeleteElementGenericTable @ 0x14021E9A0 (RtlDeleteElementGenericTable.c)
 *     RtlRemoveUnicodePrefix @ 0x140694580 (RtlRemoveUnicodePrefix.c)
 *     PfxRemovePrefix @ 0x1409B7B20 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 *     sub_14021EFFC @ 0x14021EFFC (sub_14021EFFC.c)
 *     RtlSubtreePredecessor @ 0x14021F170 (RtlSubtreePredecessor.c)
 */

PRTL_SPLAY_LINKS __stdcall RtlDelete(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rcx
  __int64 v4; // rdx
  PRTL_SPLAY_LINKS v5; // rax
  _RTL_SPLAY_LINKS *Parent; // rcx
  __int64 v7; // rdx

  result = Links->LeftChild;
  if ( result
    && (!Links->RightChild
     || (v5 = RtlSubtreePredecessor(Links), sub_14021EFFC(v5, Links), (result = Links->LeftChild) != 0LL))
    || (result = Links->RightChild) != 0LL )
  {
    Parent = Links->Parent;
    if ( Links->Parent != Links )
    {
      v7 = 8LL;
      if ( Parent->LeftChild != Links )
        v7 = 16LL;
      *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent + v7) = result;
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
