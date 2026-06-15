/*
 * XREFs of ??0DurationTracker@CAudioDeviceGraph@@QEAA@XZ @ 0x1400040D8
 * Callers:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x1400045A8 (--0CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CAudioDeviceGraph::DurationTracker *__fastcall CAudioDeviceGraph::DurationTracker::DurationTracker(
        CAudioDeviceGraph::DurationTracker *this)
{
  LARGE_INTEGER *v2; // rcx

  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v2 = (LARGE_INTEGER *)((char *)this + 8);
  v2->QuadPart = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  QueryPerformanceFrequency(v2);
  return this;
}
