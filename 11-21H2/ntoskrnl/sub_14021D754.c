/*
 * XREFs of sub_14021D754 @ 0x14021D754
 * Callers:
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140694660 (FsRtlDeleteKeyFromTunnelCache.c)
 *     sub_140694FD0 @ 0x140694FD0 (sub_140694FD0.c)
 * Callees:
 *     sub_14021D8B4 @ 0x14021D8B4 (sub_14021D8B4.c)
 *     RtlDeleteNoSplay @ 0x14021D900 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x14021EBA0 (RtlDelete.c)
 */

__int64 __fastcall sub_14021D754(__int64 a1, _RTL_SPLAY_LINKS *a2, __int64 a3, _BYTE *a4)
{
  _RTL_SPLAY_LINKS *Parent; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rdx

  if ( a4 && *a4 )
  {
    *(_QWORD *)(a1 + 56) = RtlDelete(a2);
    *a4 = 0;
  }
  else
  {
    RtlDeleteNoSplay(a2, (PRTL_SPLAY_LINKS *)(a1 + 56));
  }
  Parent = a2[1].Parent;
  if ( Parent->LeftChild != &a2[1] || (LeftChild = a2[1].LeftChild, LeftChild->Parent != &a2[1]) )
    __fastfail(3u);
  LeftChild->Parent = Parent;
  Parent->LeftChild = LeftChild;
  --*(_WORD *)(a1 + 80);
  return sub_14021D8B4(a2, a3);
}
