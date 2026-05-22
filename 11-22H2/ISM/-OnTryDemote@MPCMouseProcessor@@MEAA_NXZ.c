/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x1801F4C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  bool result; // al
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart - *((_QWORD *)this + 666) <= *((_QWORD *)this + 678) )
    return 0;
  *((_DWORD *)this + 1339) = 0;
  result = 1;
  *((_DWORD *)this + 1318) = 0;
  return result;
}
