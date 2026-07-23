/*
 * XREFs of sub_1403790A8 @ 0x1403790A8
 * Callers:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 * Callees:
 *     sub_140379208 @ 0x140379208 (sub_140379208.c)
 *     sub_1403792A8 @ 0x1403792A8 (sub_1403792A8.c)
 *     sub_140379A64 @ 0x140379A64 (sub_140379A64.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_14038770C @ 0x14038770C (sub_14038770C.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 *     sub_1405F7240 @ 0x1405F7240 (sub_1405F7240.c)
 *     sub_1405FA244 @ 0x1405FA244 (sub_1405FA244.c)
 */

__int64 __fastcall sub_1403790A8(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edx
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // rdi
  int v15; // r8d
  int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-28h]

  v4 = 0;
  v5 = a2;
  v7 = a3;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v9 + 6021) & 4) != 0 )
      v10 = sub_140379208(v9, a2);
    else
      v10 = sub_1405F7240(v9, a2);
    if ( v10 < 0 )
      return 0LL;
    ++*(_DWORD *)(a1 + 8 * v7 + 1824);
    if ( !*(_BYTE *)(a1 + 776) )
      *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v5) & 0x1FFF;
    v4 = 1;
  }
  if ( *(_BYTE *)(a1 + 776) )
    v11 = 0;
  else
    v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
  v12 = sub_1403792A8(*(_QWORD *)(a1 + 800), v5, 0, a4, a4 | (v11 << 7) | 0x10u);
  v14 = v12;
  if ( v12 )
  {
    if ( ((v12 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x40000) == 0
        || !(unsigned int)sub_14038770C(*(_QWORD *)(a1 + 800), (unsigned int)v5) )
      {
        sub_1403792A8(*(_QWORD *)(a1 + 800), v5, 0, v13, 2);
        return v14;
      }
      v14 = -1LL;
      if ( *(_BYTE *)(a1 + 776) )
        v17 = 0;
      else
        v17 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1032) + 2 * v5) >> 13;
      v18 = *(_QWORD *)(a1 + 800);
      if ( (*(_BYTE *)(v18 + 6021) & 4) != 0 )
      {
        sub_140379A64(v18, v5, v15, v18, v23, (16 * v17) | 4);
      }
      else
      {
        v19 = *(_QWORD *)(v18 + 6216);
        v20 = *(_QWORD *)(v19 + 8 * v5);
        v21 = v20 & 0xFFFFFFFFFFFFFFFDuLL;
        v22 = v20 & 0xFFFFFFFFFFFFFFF8uLL;
        *(_QWORD *)(v19 + 8 * v5) = v21;
        if ( (v21 & 3) == 0 )
          sub_14037AE58(v18 + 6608, 5LL, KeGetCurrentThread(), v22);
      }
    }
    else
    {
      sub_1405FA244(a1, (unsigned int)v5, 1LL);
      v14 = (v14 != 1) - 1LL;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( v4 )
    sub_14039050C(a1, (unsigned int)v5);
  return v14;
}
