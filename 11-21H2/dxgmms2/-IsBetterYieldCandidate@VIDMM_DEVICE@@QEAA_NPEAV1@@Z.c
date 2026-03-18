/*
 * XREFs of ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C00DD7F8
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00ABE70 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C00DEC18 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_DEVICE::IsBetterYieldCandidate(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  __int64 v5; // rbx
  ULONG TimeIncrement; // eax

  if ( !a2 )
    return 1;
  v5 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  return *((_QWORD *)this + 29) - v5 * TimeIncrement < *((_QWORD *)a2 + 29) - v5 * TimeIncrement;
}
