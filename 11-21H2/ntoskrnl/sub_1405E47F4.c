/*
 * XREFs of sub_1405E47F4 @ 0x1405E47F4
 * Callers:
 *     sub_140A80FC8 @ 0x140A80FC8 (sub_140A80FC8.c)
 *     sub_140A9DFBC @ 0x140A9DFBC (sub_140A9DFBC.c)
 * Callees:
 *     sub_1402AB970 @ 0x1402AB970 (sub_1402AB970.c)
 *     sub_14041FAB0 @ 0x14041FAB0 (sub_14041FAB0.c)
 */

__int64 sub_1405E47F4()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0LL;
  v2 = 0LL;
  if ( !(unsigned __int8)sub_1402AB970((__int64)&v2, (__int64)&v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)&sub_14041FAB0()[-v2] >= 0xE30;
  return v0;
}
