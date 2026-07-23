/*
 * XREFs of PnpGetLogString @ 0x1403CE288
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140879C0C (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140879EB0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

int *__fastcall PnpGetLogString(__int64 a1)
{
  int *result; // rax

  if ( !a1 )
    return &dword_140A807E4;
  result = *(int **)(a1 + 8);
  if ( !result )
    return &dword_140A807E4;
  return result;
}
