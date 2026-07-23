/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x1403CE9B4
 * Callers:
 *     PiDevCfgResolveMultiSzValue @ 0x14087E324 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14095F408 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140960350 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x1409615E0 (PiDevCfgResolveVariableFormatString.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1403CE9E8 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryMultiSz(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a4) = 0;
  if ( a1[1] == 7 )
    LOBYTE(a4) = (unsigned __int8)PnpValidateMultiSzData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3], a3, a4) != 0;
  return a4;
}
