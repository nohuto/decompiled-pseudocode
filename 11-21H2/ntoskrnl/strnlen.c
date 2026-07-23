/*
 * XREFs of strnlen @ 0x1403E2F80
 * Callers:
 *     sub_1404617FE @ 0x1404617FE (sub_1404617FE.c)
 *     sub_14079781C @ 0x14079781C (sub_14079781C.c)
 *     sub_140797A74 @ 0x140797A74 (sub_140797A74.c)
 *     sub_1409F45F0 @ 0x1409F45F0 (sub_1409F45F0.c)
 * Callees:
 *     <none>
 */

size_t __cdecl strnlen(const char *Str, size_t MaxCount)
{
  size_t result; // rax

  for ( result = 0LL; result < MaxCount; ++Str )
  {
    if ( !*Str )
      break;
    ++result;
  }
  return result;
}
