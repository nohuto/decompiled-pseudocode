/*
 * XREFs of InitEnergyCountersMsr @ 0x1C0026354
 * Callers:
 *     InitEnergyCounters @ 0x1C00261A0 (InitEnergyCounters.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall InitEnergyCountersMsr(
        int a1))(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  void (__fastcall *result)(int, __int64, __int64, __int64, unsigned __int64 *); // rax

  if ( !a1 )
  {
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type &= ~0x40u;
    result = ComputeProcessorEnergyMsr;
    qword_1C001F7D0[0] = 0LL;
    qword_1C001F7C8[0] = (__int64)ComputeProcessorEnergyMsr;
  }
  return result;
}
