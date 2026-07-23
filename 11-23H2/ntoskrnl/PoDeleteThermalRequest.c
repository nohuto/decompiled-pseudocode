/*
 * XREFs of PoDeleteThermalRequest @ 0x140982E00
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14032D55C (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1409830C8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
