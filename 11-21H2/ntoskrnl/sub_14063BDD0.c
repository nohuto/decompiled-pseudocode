/*
 * XREFs of sub_14063BDD0 @ 0x14063BDD0
 * Callers:
 *     sub_1402129C0 @ 0x1402129C0 (sub_1402129C0.c)
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_140214694 @ 0x140214694 (sub_140214694.c)
 *     sub_140214A58 @ 0x140214A58 (sub_140214A58.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_140641F58 @ 0x140641F58 (sub_140641F58.c)
 *     sub_140B0ABEC @ 0x140B0ABEC (sub_140B0ABEC.c)
 * Callees:
 *     sub_14063BD64 @ 0x14063BD64 (sub_14063BD64.c)
 */

__int64 __fastcall sub_14063BDD0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  signed __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  bool v15; // zf
  unsigned __int64 v16; // rax

  v5 = 3LL * a3;
  v6 = *(_QWORD *)(a1 + 24LL * a3 + 16);
  v7 = *(_QWORD *)(a1 + 24LL * a3 + 24);
  if ( !v6 && !v7 )
    return 1LL;
  v9 = *(_QWORD *)(a1 + 8 * v5 + 32);
  v10 = 2 * a2 + 63;
  v11 = v6 >> 4;
  if ( v6 >> 4 > 0x6400000 )
    v11 = 104857600LL;
  v12 = v10 & 0xFFFFFFFFFFFFFFC0uLL;
  v13 = v11 + v6;
  while ( 1 )
  {
    if ( v6 && v12 > v13 - v9 )
      v12 = v13 - v9;
    if ( !v12 )
      break;
    v14 = v12 + v9;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v5 + 32), v12 + v9, v9);
    v15 = v9 == v16;
    v9 = v16;
    if ( v15 )
    {
      if ( v16 <= v7 && v14 > v7 )
        sub_14063BD64(a1);
      return v12;
    }
  }
  return v12;
}
