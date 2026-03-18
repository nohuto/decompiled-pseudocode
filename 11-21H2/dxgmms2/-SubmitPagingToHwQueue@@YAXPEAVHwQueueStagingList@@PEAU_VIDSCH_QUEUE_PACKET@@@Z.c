/*
 * XREFs of ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C003E344
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001F222 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0018990 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001E908 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003ED78 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0040738 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x1C0041778 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 */

void __fastcall SubmitPagingToHwQueue(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // r8d
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // r9
  _DWORD *v16; // rbx
  __int128 v17; // xmm1
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h]
  __int128 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+70h] [rbp-10h]

  v2 = *((_QWORD *)a2 + 12);
  v5 = *(_QWORD *)(v2 + 40);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v6 + 24);
  ++*(_DWORD *)(v2 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( (*(_BYTE *)(v8 + 3036) & 1) != 0
    || *(_DWORD *)(v8 + 3012)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0) )
  {
    VidSchiSimulateProgressFenceCompletion(a1, a2, (struct VIDSCH_HW_QUEUE *)v2);
    VidSchiCompleteHwQueuePacket(a1, a2, 0);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v6);
    if ( !*(_BYTE *)(344LL * *(unsigned __int16 *)(v6 + 6)
                   + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL) + 2680LL)
                   + 48) )
    {
      WdLogSingleEntry5(0LL, 281LL, 24576LL, 0LL, 0LL, 0LL);
      __debugbreak();
    }
    v9 = *((_QWORD *)a2 + 35);
    *((_QWORD *)&v20 + 1) = 0LL;
    *(_QWORD *)&v18 = *(_QWORD *)(v2 + 112);
    *((_QWORD *)&v18 + 1) = *((_QWORD *)a2 + 36);
    v21 = *(_OWORD *)((char *)a2 + 296);
    *(_QWORD *)&v19 = *(_QWORD *)(v9 + 96) + *((unsigned int *)a2 + 81);
    DWORD2(v19) = *((_DWORD *)a2 + 82);
    v10 = *(_QWORD *)(v9 + 128) + *((unsigned int *)a2 + 83);
    *((_QWORD *)&v20 + 1) = 1LL;
    *(_QWORD *)&v20 = v10;
    HIDWORD(v19) = *((_DWORD *)a2 + 84);
    v11 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[54])(*(_QWORD *)(v8 + 8), &v18);
    v13 = v11;
    if ( (byte_1C006E941 & 1) != 0 )
    {
      v14 = *((_QWORD *)a2 + 12);
      v15 = *(_QWORD *)(v14 + 48);
      if ( !v15 )
        LODWORD(v15) = *((_QWORD *)a2 + 12);
      McTemplateK0pxpqq_EtwWriteTransfer(
        v14,
        *(_DWORD *)(v7 + 1576),
        v12,
        v15,
        SBYTE8(v18),
        v19,
        v11,
        *(_DWORD *)(v7 + 1576));
    }
    v16 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 112LL * *(unsigned int *)(v6 + 196));
    memset(v16, 0, 0x70uLL);
    *(_DWORD *)(v6 + 196) = (*(_DWORD *)(v6 + 196) + 1) & (*(_DWORD *)(v6 + 192) - 1);
    *v16 = 8;
    *((_QWORD *)v16 + 10) = *((_QWORD *)a2 + 36);
    v16[22] = 0;
    *((_OWORD *)v16 + 1) = v18;
    *((_OWORD *)v16 + 2) = v19;
    *((_OWORD *)v16 + 3) = v20;
    v17 = v21;
    v16[23] = v13;
    *((_OWORD *)v16 + 4) = v17;
    if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}
