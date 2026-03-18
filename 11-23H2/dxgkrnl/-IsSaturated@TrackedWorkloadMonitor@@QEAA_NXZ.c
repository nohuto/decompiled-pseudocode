/*
 * XREFs of ?IsSaturated@TrackedWorkloadMonitor@@QEAA_NXZ @ 0x1C0089228
 * Callers:
 *     ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C035E2F4 (-GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKED.c)
 * Callees:
 *     <none>
 */

bool __fastcall TrackedWorkloadMonitor::IsSaturated(TrackedWorkloadMonitor *this)
{
  return *((_BYTE *)this + 40 * *((unsigned int *)this + 56) + 61);
}
