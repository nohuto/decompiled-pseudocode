/*
 * XREFs of sub_14039DECC @ 0x14039DECC
 * Callers:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 *     sub_14039DE70 @ 0x14039DE70 (sub_14039DE70.c)
 *     sub_140549B84 @ 0x140549B84 (sub_140549B84.c)
 * Callees:
 *     <none>
 */

bool sub_14039DECC()
{
  bool result; // al

  result = 0;
  if ( (dword_140D0688C & 0x80u) != 0 )
    return (unsigned __int16)word_140D05014 > 1u;
  return result;
}
