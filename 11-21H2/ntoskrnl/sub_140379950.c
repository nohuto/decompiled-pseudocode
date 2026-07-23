/*
 * XREFs of sub_140379950 @ 0x140379950
 * Callers:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 * Callees:
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 */

__int64 __fastcall sub_140379950(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx

  v3 = *(_QWORD *)(a1 + 800);
  v5 = a2;
  if ( (*(_BYTE *)(v3 + 6021) & 4) != 0 )
  {
    sub_140379A64(v3, a2, a3, v3);
  }
  else
  {
    v11 = *(_QWORD *)(v3 + 6216);
    v12 = *(_QWORD *)(v11 + 8LL * a2);
    v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
    v14 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(v11 + 8 * v5) = v13;
    if ( (v13 & 3) == 0 )
      sub_14037AE58(v3 + 6608, 5LL, KeGetCurrentThread(), v14);
  }
  v6 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v6 + 6021) & 4) != 0 )
    return sub_140379A64(v6, v5, a3, v6);
  result = *(_QWORD *)(v6 + 6216);
  v8 = *(_QWORD *)(result + 8 * v5);
  v9 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  v10 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(result + 8 * v5) = v9;
  if ( (v9 & 3) == 0 )
    return sub_14037AE58(v6 + 6608, 5LL, KeGetCurrentThread(), v10);
  return result;
}
