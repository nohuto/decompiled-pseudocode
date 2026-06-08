/*
 * XREFs of RegisterHvPepIdleStatesV2 @ 0x1C002F3F4
 * Callers:
 *     RegisterHvIdleStates @ 0x1C002F320 (RegisterHvIdleStates.c)
 * Callees:
 *     GetHvPpmCapabilities @ 0x1C003998C (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C0039C58 (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C003A79C (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvPepIdleStatesV2(__int64 a1)
{
  int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v2 = RegisterHvCStates();
  if ( v2 >= 0 )
  {
    GetHvPpmCapabilities(&v4, 0LL, 0LL);
    if ( v4 )
      return (unsigned int)RegisterVmIdleStates(a1);
  }
  return (unsigned int)v2;
}
