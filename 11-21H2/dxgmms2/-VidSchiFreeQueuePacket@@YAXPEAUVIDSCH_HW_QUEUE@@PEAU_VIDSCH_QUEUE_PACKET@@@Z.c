/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EC80
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EAF0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0041830 (VidSchCreateHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0041CD0 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C00426F0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C007B880 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C001F8EC (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 */

void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  WdLogSingleEntry2(4LL, a2, a1);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  v5 = (KSPIN_LOCK *)(v4 + 1736);
  *((_DWORD *)a2 + 13) = 0;
  VidSchiInterlockedRemoveEntryList(v5, (_QWORD *)a2 + 1, (_DWORD *)a1 + 64);
  VidSchiInterlockedInsertTailList(v5, (__int64)a1 + 216, (_QWORD *)a2 + 1, (_DWORD *)a1 + 58);
  while ( 1 )
  {
    v6 = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v5, (char *)a1 + 216, (char *)a1 + 232);
    if ( !v6 )
      break;
    ExFreePoolWithTag((PVOID)(v6 - 8), 0);
  }
}
