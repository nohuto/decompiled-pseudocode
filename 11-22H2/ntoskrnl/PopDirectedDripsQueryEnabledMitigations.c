/*
 * XREFs of PopDirectedDripsQueryEnabledMitigations @ 0x140802CA0
 * Callers:
 *     PopDirectedDripsEngage @ 0x140586FC4 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B37AB8 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     PopDirectedDripsQueryRegistryValues @ 0x140802880 (PopDirectedDripsQueryRegistryValues.c)
 *     PopDirectedDripsQueryPs4Support @ 0x140802D34 (PopDirectedDripsQueryPs4Support.c)
 */

int __fastcall PopDirectedDripsQueryEnabledMitigations(__int64 a1)
{
  char v1; // si
  char v2; // di
  int result; // eax
  unsigned int v5; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v1 = 0;
  v2 = 0;
  result = PopDirectedDripsQueryRegistryValues(a1, &v6);
  v5 = v6;
  if ( (v6 & 1) != 0 )
  {
    v1 = 1;
    v5 = v6 & 0xFFFFFFFE;
  }
  if ( (v5 & 2) != 0 )
  {
    v2 = 1;
    v5 &= ~2u;
  }
  if ( (v5 & 8) == 0 )
  {
    result = PopDirectedDripsQueryPs4Support();
    if ( result == 1 )
    {
      v2 = 1;
    }
    else if ( result )
    {
      v2 = 0;
    }
  }
  if ( v1 )
    v5 |= 1u;
  if ( v2 )
    v5 |= 2u;
  *(_DWORD *)(a1 + 48) = v5;
  return result;
}
