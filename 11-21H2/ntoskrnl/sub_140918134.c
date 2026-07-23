/*
 * XREFs of sub_140918134 @ 0x140918134
 * Callers:
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 */

__int64 __fastcall sub_140918134(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 v7; // rax

  v7 = sub_140721BF0(a1, a2, 0LL);
  return sub_1406B5158((PSECURITY_DESCRIPTOR)(v7 + 32), a3, a4, a5);
}
