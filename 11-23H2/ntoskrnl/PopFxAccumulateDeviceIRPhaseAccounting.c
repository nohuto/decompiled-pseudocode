/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140588EF0
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14058A754 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C7C4 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C3CA90;
  qword_140C3CAB0 += v1;
  if ( v1 > qword_140C3CAA0 )
    qword_140C3CAA0 = v1;
  if ( v1 < qword_140C3CAA8 )
    qword_140C3CAA8 = v1;
  ++dword_140C3CAB8;
  qword_140C3CA90 = 0LL;
}
