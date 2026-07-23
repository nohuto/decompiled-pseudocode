/*
 * XREFs of sub_140996D60 @ 0x140996D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140996D60(unsigned int *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx

  sub_140A48330((_DWORD)a1);
  sub_1407FEC6C(a1, a2, a3, a4, a5);
  return sub_140A47CF8(v10, v9);
}
