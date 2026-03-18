/*
 * XREFs of PoSetThermalPassiveCooling @ 0x140982CF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x140586D00 (PopPropogateCoolingChange.c)
 *     PoGetThermalRequestSupport @ 0x140860EE0 (PoGetThermalRequestSupport.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098AFC0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceThermalRequestPassiveUpdate @ 0x140991E24 (PopDiagTraceThermalRequestPassiveUpdate.c)
 */

__int64 __fastcall PoSetThermalPassiveCooling(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rdx

  v4 = 0;
  if ( PoGetThermalRequestSupport(a1, 0) )
  {
    if ( a2 <= 0x64u )
    {
      v5 = *(_QWORD *)(a1 + 32);
      PopAcquireRwLockExclusive(v5 + 32);
      if ( *(_BYTE *)(a1 + 18) )
      {
        LOBYTE(v6) = *(_BYTE *)(a1 + 16);
        if ( (_BYTE)v6 != a2 )
        {
          PopThermalUpdatePassiveTimeTracking(a1 + 40, v6);
          *(_BYTE *)(a1 + 16) = a2;
          PopDiagTraceThermalRequestPassiveUpdate(a1);
          PopPropogateCoolingChange(v5);
        }
      }
      else
      {
        v4 = -1073741431;
      }
      PopReleaseRwLock((__int64 *)(v5 + 32));
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
