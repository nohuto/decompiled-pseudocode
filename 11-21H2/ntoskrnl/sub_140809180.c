/*
 * XREFs of sub_140809180 @ 0x140809180
 * Callers:
 *     sub_140808480 @ 0x140808480 (sub_140808480.c)
 *     sub_140808F30 @ 0x140808F30 (sub_140808F30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140809180(__int64 a1, __int64 a2)
{
  char result; // al

  result = 1;
  if ( qword_140C5ADC0 )
    return sub_14042A5E0(qword_140C5ADC0, a2);
  return result;
}
