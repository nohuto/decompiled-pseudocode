/*
 * XREFs of ndisWdfLogMiniportPowerTransition @ 0x1C00353F0
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C00881F0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C001FEC4 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

void __fastcall ndisWdfLogMiniportPowerTransition(struct _NDIS_MINIPORT_BLOCK *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // r8d
  int v7; // r8d
  enum _NDIS_MINIPORT_EVENT v8; // dx
  int v9; // r8d
  int v10; // r8d

  if ( a2 )
  {
    v3 = a2 - 2;
    if ( !v3 || (v4 = v3 - 1) == 0 || (v5 = v4 - 1) == 0 || (unsigned int)(v5 - 1) <= 1 )
    {
      v6 = a3 - 1;
      if ( !v6 )
      {
        v8 = NdisMEventD0_Sx;
        goto LABEL_16;
      }
      v7 = v6 - 1;
      if ( !v7 || (unsigned int)(v7 - 1) <= 1 )
      {
        v8 = NdisMEventDx_Sx;
LABEL_16:
        ndisLogMiniportEvent(a1, v8);
      }
    }
  }
  else
  {
    v9 = a3 - 1;
    if ( !v9 )
    {
      v8 = NdisMEventD0_S0Idle;
      goto LABEL_16;
    }
    v10 = v9 - 1;
    if ( !v10 || (unsigned int)(v10 - 1) <= 1 )
    {
      v8 = NdisMEventDx_S0Idle;
      goto LABEL_16;
    }
  }
}
