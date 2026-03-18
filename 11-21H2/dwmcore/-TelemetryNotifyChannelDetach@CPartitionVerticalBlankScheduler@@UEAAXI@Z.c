/*
 * XREFs of ?TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z @ 0x1800F3160
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180074C18 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryNotifyChannelDetach(
        CPartitionVerticalBlankScheduler *this,
        int a2)
{
  CAnimationTracking *v2; // rdi
  __int64 v3; // rbx

  v2 = (CPartitionVerticalBlankScheduler *)((char *)this + 4864);
  v3 = 0LL;
  if ( *((_DWORD *)this + 1222) )
  {
    do
    {
      if ( **(_DWORD **)(*(_QWORD *)v2 + 8 * v3) == a2 )
        CAnimationTracking::DeleteScenario(v2, v3);
      else
        v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)v2 + 6) );
  }
}
