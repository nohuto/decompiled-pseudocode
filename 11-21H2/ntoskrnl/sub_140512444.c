/*
 * XREFs of sub_140512444 @ 0x140512444
 * Callers:
 *     sub_140505810 @ 0x140505810 (sub_140505810.c)
 *     sub_1405129C8 @ 0x1405129C8 (sub_1405129C8.c)
 * Callees:
 *     sub_140457308 @ 0x140457308 (sub_140457308.c)
 *     sub_140517830 @ 0x140517830 (sub_140517830.c)
 */

__int64 *__fastcall sub_140512444(__int64 a1, char a2)
{
  __int64 *result; // rax

  do
  {
    result = sub_140457308(a1, a2);
    if ( !result )
      break;
    result = (__int64 *)sub_140517830((PDMA_ADAPTER)result);
  }
  while ( (_BYTE)result );
  return result;
}
