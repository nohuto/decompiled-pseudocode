/*
 * XREFs of ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C0344B60
 * Callers:
 *     ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C005A120 (--1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C0345CC0 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 */

void __fastcall MonitoredFenceHelper::DestroySynchObject(MonitoredFenceHelper *this)
{
  DXGDEVICESYNCOBJECT *v2; // rcx

  v2 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
