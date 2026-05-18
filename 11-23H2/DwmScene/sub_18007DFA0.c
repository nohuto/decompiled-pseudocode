/*
 * XREFs of sub_18007DFA0 @ 0x18007DFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C150 @ 0x18008C150 (sub_18008C150.c)
 *     sub_18008C428 @ 0x18008C428 (sub_18008C428.c)
 *     sub_18008C43C @ 0x18008C43C (sub_18008C43C.c)
 *     sub_18008C450 @ 0x18008C450 (sub_18008C450.c)
 *     sub_18008C460 @ 0x18008C460 (sub_18008C460.c)
 *     sub_18008C470 @ 0x18008C470 (sub_18008C470.c)
 *     sub_18008C480 @ 0x18008C480 (sub_18008C480.c)
 *     sub_18008C490 @ 0x18008C490 (sub_18008C490.c)
 */

__int64 sub_18007DFA0()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx

  v0 = sub_18008C460();
  v2 = sub_18008C450(v1, v0);
  v5 = sub_18008C470(v4, v2 | v3);
  v8 = sub_18008C150(v7, v5 | v6);
  v11 = sub_18008C480(v10, v8 | v9);
  v14 = sub_18008C490(v13, v11 | v12);
  v17 = sub_18008C43C(v16, v14 | v15);
  result = sub_18008C428(v19, v17 | v18);
  *(_QWORD *)(v22 + 112) = result | v21;
  return result;
}
