/*
 * XREFs of ExpAeStopMeasurement @ 0x140326C34
 * Callers:
 *     ExfReleasePushLockSharedEx @ 0x140326B68 (ExfReleasePushLockSharedEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExpAeStopMeasurement(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax

  result = __rdtsc();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 340LL) == *(_DWORD *)(a1 + 8) )
  {
    result -= *(_QWORD *)a1;
    *a2 = result;
  }
  return result;
}
