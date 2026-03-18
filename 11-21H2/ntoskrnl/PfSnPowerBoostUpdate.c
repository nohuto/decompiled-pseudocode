/*
 * XREFs of PfSnPowerBoostUpdate @ 0x1406E191C
 * Callers:
 *     PfSnPowerBoost @ 0x1406E18A0 (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x140989000 (PfSnPowerBoostWorker.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 */

__int64 __fastcall PfSnPowerBoostUpdate(int a1)
{
  __int64 result; // rax
  signed __int32 v2; // edx
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  result = (unsigned int)-a1;
  v2 = _InterlockedExchangeAdd(&dword_140C54794, a1 != 0 ? 1 : -1);
  if ( !v2 && a1 || v2 == 1 && !a1 )
  {
    v4 = -1;
    v3 = (2 * (_BYTE)a1) & 2 | 1;
    return ExpNtUpdateWnfStateData((unsigned int)&WNF_SEB_APP_LAUNCH_PREFETCH, (unsigned int)&v3, 8, 0, 0LL, 0, 0, 1);
  }
  return result;
}
