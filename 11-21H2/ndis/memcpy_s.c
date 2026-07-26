/*
 * XREFs of memcpy_s @ 0x1C0034580
 * Callers:
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008CA38 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1C008DAFC (-ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x1C008E1AC (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     NdisQueryOffloadState @ 0x1C0013B50 (NdisQueryOffloadState.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

errno_t __cdecl memcpy_s(void *a1, rsize_t DstSize, const void *Src, rsize_t MaxCount)
{
  errno_t v8; // ebx

  if ( !MaxCount )
    return 0;
  if ( !a1 )
    goto LABEL_11;
  if ( Src && DstSize >= MaxCount )
  {
    memmove(a1, Src, MaxCount);
    return 0;
  }
  memset(a1, 0, DstSize);
  if ( Src )
  {
    if ( DstSize >= MaxCount )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  NdisQueryOffloadState(0LL);
  return v8;
}
