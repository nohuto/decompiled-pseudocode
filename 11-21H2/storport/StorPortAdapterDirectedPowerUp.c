/*
 * XREFs of StorPortAdapterDirectedPowerUp @ 0x1C004A9D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x1C0047838 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0048D60 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004ABA4 (StorPortAdapterDirectedPowerUpRequestD0.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerUp(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5200) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 4832) + 20LL) & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5120);
      v3[651] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1296);
      if ( !v3[649] )
        v3[649] = v3[636];
    }
    v3[650] = 0LL;
  }
  ++*((_DWORD *)v3 + 1294);
  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
  {
    v5 = *((_DWORD *)v3 + 14);
    McTemplateK0pqtx_EtwWriteTransfer(Context, &EventAdapterDirectedPowerUpStart, a3, *(_QWORD *)v3[604], v5);
  }
  *(_DWORD *)(v3[604] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v3);
  return StorPortAdapterDirectedPowerUpRequestD0(v3);
}
