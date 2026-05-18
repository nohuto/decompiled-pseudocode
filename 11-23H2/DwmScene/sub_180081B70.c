/*
 * XREFs of sub_180081B70 @ 0x180081B70
 * Callers:
 *     sub_180081688 @ 0x180081688 (sub_180081688.c)
 * Callees:
 *     sub_180081618 @ 0x180081618 (sub_180081618.c)
 */

__int64 __fastcall sub_180081B70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 24;
    v5 = a3 - a1;
    do
    {
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)(v5 + v4 - 8) = 0LL;
      *(_QWORD *)(v4 + v5) = 0LL;
      *(_OWORD *)a3 = *(_OWORD *)(v4 - 24);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 - 8);
      *(_QWORD *)(v4 - 8) = 0LL;
      a3 += 56LL;
      *(_QWORD *)v4 = 15LL;
      *(_BYTE *)(v4 - 24) = 0;
      *(_WORD *)(v5 + v4 + 8) = *(_WORD *)(v4 + 8);
      *(_DWORD *)(v5 + v4 + 12) = *(_DWORD *)(v4 + 12);
      *(_DWORD *)(v5 + v4 + 16) = *(_DWORD *)(v4 + 16);
      *(_DWORD *)(v5 + v4 + 20) = *(_DWORD *)(v4 + 20);
      *(_DWORD *)(v5 + v4 + 24) = *(_DWORD *)(v4 + 24);
      v4 += 56LL;
    }
    while ( v4 - 24 != a2 );
  }
  sub_180081618(a3, a3);
  return a3;
}
