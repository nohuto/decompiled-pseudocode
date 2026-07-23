/*
 * XREFs of sub_14065C6FC @ 0x14065C6FC
 * Callers:
 *     sub_14065C6C0 @ 0x14065C6C0 (sub_14065C6C0.c)
 * Callees:
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065C6FC(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 i; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax

  v2 = *a2;
  for ( i = a1 + 16; v2 >= 0; --v2 )
  {
    v6 = sub_14069F1CC(i);
    v7 = sub_14069F1CC(a2);
    v8 = *(unsigned int *)(v7 + 8);
    if ( (_DWORD)v8 != -1 )
    {
      v9 = *(_QWORD *)v7;
      *(_QWORD *)v6 = *(_QWORD *)v7;
      *(_DWORD *)(v6 + 8) = v8;
      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
        v10 = sub_1406BF400(v9, v8);
      else
        v10 = sub_1407C9820(v9);
      *(_QWORD *)(v6 + 16) = v10;
    }
  }
  result = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(result + 16) = i;
  *(_QWORD *)(result + 8) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
