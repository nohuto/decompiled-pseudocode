/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C00152F0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C0015344 (StorPortAdapterPowerNotRequiredStep2.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x1C00477A0 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, __int64 a2, int a3)
{
  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    McTemplateK0pqtq_EtwWriteTransfer(
      (_DWORD)Context,
      (unsigned int)&EventAdapterPowerNotRequiredStart,
      a3,
      *Context[604],
      *((_DWORD *)Context + 14));
  *((_DWORD *)Context[604] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
