/*
 * XREFs of ?ndisCheckForHangSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00261AC
 * Callers:
 *     ndisQueryStatisticsOids @ 0x1C0012470 (ndisQueryStatisticsOids.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00260F4 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisCheckForHangSupported(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  bool v2; // zf

  DriverHandle = a1->DriverHandle;
  if ( a1->MajorNdisVersion < 6u )
  {
    if ( !DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      return 0;
    v2 = DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler == 0LL;
  }
  else
  {
    if ( !DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx )
      return 0;
    v2 = DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx == 0LL;
  }
  return !v2;
}
