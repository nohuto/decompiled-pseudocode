/*
 * XREFs of VidSchiPropagatePresentHistoryToken @ 0x1C001863C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00116E0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C001BBC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 * Callees:
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C0011A30 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011BAC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00187B8 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiPropagatePresentHistoryToken(
        struct _VIDSCH_GLOBAL *a1,
        union _SLIST_HEADER *SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        char a4,
        char a5,
        bool a6,
        bool a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        char a12)
{
  BOOL v12; // ebx
  struct _VIDSCH_GLOBAL *v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  char v22; // si
  struct _SLIST_ENTRY *v23; // rcx
  __int64 v24; // rbp
  struct _SLIST_ENTRY *v25; // rcx
  int v26; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  LOBYTE(v12) = 0;
  v16 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( a10 && *(_QWORD *)(a10 + 560) )
  {
    v17 = *(_QWORD *)(a10 + 560);
    v18 = *(unsigned int *)(a10 + 568);
    v19 = *(_QWORD *)(a10 + 576);
    v20 = *(_QWORD *)(a10 + 584);
    v21 = *(_QWORD *)(a10 + 592);
    v26 = *(_DWORD *)(a10 + 4) >> 5;
  }
  else
  {
    if ( !a11 || !*a11 )
      goto LABEL_4;
    v18 = *((unsigned int *)a11 + 2);
    v17 = *a11;
    v19 = a11[2];
    v20 = a11[3];
    v21 = a11[4];
    LOBYTE(v26) = *((_BYTE *)a11 + 40);
  }
  v22 = v26 & 1;
LABEL_4:
  if ( a4 && !a12
    || !v17
    || (((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, char))DxgCoreInterface[72])(
          v17,
          v18,
          v19,
          v20,
          v21,
          v22),
        v22) )
  {
    if ( a8 )
    {
      v24 = *(_QWORD *)(a9 + 200);
      if ( v24 )
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a8 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v24 + 12));
        v25 = *(struct _SLIST_ENTRY **)(a8 + 8);
        if ( v25 )
          CRefCountedBuffer::RefCountedBufferRelease(v25);
        *(_QWORD *)(a8 + 8) = v24;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v16 = a1;
    }
    if ( a10 )
    {
      VidSchiReleasePrivateDataReference(v16, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(a10 + 600));
      v23 = *(struct _SLIST_ENTRY **)(a10 + 32);
      if ( v23 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v23);
        *(_QWORD *)(a10 + 32) = 0LL;
      }
      v12 = *(_DWORD *)(a10 + 4) & 1;
    }
    DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(&SpinLock->Alignment, a3, a4, a5, a6, a7, v12);
  }
  else if ( (*(_DWORD *)(a10 + 4) & 0x10) != 0 )
  {
    ExpInterlockedPushEntrySList(SpinLock + 3, (PSLIST_ENTRY)(&a3[-1].Token.SurfaceComplete + 131));
  }
}
