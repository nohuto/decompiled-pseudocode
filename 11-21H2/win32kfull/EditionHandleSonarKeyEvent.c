/*
 * XREFs of EditionHandleSonarKeyEvent @ 0x1C01081E0
 * Callers:
 *     <none>
 * Callees:
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 *     zzzStartSonar @ 0x1C01E2F90 (zzzStartSonar.c)
 */

__int64 __fastcall EditionHandleSonarKeyEvent(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 2);
  if ( (result & 0x4000) == 0 )
  {
    if ( (result & 0x8000u) == 0LL )
    {
      result = (__int64)gpdwCPUserPreferencesMask;
      if ( _bittest((const signed __int32 *)gpdwCPUserPreferencesMask, 0xEu) )
      {
        result = gfade[0];
        if ( (LODWORD(gfade[6]) & 0x80u) != 0 )
        {
          result = StopFade();
          giSonarRadius = -1;
        }
      }
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) != a2 )
        BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = a2;
    }
    else
    {
      if ( a2 == 17
        && BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) == 17
        && _bittest((const signed __int32 *)gpdwCPUserPreferencesMask, 0xEu) )
      {
        zzzStartSonar();
      }
      result = (__int64)gpdwCPUserPreferencesMask;
      if ( _bittest((const signed __int32 *)gpdwCPUserPreferencesMask, 0xEu) )
      {
        if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) )
          BYTE6(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 0;
      }
    }
  }
  return result;
}
