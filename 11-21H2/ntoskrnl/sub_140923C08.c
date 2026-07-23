/*
 * XREFs of sub_140923C08 @ 0x140923C08
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 * Callees:
 *     sub_1402A2104 @ 0x1402A2104 (sub_1402A2104.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14071B640 @ 0x14071B640 (sub_14071B640.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140923C08(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rdi
  __int64 v4; // rax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 v8; // rax
  ULONG_PTR v9; // rdx
  __int64 v10; // rbp
  ULONG_PTR v11; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0xFFFFFFFFLL;
  v2 = *(unsigned int **)(a1 + 104);
  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    v8 = sub_1406BF400(v6, v7, &v12);
  else
    v8 = sub_1407C9820(v6, v7, (unsigned int *)&v12);
  v9 = *(unsigned int *)(v8 + 44);
  v10 = v8;
  *(_DWORD *)(v8 + 44) = *v2;
  sub_1402A2104(v6, v9);
  *v2 = -1;
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  sub_14071B640(*(_QWORD *)(a1 + 48), *(unsigned int *)(v10 + 44), 0LL, 0, 0);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    sub_1406BF450(v6, &v12);
  else
    sub_1407C97C0(v6, (unsigned int *)&v12);
  v11 = *v2;
  if ( (_DWORD)v11 != -1 )
    sub_1402A2104(*((_QWORD *)v2 + 1), v11);
  ExFreePoolWithTag(v2, 0x77554D43u);
  *(_QWORD *)(a1 + 104) = 0LL;
}
