/*
 * XREFs of sub_180093FA4 @ 0x180093FA4
 * Callers:
 *     sub_180094448 @ 0x180094448 (sub_180094448.c)
 *     sub_18009B540 @ 0x18009B540 (sub_18009B540.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180093FA4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 36;
    do
    {
      sub_18001875C((__int64 *)a3, v5 - 36);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a3 + 36) = *(_DWORD *)v5;
      *(_BYTE *)(a3 + 40) = *(_BYTE *)(v5 + 4);
      *(_DWORD *)(a3 + 44) = *(_DWORD *)(v5 + 8);
      a3 += 48LL;
      v5 += 48LL;
    }
    while ( v5 - 36 != a2 );
  }
  sub_180088D1C(a3, a3);
  return a3;
}
