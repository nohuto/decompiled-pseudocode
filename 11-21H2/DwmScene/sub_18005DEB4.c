/*
 * XREFs of sub_18005DEB4 @ 0x18005DEB4
 * Callers:
 *     sub_18005D5BC @ 0x18005D5BC (sub_18005D5BC.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 * Callees:
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     sub_18005DBFC @ 0x18005DBFC (sub_18005DBFC.c)
 */

__int64 __fastcall sub_18005DEB4(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = sub_18005DBFC((__int64)v9, a2, a4);
  sub_18005CB40(a1, v7, a3, a4);
  return a1;
}
