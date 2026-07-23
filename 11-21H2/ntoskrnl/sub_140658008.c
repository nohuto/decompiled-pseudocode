/*
 * XREFs of sub_140658008 @ 0x140658008
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1406E9370 @ 0x1406E9370 (sub_1406E9370.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140658008(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 72);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    v9 = sub_1406BF400(v7, *(unsigned int *)(v8 + 40));
  else
    v9 = sub_1407C9820(v7);
  *(_QWORD *)(v9 + 4) = *a2;
  v10 = *a2;
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = v10;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    sub_1406BF450(v7, &v14);
  else
    sub_1407C97C0(v7, &v14);
  LOBYTE(v12) = 1;
  sub_1406E9370(*(_QWORD *)(a1 + 48), v11, a3, v12);
  return sub_14067EE40(*(_QWORD *)(a1 + 48), 8LL, a3);
}
