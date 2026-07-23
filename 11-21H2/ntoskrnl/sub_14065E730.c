/*
 * XREFs of sub_14065E730 @ 0x14065E730
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14065E730(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    v6 = sub_1406BF400(v5, *(unsigned int *)(v4 + 40));
  else
    v6 = sub_1407C9820(v5);
  v7 = *(_DWORD *)(v6 + 52) ^ (*(_DWORD *)(v6 + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
  *(_DWORD *)(v6 + 52) = v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(v7)) & 0xF;
  *(_QWORD *)(v6 + 4) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    return sub_1406BF450(v5, &v9);
  else
    return sub_1407C97C0(v5, &v9);
}
