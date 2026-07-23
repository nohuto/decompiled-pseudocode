/*
 * XREFs of sub_1402E0130 @ 0x1402E0130
 * Callers:
 *     IoWMIWriteEvent @ 0x140223810 (IoWMIWriteEvent.c)
 *     sub_1402E00A4 @ 0x1402E00A4 (sub_1402E00A4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1402E0130(int a1)
{
  _DWORD *result; // rax

  result = off_140C04398;
  if ( off_140C04398 == (_UNKNOWN *)&off_140C04398 )
    return 0LL;
  while ( result[14] != a1 || (int)result[12] < 0 )
  {
    result = *(_DWORD **)result;
    if ( result == (_DWORD *)&off_140C04398 )
      return 0LL;
  }
  return result;
}
