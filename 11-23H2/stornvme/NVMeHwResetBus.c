/*
 * XREFs of NVMeHwResetBus @ 0x1C0008700
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  result = NVMeControllerReset(a1);
  if ( result )
    ++*(_DWORD *)(a1 + 4464);
  else
    ++*(_DWORD *)(a1 + 4468);
  return result;
}
