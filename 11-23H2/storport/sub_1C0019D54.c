/*
 * XREFs of sub_1C0019D54 @ 0x1C0019D54
 * Callers:
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C0014EE0 @ 0x1C0014EE0 (sub_1C0014EE0.c)
 *     sub_1C00203B0 @ 0x1C00203B0 (sub_1C00203B0.c)
 *     sub_1C0034B20 @ 0x1C0034B20 (sub_1C0034B20.c)
 *     sub_1C0039708 @ 0x1C0039708 (sub_1C0039708.c)
 *     sub_1C003AC60 @ 0x1C003AC60 (sub_1C003AC60.c)
 *     sub_1C003D540 @ 0x1C003D540 (sub_1C003D540.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 * Callees:
 *     sub_1C0019DB4 @ 0x1C0019DB4 (sub_1C0019DB4.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 */

__int64 __fastcall sub_1C0019D54(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = sub_1C0019DB4();
  v3 = v2;
  if ( (qword_1C0093468 & 0x200) != 0 )
    sub_1C0019E4C(a1, 7, (_DWORD)retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v3;
}
