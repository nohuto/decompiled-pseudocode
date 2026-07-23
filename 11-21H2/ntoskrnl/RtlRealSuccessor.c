/*
 * XREFs of RtlRealSuccessor @ 0x14021D710
 * Callers:
 *     sub_14021D404 @ 0x14021D404 (sub_14021D404.c)
 *     sub_14021D9D4 @ 0x14021D9D4 (sub_14021D9D4.c)
 *     sub_14021DC48 @ 0x14021DC48 (sub_14021DC48.c)
 *     sub_14021DEB4 @ 0x14021DEB4 (sub_14021DEB4.c)
 *     sub_14021E6C4 @ 0x14021E6C4 (sub_14021E6C4.c)
 *     sub_14021E818 @ 0x14021E818 (sub_14021E818.c)
 *     sub_14021F514 @ 0x14021F514 (sub_14021F514.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140252FC0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     RtlEnumerateGenericTable @ 0x1403B6980 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x140541AD0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140694660 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x14081D030 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
