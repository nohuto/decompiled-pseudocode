/*
 * XREFs of ntoskrnl_22 @ 0x1406EB390
 * Callers:
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 * Callees:
 *     <none>
 */

char ntoskrnl_22()
{
  char result; // al

  result = 0;
  if ( (_DWORD)InitSafeBootMode || byte_140C4E508 )
    return 1;
  return result;
}
