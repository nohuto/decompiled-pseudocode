/*
 * XREFs of sub_14099E6B8 @ 0x14099E6B8
 * Callers:
 *     sub_14099E2B4 @ 0x14099E2B4 (sub_14099E2B4.c)
 *     sub_14099E9BC @ 0x14099E9BC (sub_14099E9BC.c)
 *     sub_14099EB84 @ 0x14099EB84 (sub_14099EB84.c)
 * Callees:
 *     sub_14099E598 @ 0x14099E598 (sub_14099E598.c)
 *     sub_14099E75C @ 0x14099E75C (sub_14099E75C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_QWORD *__fastcall sub_14099E6B8(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  Pool2 = ExAllocatePool2(256LL, 168LL, 1734960208LL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 24) = dword_140C1CD80++;
    *(_DWORD *)(Pool2 + 148) = -1;
    if ( (int)sub_14099E598(a1, Pool2) < 0 )
    {
      sub_14099E75C(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C1CB78;
      if ( *(PVOID **)qword_140C1CB78 != &qword_140C1CB70 )
        __fastfail(3u);
      *v3 = &qword_140C1CB70;
      v3[1] = v4;
      *v4 = v3;
      qword_140C1CB78 = (__int64)v3;
    }
  }
  return v3;
}
