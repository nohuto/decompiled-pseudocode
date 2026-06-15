/*
 * XREFs of sub_1800FDEF8 @ 0x1800FDEF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FDEF8(void *a1, unsigned __int16 *a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x1800FDF6BLL);
  return s_ccCreateHandsfreeHidFileFromAudioId(a1, a2);
}
