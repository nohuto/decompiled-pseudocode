/*
 * XREFs of sub_14021DC48 @ 0x14021DC48
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x14021D280 (FsRtlFastCheckLockForWrite.c)
 *     FsRtlFastCheckLockForRead @ 0x14021DAF0 (FsRtlFastCheckLockForRead.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14021D710 (RtlRealSuccessor.c)
 *     sub_14021DCF4 @ 0x14021DCF4 (sub_14021DCF4.c)
 *     RtlSplay @ 0x14021ECC0 (RtlSplay.c)
 */

char __fastcall sub_14021DC48(__int64 a1, _RTL_SPLAY_LINKS **a2, _RTL_SPLAY_LINKS **a3, int a4, __int64 a5, __int64 a6)
{
  char v10; // bl
  PRTL_SPLAY_LINKS v11; // r9
  _RTL_SPLAY_LINKS *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbp
  PRTL_SPLAY_LINKS Links; // [rsp+60h] [rbp+8h] BYREF

  Links = 0LL;
  v10 = 1;
  v11 = (PRTL_SPLAY_LINKS)sub_14021DCF4(*(_QWORD *)(a1 + 16), (_DWORD)a2, (_DWORD)a3, (unsigned int)&Links, 0LL);
  if ( v11 )
  {
    v13 = *a3;
    v14 = a6;
    v15 = a5;
    while ( v13 >= v11[1].Parent )
    {
      if ( *a2 <= v11[2].RightChild
        && (v11[2].Parent != (_RTL_SPLAY_LINKS *)v15
         || v11[2].LeftChild != (_RTL_SPLAY_LINKS *)v14
         || HIDWORD(v11[1].RightChild) != a4) )
      {
        v10 = 0;
        break;
      }
      v11 = RtlRealSuccessor(v11);
      if ( !v11 )
        break;
    }
  }
  if ( Links )
    *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  return v10;
}
