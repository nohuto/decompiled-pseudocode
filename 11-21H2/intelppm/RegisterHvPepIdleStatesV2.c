/*
 * XREFs of RegisterHvPepIdleStatesV2 @ 0x1C0039414
 * Callers:
 *     RegisterHvIdleStates @ 0x1C0038F10 (RegisterHvIdleStates.c)
 * Callees:
 *     GetHvPpmCapabilities @ 0x1C00385A4 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C0038848 (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C00394AC (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvPepIdleStatesV2(__int64 a1)
{
  int v2; // ebx
  bool v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v2 = RegisterHvCStates(a1);
  if ( v2 >= 0 )
  {
    GetHvPpmCapabilities(&v4, 0LL);
    if ( v4 )
      return (unsigned int)RegisterVmIdleStates(a1);
  }
  return (unsigned int)v2;
}
