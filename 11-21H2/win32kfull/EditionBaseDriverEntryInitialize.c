/*
 * XREFs of EditionBaseDriverEntryInitialize @ 0x1C0111EF0
 * Callers:
 *     <none>
 * Callees:
 *     InitializeWin32kCall @ 0x1C0112074 (InitializeWin32kCall.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C0390078 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 */

__int64 EditionBaseDriverEntryInitialize()
{
  __int64 result; // rax

  result = wil_InitializeFeatureStaging();
  if ( (int)result >= 0 )
  {
    result = InitializeWin32kCall();
    if ( (int)result >= 0 )
    {
      CRitTimerScanWakeSystem::ritTimerScanWakeEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
      if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
      {
        CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock = 0LL;
        result = 0LL;
        qword_1C03374D8 = 0LL;
        dword_1C03374D0 = 0;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
