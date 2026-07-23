/*
 * XREFs of sub_140968160 @ 0x140968160
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1405853E4 @ 0x1405853E4 (sub_1405853E4.c)
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 */

void __fastcall sub_140968160(__int64 a1)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  char *v4; // rax
  unsigned __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v4 = sub_14026DFC0(1);
  sub_1405853E4(v2, (__int64)v4, 0, a1, v3);
  *(_WORD *)(a1 + 10) &= 0xFFDEu;
  v5 = sub_140313C70(v2);
  sub_14076200C(0, v5, v3);
}
