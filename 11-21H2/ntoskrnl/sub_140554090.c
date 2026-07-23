/*
 * XREFs of sub_140554090 @ 0x140554090
 * Callers:
 *     sub_140552D54 @ 0x140552D54 (sub_140552D54.c)
 *     sub_140553164 @ 0x140553164 (sub_140553164.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405735F0 @ 0x1405735F0 (sub_1405735F0.c)
 */

bool sub_140554090()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( dword_140D01894 )
  {
    v1 = (unsigned int)dword_140D06884 - (unsigned int)sub_1405735F0();
    if ( (unsigned int)v1 <= 1 && !dword_140D01898 && !(unsigned __int8)sub_14042A5E0(v1, v0) )
      return 1;
  }
  return result;
}
