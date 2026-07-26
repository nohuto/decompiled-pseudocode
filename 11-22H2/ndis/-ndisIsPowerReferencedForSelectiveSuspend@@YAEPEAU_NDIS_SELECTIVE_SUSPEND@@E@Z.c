/*
 * XREFs of ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C003F0BA
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003F9B4 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00AE0B8 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF248 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00AF608 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsPowerReferencedForSelectiveSuspend(struct _NDIS_SELECTIVE_SUSPEND *a1, char a2)
{
  if ( a2 )
  {
    if ( !*((_DWORD *)a1 + 128)
      && !*((_DWORD *)a1 + 129)
      && !*((_DWORD *)a1 + 132)
      && !*((_DWORD *)a1 + 133)
      && !*((_DWORD *)a1 + 130)
      && !*((_DWORD *)a1 + 131)
      && !*((_DWORD *)a1 + 144)
      && !*((_DWORD *)a1 + 127)
      || !KeReadStateEvent((PRKEVENT)((char *)a1 + 272)) )
    {
      return 0;
    }
  }
  else if ( (*((_DWORD *)a1 + 126) & 0x14) != 0 )
  {
    return (*((_DWORD *)a1 + 126) & 0x200) != 0;
  }
  return 1;
}
