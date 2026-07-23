/*
 * XREFs of sub_140400E04 @ 0x140400E04
 * Callers:
 *     sub_1403FF3BC @ 0x1403FF3BC (sub_1403FF3BC.c)
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 * Callees:
 *     sub_1404000FC @ 0x1404000FC (sub_1404000FC.c)
 *     sub_14040B7F4 @ 0x14040B7F4 (sub_14040B7F4.c)
 *     sub_14040D2C4 @ 0x14040D2C4 (sub_14040D2C4.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

__int64 __fastcall sub_140400E04(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  char v10; // bl

  if ( (a4 & 8) != 0 )
  {
    v10 = sub_1404000FC(a1);
    if ( !(v10 & 1 | (unsigned int)sub_14040D2C4(a1, 2LL)) )
      sub_14056AF38(1835296364LL);
  }
  return sub_14040B7F4(a1, a2, a3, a4, a5, a6);
}
