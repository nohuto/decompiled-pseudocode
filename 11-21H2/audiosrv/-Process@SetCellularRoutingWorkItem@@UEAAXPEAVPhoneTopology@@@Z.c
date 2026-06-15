/*
 * XREFs of ?Process@SetCellularRoutingWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x18015F4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetCellularRoutingWorkItem::Process(SetCellularRoutingWorkItem *this, struct PhoneTopology *a2)
{
  PhoneTopology::DoSetCellularRouting(a2, (SetCellularRoutingWorkItem *)((char *)this + 24));
}
