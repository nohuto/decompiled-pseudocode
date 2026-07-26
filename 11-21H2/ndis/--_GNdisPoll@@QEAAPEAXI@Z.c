/*
 * XREFs of ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1C00C04BC
 * Callers:
 *     NdisDeregisterPoll @ 0x1C00C0510 (NdisDeregisterPoll.c)
 *     NdisRegisterPoll @ 0x1C01349C0 (NdisRegisterPoll.c)
 * Callees:
 *     ??1NdisPoll@@QEAA@XZ @ 0x1C0134CDC (--1NdisPoll@@QEAA@XZ.c)
 */

NdisPoll *__fastcall NdisPoll::`scalar deleting destructor'(NdisPoll *P, char a2)
{
  NdisPoll::~NdisPoll(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x78744345u);
  return P;
}
