/*
 * XREFs of PpmParkClearForcedMask @ 0x140999F54
 * Callers:
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x140392600 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x14039305C (PpmCheckApplyParkConstraints.c)
 *     PpmParkParkingAvailable @ 0x14082CC1C (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(__int16 *a1)
{
  __int64 v2; // rcx
  __int16 v3; // dx
  unsigned int v4; // ebx
  unsigned int v6; // r10d
  char v7; // r9
  unsigned __int16 i; // r8
  char v9; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v3 = *a1;
  if ( (unsigned __int16)*a1 < 0x20u )
  {
    v6 = PpmParkNumNodes;
    v4 = 0;
    v7 = 0;
    for ( i = 0; i < v6; ++i )
    {
      v2 = PpmParkNodes + 192LL * i;
      if ( *(_WORD *)(v2 + 4) == v3 )
      {
        v9 = *(_BYTE *)(v2 + 120);
        if ( (v9 & 1) != 0 )
        {
          v7 = 1;
          *(_BYTE *)(v2 + 120) = v9 & 0xFE;
          v3 = *a1;
        }
      }
    }
    if ( v7 )
    {
      PpmParkApplyPolicy(v2);
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v4;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
