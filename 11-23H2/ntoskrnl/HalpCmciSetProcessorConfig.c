/*
 * XREFs of HalpCmciSetProcessorConfig @ 0x140380238
 * Callers:
 *     HalpCmciInitProcessor @ 0x140380348 (HalpCmciInitProcessor.c)
 *     HalpDisableCmciOnProcessor @ 0x140506330 (HalpDisableCmciOnProcessor.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380794 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigIntel @ 0x140380898 (HalpCmciSetProcessorConfigIntel.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140505FE8 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciSetProcessorConfig(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx

  result = HalpGetCpuVendor();
  if ( (_BYTE)result == 2 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigIntel(a1, v7, a3);
  }
  else if ( (_BYTE)result == 1 )
  {
    LOBYTE(v7) = a2;
    return HalpCmciSetProcessorConfigAMD(a1, v7, a3);
  }
  return result;
}
