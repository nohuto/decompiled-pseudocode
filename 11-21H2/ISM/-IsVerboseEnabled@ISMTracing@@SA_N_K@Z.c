/*
 * XREFs of ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800AD4B0
 * Callers:
 *     ?LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD4F0 (-LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD66C (-LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD700 (-LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD87C (-LogInitialMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD920 (-LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800AD9B4 (-LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800ADB30 (-LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800AE3B4 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800B6624 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z @ 0x1800BA3BC (-LogSpeechRuntimeListenerFunct_@ISMTracing@@QEAAXPEBG@Z.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800F3B14 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 */

char __fastcall ISMTracing::IsVerboseEnabled(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // cl

  v1 = wil::details::static_lazy<ISMTracing>::get(a1, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 <= 5u )
    return 0;
  v2 = 1;
  if ( (*(_BYTE *)(v1 + 16) & 1) == 0 || (*(_QWORD *)(v1 + 24) & 1LL) != *(_QWORD *)(v1 + 24) )
    return 0;
  return v2;
}
