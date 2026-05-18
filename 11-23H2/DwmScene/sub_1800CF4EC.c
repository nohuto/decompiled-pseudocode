/*
 * XREFs of sub_1800CF4EC @ 0x1800CF4EC
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010B48 @ 0x180010B48 (sub_180010B48.c)
 *     sub_1800CC774 @ 0x1800CC774 (sub_1800CC774.c)
 */

__int64 __fastcall sub_1800CF4EC(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  char *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  v5 = sub_180010B48(a2);
  v6 = (char *)sub_18001090C(v5);
  sub_1800CC774(*(void **)a1, *(_QWORD *)(a1 + 8), v6);
  return sub_1800CF47C(a1, (__int64)v6, v4, a2);
}
