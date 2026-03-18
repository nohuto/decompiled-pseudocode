/*
 * XREFs of ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@PEAUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x1C0016424
 * Callers:
 *     NtDCompositionGetFrameStatistics @ 0x1C00162B0 (NtDCompositionGetFrameStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::GetFrameStatistics(
        DirectComposition::CConnection *this,
        union _LARGE_INTEGER *a2,
        struct COMPOSITION_CAPABILITY_INFO *a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v7; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)this + 21);
  do
  {
    v7 = v3;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a2->QuadPart = v3;
    v9 = -1LL;
    a2[1].LowPart = DirectComposition::CConnection::s_qpcFrequency.LowPart;
    a2[1].HighPart = *((_DWORD *)this + 44);
    a2[2] = PerformanceCounter;
    a2[3] = DirectComposition::CConnection::s_qpcFrequency;
    v10 = *((_QWORD *)this + 22);
    if ( PerformanceCounter.QuadPart >= v3 )
      v9 = (PerformanceCounter.QuadPart - v3) / v10;
    a2[4].QuadPart = v3 + v10 * (v9 + 2);
    v3 = *((_QWORD *)this + 21);
  }
  while ( v7 != v3 );
  result = 0LL;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 312);
  return result;
}
