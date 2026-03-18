/*
 * XREFs of PnpGetLogString @ 0x1403CE0A8
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x1408799CC (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879C70 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A80534;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A80534;
  return result;
}
