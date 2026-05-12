/*
 * XREFs of StorPortAdapterDirectedPowerDown @ 0x1C004A660
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x1C00477A0 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C004A790 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerDown(__int64 Context, __int64 a2, int a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
  {
    v5 = *(_DWORD *)(Context + 56);
    McTemplateK0pqtq_EtwWriteTransfer(
      Context,
      &EventAdapterDirectedPowerDownStart,
      a3,
      **(_QWORD **)(Context + 4832),
      v5);
  }
  *(_DWORD *)(*(_QWORD *)(Context + 4832) + 20LL) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported(Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context);
  return StorPortAdapterDirectedPowerDownRequestD3((PVOID)Context);
}
