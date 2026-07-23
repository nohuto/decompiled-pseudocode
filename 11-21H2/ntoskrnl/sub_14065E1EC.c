/*
 * XREFs of sub_14065E1EC @ 0x14065E1EC
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E3D4 @ 0x14065E3D4 (sub_14065E3D4.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E1EC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r14
  ULONG_PTR v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  ULONG_PTR v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // cx
  int v13; // eax
  unsigned int v14; // eax
  __int64 result; // rax
  int v16; // [rsp+60h] [rbp+30h] BYREF
  int v17; // [rsp+64h] [rbp+34h]
  int v18; // [rsp+68h] [rbp+38h] BYREF
  int v19; // [rsp+6Ch] [rbp+3Ch]

  v19 = 0;
  v17 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD **)(a1 + 104);
  v18 = -1;
  v16 = -1;
  v6 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    v7 = sub_1406BF400(v6, *(unsigned int *)(v4 + 40));
  else
    v7 = sub_1407C9820(v6);
  v8 = v7;
  v9 = *(unsigned int *)(v7 + 44);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  sub_14071B640(*(_QWORD *)(a1 + 48), v9, 0);
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    v10 = sub_1406BF400(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
  else
    v10 = sub_1407C9820(v6);
  v11 = v10;
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 304LL);
  v12 = 2 * *(_WORD *)(v8 + 72);
  v13 = *(_DWORD *)(v10 + 52);
  if ( (*(_BYTE *)(v8 + 2) & 0x20) == 0 )
    v12 = *(_WORD *)(v8 + 72);
  if ( (unsigned __int16)v13 < (unsigned int)v12 )
  {
    *(_WORD *)(v11 + 52) = v12;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v12;
  }
  v14 = *(unsigned __int16 *)(v8 + 74);
  if ( *(_DWORD *)(v11 + 56) < v14 )
    *(_DWORD *)(v11 + 56) = v14;
  if ( *v5 == 1 )
    sub_14065E3D4(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), v5);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    sub_1406BF450(v6, &v16);
  else
    sub_1407C97C0(v6, &v16);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    sub_1406BF450(v6, &v18);
  else
    sub_1407C97C0(v6, &v18);
  sub_14065E380(v6, v5);
  result = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(result + 240) = 0LL;
  return result;
}
