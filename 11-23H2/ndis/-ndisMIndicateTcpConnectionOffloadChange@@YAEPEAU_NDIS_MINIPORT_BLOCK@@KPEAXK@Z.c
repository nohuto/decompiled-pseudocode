/*
 * XREFs of ?ndisMIndicateTcpConnectionOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x1C00919C0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001E1D0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

char __fastcall ndisMIndicateTcpConnectionOffloadChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        _DWORD *a3,
        unsigned int a4)
{
  char v5; // bl
  _NDIS_MINIPORT_OFFLOAD *Offload; // r8
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Offload = a1->Offload;
  if ( Offload )
  {
    if ( a2 == 1073872899 )
    {
      if ( a4 >= 0x14 && *(_BYTE *)a3 == 0x80 && *((_WORD *)a3 + 1) >= 0x14u )
      {
        v5 = 1;
        if ( *((_BYTE *)a3 + 1) )
        {
          *(_OWORD *)&Offload->MiniportTcpConnectionOffloadCurrentConfig.Header.Type = *(_OWORD *)a3;
          Offload->MiniportTcpConnectionOffloadCurrentConfig.Flags = a3[4];
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( a2 != 1073872907 )
        goto LABEL_15;
      if ( a4 >= 0x14 && *(_BYTE *)a3 == 0x80 && *((_WORD *)a3 + 1) >= 0x14u )
      {
        v5 = 1;
        if ( *((_BYTE *)a3 + 1) )
        {
          *(_OWORD *)&Offload->MiniportHwTcpConnectionOffloadCapabilities.Header.Type = *(_OWORD *)a3;
          Offload->MiniportHwTcpConnectionOffloadCapabilities.Flags = a3[4];
          goto LABEL_15;
        }
      }
    }
    v5 = 0;
  }
LABEL_15:
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  return v5;
}
