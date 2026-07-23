/*
 * XREFs of sub_140834430 @ 0x140834430
 * Callers:
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     <none>
 */

bool sub_140834430()
{
  bool result; // al

  result = 0;
  if ( !byte_140D3B018 )
    result = dword_140C0C6A4 == 1;
  byte_140C097BD = result;
  return result;
}
