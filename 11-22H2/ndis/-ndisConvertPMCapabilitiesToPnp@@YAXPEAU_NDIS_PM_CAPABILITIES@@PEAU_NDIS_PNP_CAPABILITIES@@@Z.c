/*
 * XREFs of ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C01176C8
 * Callers:
 *     ?ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024A88 (-ndisUpdatePMCurrentCapabilities@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPMCapabilitiesToPnp(struct _NDIS_PM_CAPABILITIES *a1, struct _NDIS_PNP_CAPABILITIES *a2)
{
  _NDIS_DEVICE_POWER_STATE MinLinkChangeWakeUp; // eax
  unsigned int v4; // ecx

  *a2 = 0LL;
  a2->WakeUpCapabilities.MinMagicPacketWakeUp = a1->MinMagicPacketWakeUp;
  a2->WakeUpCapabilities.MinPatternWakeUp = a1->MinPatternWakeUp;
  MinLinkChangeWakeUp = a1->MinLinkChangeWakeUp;
  v4 = 0;
  a2->Flags = 0;
  a2->WakeUpCapabilities.MinLinkChangeWakeUp = MinLinkChangeWakeUp;
  if ( (a1->SupportedWoLPacketPatterns & 2) != 0 )
  {
    v4 = 4;
    a2->Flags = 4;
  }
  if ( (a1->SupportedWoLPacketPatterns & 1) != 0 )
  {
    v4 |= 2u;
    a2->Flags = v4;
  }
  if ( v4 )
    a2->Flags = v4 | 1;
}
