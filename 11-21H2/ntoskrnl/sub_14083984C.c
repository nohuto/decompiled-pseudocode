/*
 * XREFs of sub_14083984C @ 0x14083984C
 * Callers:
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     sub_14083A490 @ 0x14083A490 (sub_14083A490.c)
 * Callees:
 *     sub_1408398AC @ 0x1408398AC (sub_1408398AC.c)
 */

__int64 __fastcall sub_14083984C(__int64 a1)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rbx

  if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
  {
    v3 = (_QWORD *)(a1 + 16);
    v4 = *(_QWORD **)(a1 + 16);
    v5 = v4 - 5;
    while ( 1 )
    {
      v6 = *v4 - 40LL;
      if ( v3 == v4 )
        break;
      sub_1408398AC(v5);
      v5 = (_QWORD *)v6;
      v4 = (_QWORD *)(v6 + 40);
    }
  }
  return sub_1408398AC(a1);
}
