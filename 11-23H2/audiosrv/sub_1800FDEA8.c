/*
 * XREFs of sub_1800FDEA8 @ 0x1800FDEA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FDEA8(void *a1, unsigned __int16 *a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x1800FDF1BLL);
  return s_ccCreateHandsfreeHidFileFromAudioId(a1, a2);
}
