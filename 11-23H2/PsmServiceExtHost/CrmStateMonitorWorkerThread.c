/*
 * XREFs of CrmStateMonitorWorkerThread @ 0x18006E6B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

ULONG __fastcall CrmStateMonitorWorkerThread(void **Parameter)
{
  ULONG v2; // eax
  ULONG result; // eax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF
  ULONG v5; // [rsp+38h] [rbp+10h] BYREF

  Seed = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  do
  {
    v5 = RtlRandom(&Seed) & 1;
    CrmStateMonitorStateSet(Parameter, &v5, 4uLL, 0);
    v2 = RtlRandom(&Seed);
    result = WaitForSingleObject(Parameter[8], v2 % 0x64);
  }
  while ( result );
  return result;
}
