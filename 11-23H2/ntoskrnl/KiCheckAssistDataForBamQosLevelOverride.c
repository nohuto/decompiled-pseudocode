/*
 * XREFs of KiCheckAssistDataForBamQosLevelOverride @ 0x14056E53C
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056EBDC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckAssistDataForBamQosLevelOverride(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 968);
    if ( v2 )
    {
      result = *(unsigned int *)(v2 + 28);
      if ( *(_QWORD *)(v2 + 28) || (*(_DWORD *)(v2 + 20) & 0x4000) != 0 )
        *a2 = 0;
    }
  }
  return result;
}
