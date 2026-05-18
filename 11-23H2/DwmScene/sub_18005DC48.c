/*
 * XREFs of sub_18005DC48 @ 0x18005DC48
 * Callers:
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 * Callees:
 *     sub_18005D990 @ 0x18005D990 (sub_18005D990.c)
 *     sub_18005DCB8 @ 0x18005DCB8 (sub_18005DCB8.c)
 *     sub_18005DEF0 @ 0x18005DEF0 (sub_18005DEF0.c)
 *     sub_18005E068 @ 0x18005E068 (sub_18005E068.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 */

__int64 __fastcall sub_18005DC48(__int64 a1)
{
  char v2; // si
  char v3; // di
  __int64 result; // rax
  char v5; // r11

  v2 = sub_18005E124();
  v3 = sub_18005DEF0(a1);
  result = sub_18005DCB8(a1);
  v5 = result;
  if ( v3 || (_BYTE)result )
    result = sub_18005E068(a1);
  if ( v2 || v3 || v5 )
    return sub_18005D990(a1);
  return result;
}
