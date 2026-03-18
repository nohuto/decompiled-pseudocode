/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x1403CE174
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14087E5B4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F2B8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960200 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140961490 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1403CE1A8 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryMultiSz(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 0;
  if ( a1[1] == 7 )
    LOBYTE(a4) = (unsigned __int8)PnpValidateMultiSzData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3], a3, a4) != 0;
  return a4;
}
