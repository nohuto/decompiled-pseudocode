/*
 * XREFs of sub_1409895EC @ 0x1409895EC
 * Callers:
 *     sub_140858C40 @ 0x140858C40 (sub_140858C40.c)
 * Callees:
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 */

__int64 __fastcall sub_1409895EC(_BYTE *a1, char a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    *a1 = a2;
    return sub_1408193F4();
  }
  return result;
}
