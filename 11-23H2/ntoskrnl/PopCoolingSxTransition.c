/*
 * XREFs of PopCoolingSxTransition @ 0x140586B10
 * Callers:
 *     PopThermalSxEntry @ 0x14058FC48 (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x14058FD74 (PopThermalSxExit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1405957D8 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1405959F8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140848090 (PopThermalUpdateActiveTimeTracking.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x14098AFC0 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopCoolingSxTransition(char a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  __int64 *j; // rbx
  __int64 v5; // rax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          if ( a1 )
          {
            if ( *(_QWORD *)(i + 136) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 16);
              PopThermalUpdatePassiveTimeTracking(j + 5, v3);
              PopTraceThermalRequestPassiveHistogram(j);
            }
            if ( *(_QWORD *)(i + 128) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 17) == 0;
              PopThermalUpdateActiveTimeTracking(j + 5, v3);
              PopTraceThermalRequestActiveActivity(j);
            }
            *((_BYTE *)j + 40) = 1;
          }
          else
          {
            v5 = MEMORY[0xFFFFF78000000008];
            j[6] = MEMORY[0xFFFFF78000000008];
            j[7] = v5;
            *((_BYTE *)j + 40) = 0;
          }
        }
      }
      PopReleaseRwLock((__int64 *)(i + 32));
    }
  }
  PopReleaseRwLock(&PopCoolingExtensionLock);
}
