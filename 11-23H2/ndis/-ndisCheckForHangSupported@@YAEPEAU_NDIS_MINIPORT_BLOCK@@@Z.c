/*
 * XREFs of ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0025268
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C0011498 (ndisQueryStatisticsOids.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00251B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCheckForHangSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax

  DriverHandle = a1->DriverHandle;
  if ( a1->MajorNdisVersion >= 6u )
    return DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
        && DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx;
  if ( !DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
    return 0;
  return DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler != 0LL;
}
