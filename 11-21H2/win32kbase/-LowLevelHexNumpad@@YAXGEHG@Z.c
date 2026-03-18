/*
 * XREFs of ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01E93C0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003DC00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     ApiSetEditionIsHotKey @ 0x1C020898C (ApiSetEditionIsHotKey.c)
 */

void __fastcall LowLevelHexNumpad(unsigned __int16 a1, unsigned __int8 a2, int a3, __int16 a4)
{
  int v4; // eax

  if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 )
  {
    if ( (gfInNumpadHexInput & 1) != 0 )
      gfInNumpadHexInput &= ~1u;
    return;
  }
  if ( !a3 && ((gfInNumpadHexInput & 1) != 0 || a1 == 78 || a1 == 83) )
  {
    if ( (a4 & 0x100) == 0
      && (((BYTE4(gafAsyncKeyState) & 1 | (unsigned __int16)(2 * (BYTE5(gafAsyncKeyState) & 4 | 2))) - 4) & 0xFFF6) == 0 )
    {
      if ( (gfInNumpadHexInput & 1) == 0 )
      {
        if ( (BYTE6(xmmword_1C0294E60) & 0x40) != 0 || (BYTE7(xmmword_1C0294E60) & 1) != 0 )
          v4 = 8;
        else
          v4 = 0;
        if ( !(unsigned int)ApiSetEditionIsHotKey(
                              v4 | (4 * (BYTE4(gafAsyncKeyState) & 1)) | ((BYTE4(gafAsyncKeyState) & 4 | 2u) >> 1),
                              a2) )
          gfInNumpadHexInput |= 1u;
        return;
      }
      if ( (unsigned __int16)(a1 - 71) <= 0xBu && aVkNumpad[a1 - 71] != -1
        || (unsigned __int8)(a2 - 65) <= 5u
        || (unsigned __int8)(a2 - 48) <= 9u )
      {
        return;
      }
    }
    gfInNumpadHexInput &= ~1u;
  }
}
