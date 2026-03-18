/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CC9C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007CC0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CB0C (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0043F00 (VidSchCreateHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C00443B0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044820 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0044E00 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0085AA0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00045B8 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C000463C (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071C0 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rdi
  _QWORD *v6; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  WdLogSingleEntry2(4LL, a2, a1);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  v5 = (KSPIN_LOCK *)(v4 + 1736);
  *((_DWORD *)a2 + 13) = 0;
  VidSchiInterlockedRemoveEntryList(v5, (_QWORD *)a2 + 1, (_DWORD *)a1 + 64);
  VidSchiInterlockedInsertTailList(v5, (__int64)a1 + 216, (_QWORD *)a2 + 1, (_DWORD *)a1 + 58);
  while ( 1 )
  {
    v6 = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v5, (_QWORD **)a1 + 27, (_DWORD *)a1 + 58);
    if ( !v6 )
      break;
    ExFreePoolWithTag(v6 - 1, 0);
  }
}
