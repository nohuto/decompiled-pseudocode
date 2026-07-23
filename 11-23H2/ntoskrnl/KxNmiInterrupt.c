/*
 * XREFs of KxNmiInterrupt @ 0x14042CE00
 * Callers:
 *     KiNmiInterruptStart @ 0x14042C980 (KiNmiInterruptStart.c)
 * Callees:
 *     KiSaveProcessorState @ 0x14020E550 (KiSaveProcessorState.c)
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 */

__int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, (__int64)v2);
  return KiProcessNMI(v0 - 128, v2);
}
