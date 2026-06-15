/*
 * XREFs of ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180149F78
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

double __fastcall CQPCStopWatch::GetTimeSec(CQPCStopWatch *this)
{
  double v1; // xmm1_8

  v1 = 0.0;
  if ( *((_QWORD *)this + 2) )
    return (double)(*((_DWORD *)this + 2) - *(_DWORD *)this) / (double)(int)*((_QWORD *)this + 2);
  return v1;
}
