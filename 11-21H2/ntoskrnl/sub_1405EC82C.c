/*
 * XREFs of sub_1405EC82C @ 0x1405EC82C
 * Callers:
 *     sub_1409BBF5C @ 0x1409BBF5C (sub_1409BBF5C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405EC82C(unsigned __int16 a1, unsigned __int16 *a2, unsigned __int16 **a3)
{
  unsigned __int16 *i; // r9
  __int64 result; // rax

  for ( i = *a3; --i >= a2; i[1] = result )
    result = *i;
  *a2 = a1;
  ++*a3;
  return result;
}
