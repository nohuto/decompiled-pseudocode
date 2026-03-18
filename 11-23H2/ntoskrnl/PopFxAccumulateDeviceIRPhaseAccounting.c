/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140588A00
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14058A264 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14058C2D4 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C3CB10;
  qword_140C3CB30 += v1;
  if ( v1 > qword_140C3CB20 )
    qword_140C3CB20 = v1;
  if ( v1 < qword_140C3CB28 )
    qword_140C3CB28 = v1;
  ++dword_140C3CB38;
  qword_140C3CB10 = 0LL;
}
