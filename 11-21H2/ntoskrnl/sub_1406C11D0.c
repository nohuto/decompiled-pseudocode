/*
 * XREFs of sub_1406C11D0 @ 0x1406C11D0
 * Callers:
 *     sub_1406C0D00 @ 0x1406C0D00 (sub_1406C0D00.c)
 * Callees:
 *     sub_1406C1068 @ 0x1406C1068 (sub_1406C1068.c)
 */

_BOOL8 __fastcall sub_1406C11D0(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-20h]
  int v4; // [rsp+3Ch] [rbp-1Ch]
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v2[2] = 0LL;
  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  v2[0] = a1;
  v2[1] = a1;
  return (int)sub_1406C1068((_DWORD *)(a1 + 48), (__int64)sub_1406C1010, (__int64)v2) >= 0 && v5 >= 0 && v4 == v3;
}
