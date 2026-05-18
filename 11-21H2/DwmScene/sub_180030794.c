/*
 * XREFs of sub_180030794 @ 0x180030794
 * Callers:
 *     sub_1800347F0 @ 0x1800347F0 (sub_1800347F0.c)
 * Callees:
 *     sub_180060E7C @ 0x180060E7C (sub_180060E7C.c)
 */

__int64 __fastcall sub_180030794(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v5[0] = v2;
  v3 = a2[1];
  a2[1] = 0LL;
  v5[1] = v3;
  return sub_180060E7C(a1, v5);
}
