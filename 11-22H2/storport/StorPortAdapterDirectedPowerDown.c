/*
 * XREFs of StorPortAdapterDirectedPowerDown @ 0x1C004D9D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x1C004A5A8 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C004BDC0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1C004DB00 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerDown(_DWORD *Context, __int64 a2, __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    v5 = Context[14];
    McTemplateK0pqtq_EtwWriteTransfer(
      (__int64)Context,
      &EventAdapterDirectedPowerDownStart,
      a3,
      **((_QWORD **)Context + 612),
      v5);
  }
  *(_DWORD *)(*((_QWORD *)Context + 612) + 20LL) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)Context);
  return StorPortAdapterDirectedPowerDownRequestD3(Context);
}
