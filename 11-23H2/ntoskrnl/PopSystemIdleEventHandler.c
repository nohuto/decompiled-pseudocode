/*
 * XREFs of PopSystemIdleEventHandler @ 0x140885750
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSystemIdleEventHandler(char a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdx

  if ( a1 )
  {
    *a2 = 1;
    return 0LL;
  }
  PopAcquireAdaptiveLock(1);
  if ( PopAdaptiveBootContext )
  {
    *a3 = 0;
    v6 = qword_140D53290 & 7;
    if ( (qword_140D53290 & 7) == 1 )
    {
      *a2 = 2;
    }
    else
    {
      if ( (qword_140D53290 & 7) != 2
        && (qword_140D53290 & 7) != 3
        && (qword_140D53290 & 7) != 4
        && (unsigned int)(qword_140D53290 & 7) - 5 > 1 )
      {
        goto LABEL_3;
      }
      *a2 = 10;
      *a3 = PopAdaptiveBootstateToSystemPowerState[v6];
    }
    PopReleaseAdaptiveLock();
    return 0LL;
  }
LABEL_3:
  PopReleaseAdaptiveLock();
  if ( PopPlatformAoAc )
  {
    *a2 = 2;
  }
  else
  {
    *a2 = 10;
    *a3 = 0;
  }
  return 0LL;
}
