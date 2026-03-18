/*
 * XREFs of BgpFoGetTextMetrics @ 0x1403CAD78
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403A7CAC (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x1403CACA0 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140AB1844 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140B55FC4 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x1403CADA8 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
