/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C001E3A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C001E438 (StorPortAdapterPowerRequiredStep2.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x1C00349D4 (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x1C0047838 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5120) )
  {
    a2 = *(unsigned int *)(*(_QWORD *)(Context + 4832) + 20LL);
    if ( (a2 & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5120);
      a2 = Context / 0x2710;
      v3[641] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1296);
      if ( !v3[639] )
        v3[639] = v3[636];
    }
    v3[640] = 0LL;
  }
  ++*((_DWORD *)v3 + 1294);
  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    McTemplateK0pqtx_EtwWriteTransfer(
      Context,
      (unsigned int)&EventAdapterPowerRequiredStart,
      a3,
      *(_QWORD *)v3[604],
      *((_DWORD *)v3 + 14));
  if ( *((_DWORD *)v3 + 210) > 1u )
  {
    LOBYTE(a2) = 1;
    RaidAdapterEnableIoResourceAutoReclaim(v3, a2);
  }
  *(_DWORD *)(v3[604] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
  {
    LOBYTE(v4) = 1;
    RaidAdapterSendPoFxPowerRequiredToMiniport(v3, v4);
  }
  return StorPortAdapterPowerRequiredStep2(v3);
}
