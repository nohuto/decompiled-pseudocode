/*
 * XREFs of sub_14050C520 @ 0x14050C520
 * Callers:
 *     sub_1403BBAC8 @ 0x1403BBAC8 (sub_1403BBAC8.c)
 *     sub_14050CE78 @ 0x14050CE78 (sub_14050CE78.c)
 * Callees:
 *     <none>
 */

unsigned __int64 sub_14050C520()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r8
  unsigned __int64 result; // rax

  v0 = *(_QWORD *)(qword_140C4E390 + 192);
  v1 = *(_QWORD *)(qword_140C4E500 + 192);
  if ( v0 <= v1 )
    result = 10 * v1 / v0;
  else
    result = 10 * v0 / v1;
  if ( result < 0xA )
    return 10LL;
  return result;
}
