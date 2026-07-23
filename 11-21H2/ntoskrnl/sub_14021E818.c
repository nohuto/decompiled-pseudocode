/*
 * XREFs of sub_14021E818 @ 0x14021E818
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 *     sub_14021F280 @ 0x14021F280 (sub_14021F280.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     sub_14021DCF4 @ 0x14021DCF4 (sub_14021DCF4.c)
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 */

char __fastcall sub_14021E818(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  char v5; // bl
  PRTL_SPLAY_LINKS v7; // r9
  _RTL_SPLAY_LINKS *v8; // rsi
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  Links = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v5 = 1;
  if ( v3 )
  {
    v7 = (PRTL_SPLAY_LINKS)sub_14021DCF4(v3, (unsigned __int64 *)a2, (unsigned __int64 *)(a2 + 40), &Links, 0LL);
    if ( v7 )
    {
      v8 = *(_RTL_SPLAY_LINKS **)(a2 + 40);
      while ( v7[1].Parent <= v8 )
      {
        if ( (v7[2].Parent != *(_RTL_SPLAY_LINKS **)(a2 + 24)
           || v7[2].LeftChild != *(_RTL_SPLAY_LINKS **)(a2 + 32)
           || HIDWORD(v7[1].RightChild) != *(_DWORD *)(a2 + 20))
          && (*(_QWORD *)(a2 + 8) || v7[1].LeftChild) )
        {
          v5 = 0;
          break;
        }
        v7 = RtlRealSuccessor(v7);
        if ( !v7 )
          break;
      }
    }
    if ( Links )
      *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  }
  return v5;
}
