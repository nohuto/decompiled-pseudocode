/*
 * XREFs of sub_140597560 @ 0x140597560
 * Callers:
 *     sub_1409E386C @ 0x1409E386C (sub_1409E386C.c)
 *     sub_140A48630 @ 0x140A48630 (sub_140A48630.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_14059673C @ 0x14059673C (sub_14059673C.c)
 */

__int64 *sub_140597560()
{
  __int64 *i; // rcx
  __int64 *result; // rax
  __int64 *v2; // rbx

  for ( i = 0LL; ; i = v2 )
  {
    result = (__int64 *)sub_140236710(i);
    v2 = result;
    if ( !result )
      break;
    sub_14059673C(*result);
  }
  return result;
}
