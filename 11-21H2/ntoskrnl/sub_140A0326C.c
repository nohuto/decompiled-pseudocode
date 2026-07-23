/*
 * XREFs of sub_140A0326C @ 0x140A0326C
 * Callers:
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 *     sub_140A03DA4 @ 0x140A03DA4 (sub_140A03DA4.c)
 * Callees:
 *     sub_140A031C4 @ 0x140A031C4 (sub_140A031C4.c)
 */

bool __fastcall sub_140A0326C(__int64 a1, int a2, const UNICODE_STRING *a3, void *a4)
{
  __int64 v5; // rdx

  v5 = *(_QWORD *)(a1 + 56);
  return v5 && sub_140A031C4(a1 + 16, v5, a2, a3, a4);
}
