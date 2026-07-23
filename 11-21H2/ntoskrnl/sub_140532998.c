/*
 * XREFs of sub_140532998 @ 0x140532998
 * Callers:
 *     sub_140532A10 @ 0x140532A10 (sub_140532A10.c)
 *     sub_140533370 @ 0x140533370 (sub_140533370.c)
 *     sub_1405336FC @ 0x1405336FC (sub_1405336FC.c)
 * Callees:
 *     sub_140532A28 @ 0x140532A28 (sub_140532A28.c)
 */

__int64 __fastcall sub_140532998(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v6[1] = 0LL;
  v6[0] = 0x8000000000000000uLL;
  sub_140532A28(a1, v6, a3);
  v7[1] = 0LL;
  v7[0] = 0x1000000000000000LL;
  return sub_140532A28(a1, v7, v3);
}
