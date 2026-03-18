/*
 * XREFs of MiInitializeDynamicVa @ 0x140B6F0BC
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     MiCountBootDriverRegions @ 0x140B6F12C (MiCountBootDriverRegions.c)
 *     MiAssignSessionRanges @ 0x140B6F1D0 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_140C67090.Header.Size = 6;
  qword_140C670A8 = 0LL;
  LOWORD(stru_140C67090.Header.Lock) = 0;
  stru_140C67090.Header.SignalState = 0;
  stru_140C67090.Header.WaitListHead.Blink = &stru_140C67090.Header.WaitListHead;
  stru_140C67090.Header.WaitListHead.Flink = &stru_140C67090.Header.WaitListHead;
  MiAssignSessionRanges();
  qword_140C6A3A8 = MiCountBootDriverRegions();
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
