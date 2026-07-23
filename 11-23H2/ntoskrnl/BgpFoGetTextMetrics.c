/*
 * XREFs of BgpFoGetTextMetrics @ 0x140385D90
 * Callers:
 *     BgpConsoleSetPointSize @ 0x14038501C (BgpConsoleSetPointSize.c)
 *     BgpTxtDisplayCharacter @ 0x140385168 (BgpTxtDisplayCharacter.c)
 *     BgpTxtCreateRegion @ 0x140AEE2AC (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140AF27B0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140B9C9D8 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140385DC0 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
