/*
 * XREFs of ?LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5FC4
 * Callers:
 *     ??$LogInitialMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z @ 0x1800C4218 (--$LogInitialMPCInputReport@AEAPEAUInputInfo@@AEA_N@ISMTracing@@SAXAEAPEAUInputInfo@@AEA_N@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800C5960 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5A14 (-LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5C68 (-LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C5D70 (-LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C6068 (-LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C6170 (-LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C63C4 (-LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 */

void __fastcall ISMTracing::LogInitialMPCInputReport_(ISMTracing *this, struct InputInfo *a2, const bool *a3)
{
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0 )
    {
      ISMTracing::LogInitialMPCHandInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x40000) != 0 )
    {
      ISMTracing::LogInitialMPCVoiceInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x400) != 0 )
    {
      ISMTracing::LogInitialMPCClickerInputReport(a2, a3);
    }
    else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
    {
      ISMTracing::LogInitialMPCSpatialControllerInputReport(a2, a3);
    }
    else if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      ISMTracing::LogInitialMPCMouseInputReport(a2, a3);
    }
    else if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      ISMTracing::LogInitialMPCGameControllerInputReport(a2, a3);
    }
  }
}
