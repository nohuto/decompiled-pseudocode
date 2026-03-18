/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x14082FEDC
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E550C (WdipSemEnableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140830168 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x1408301B0 (WdipSemBuildScenarioInstance.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409DDC94 (WdipSemLogInflightLimitExceededInformation.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C34AD8, 0LL);
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140C34AD0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(unsigned __int16 *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v5 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v5 )
      {
        v6 = (_QWORD *)qword_140C34AC8;
        if ( *(__int64 **)qword_140C34AC8 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v5 = &WdipSemEnabledInstanceTable;
        v5[1] = v6;
        *v6 = v5;
        ++dword_140C34AD0;
        qword_140C34AC8 = (__int64)v5;
      }
    }
  }
  ExReleasePushLockEx((__int64 *)&qword_140C34AD8, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
