/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1403C7500
 * Callers:
 *     sub_140682EA4 @ 0x140682EA4 (sub_140682EA4.c)
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 *     sub_1409AFE9C @ 0x1409AFE9C (sub_1409AFE9C.c)
 * Callees:
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  return sub_14036D62C(a1, a2, a3, a4, 0, v5);
}
