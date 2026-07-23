/*
 * XREFs of sub_14042BCB0 @ 0x14042BCB0
 * Callers:
 *     sub_14042BCD0 @ 0x14042BCD0 (sub_14042BCD0.c)
 *     sub_14042BFB0 @ 0x14042BFB0 (sub_14042BFB0.c)
 * Callees:
 *     sub_14042BBF0 @ 0x14042BBF0 (sub_14042BBF0.c)
 */

__int64 __fastcall sub_14042BCB0(int a1, unsigned int *a2)
{
  int v2; // ecx

  v2 = a1 - 1;
  if ( v2 )
    sub_14042BBF0(v2, a2);
  return *a2;
}
