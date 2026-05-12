/*
 * XREFs of StorPortAdapterDirectedPowerUp @ 0x1C004DD30
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x1C004A640 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C004BDC0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004DF00 (StorPortAdapterDirectedPowerUpRequestD0.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerUp(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int v6; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD **)(Context + 4896);
  v4 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5264) )
  {
    if ( (*((_DWORD *)*v3 + 5) & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5184);
      v4[659] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v4 + 1312);
      if ( !v4[657] )
        v4[657] = v4[644];
    }
    v4[658] = 0LL;
  }
  ++*((_DWORD *)v4 + 1310);
  if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
  {
    v6 = *((_DWORD *)v4 + 14);
    McTemplateK0pqtx_EtwWriteTransfer(Context, &EventAdapterDirectedPowerUpStart, a3, **v3, v6);
  }
  *((_DWORD *)*v3 + 5) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v4, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v4);
  return StorPortAdapterDirectedPowerUpRequestD0(v4);
}
