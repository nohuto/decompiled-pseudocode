/*
 * XREFs of rimExtractPenInfo @ 0x1C01A96B4
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C01A97C8 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimExtractData @ 0x1C00E2FB2 (rimExtractData.c)
 */

__int64 __fastcall rimExtractPenInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 5) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3072);
  a3[43] = rimExtractData(a1, 13, 65, 2, a3 + 41);
  a3[44] = rimExtractData(a1, 13, 61, 4, a3 + 41);
  result = rimExtractData(a1, 13, 62, 8, a3 + 41);
  a3[45] = result;
  if ( (*(_DWORD *)(a1 + 360) & 0x8000) != 0 )
  {
    result = rimExtractData(a1, 13, 48, 1, a3 + 41);
    a3[42] = result;
  }
  else if ( a2 )
  {
    a3[41] |= 1u;
    a3[42] = 512;
  }
  return result;
}
