/*
 * XREFs of sub_14096B2A0 @ 0x14096B2A0
 * Callers:
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     sub_140583E7C @ 0x140583E7C (sub_140583E7C.c)
 */

void __fastcall sub_14096B2A0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v4[0] = a1;
  v6 = 0;
  v4[1] = a2;
  if ( (a3 & 0x80000) != 0 )
  {
    v3 = 0;
  }
  else if ( (a3 & 0x1000000) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 2;
  }
  v5 = v3;
  sub_140583E7C(0x286u, 0x20008000u, (__int64)v4, 20, 4200706);
}
