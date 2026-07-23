/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x1403D036C
 * Callers:
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( PopDeepSleepIsEnabled && *(_BYTE *)(a1 + 33) && PopDeepSleepIsEngaged )
    return PopDeepSleepEvaluateWorkItemQueued == 0;
  return v1;
}
