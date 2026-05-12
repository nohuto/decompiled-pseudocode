/*
 * XREFs of sub_1C00437A0 @ 0x1C00437A0
 * Callers:
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 * Callees:
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 */

unsigned __int64 __fastcall sub_1C00437A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  sub_1C0008A7C(a1, 0, a3, &v5);
  result = v5 & 1 | (unsigned __int64)(2 * ((v5 >> 1) & 1u));
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
