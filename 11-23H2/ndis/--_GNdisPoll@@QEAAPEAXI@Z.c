/*
 * XREFs of ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1C00C50C8
 * Callers:
 *     NdisDeregisterPoll @ 0x1C00C5110 (NdisDeregisterPoll.c)
 *     NdisRegisterPoll @ 0x1C0140710 (NdisRegisterPoll.c)
 * Callees:
 *     ??1NdisPoll@@QEAA@XZ @ 0x1C0140A74 (--1NdisPoll@@QEAA@XZ.c)
 */

NdisPoll *__fastcall NdisPoll::`scalar deleting destructor'(NdisPoll *P, char a2)
{
  NdisPoll::~NdisPoll(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x78744345u);
  return P;
}
