/*
 * XREFs of ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800AE3B4
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800AEC60 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800AD4B0 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800ADCAC (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800ADE00 (-LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800ADF18 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AE458 (-LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AE554 (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AE6A8 (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 */

void __fastcall ISMTracing::LogMPCInputReport_(ISMTracing *this, struct InputInfo *a2, const bool *a3)
{
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
    {
      ISMTracing::LogMPCHandInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x40000) != 0 )
    {
      ISMTracing::LogMPCVoiceInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      ISMTracing::LogMPCClickerInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
    {
      ISMTracing::LogMPCSpatialControllerInputReport(a2, a3);
    }
    else if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      ISMTracing::LogMPCMouseInputReport(a2, a3);
    }
    else if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      ISMTracing::LogMPCGameControllerInputReport(a2, a3);
    }
  }
}
