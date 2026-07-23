/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x14021DB04
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x14021DAC0 (MmGetWorkingSetLeafSize.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1403623A0 (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C673C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  if ( *(_BYTE *)(v0 + 17052) )
    return v0 + 17344;
  else
    return 0LL;
}
