/*
 * XREFs of IsScsiPassThroughEx @ 0x1C001E51C
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C001E46C (PortpCompleteRequestIrp.c)
 *     RaidAdapterPassThrough @ 0x1C00A1BB8 (RaidAdapterPassThrough.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C00A1CCC (RaUnitScsiPassThroughIoctl.c)
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsScsiPassThroughEx(__int64 a1)
{
  int v1; // ecx

  v1 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  return v1 == 315460 || v1 == 315464;
}
