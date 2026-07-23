/*
 * XREFs of sub_14085CF58 @ 0x14085CF58
 * Callers:
 *     sub_1403DA240 @ 0x1403DA240 (sub_1403DA240.c)
 *     sub_140996FDC @ 0x140996FDC (sub_140996FDC.c)
 * Callees:
 *     <none>
 */

bool sub_14085CF58()
{
  bool result; // al

  if ( qword_140C54148 )
  {
    if ( (byte_140C54209 & 1) == 0 )
    {
      result = dword_140C1F9DC != 0;
      byte_140C54209 = (dword_140C1F9DC != 0) | byte_140C54209 & 0xFE;
    }
  }
  return result;
}
