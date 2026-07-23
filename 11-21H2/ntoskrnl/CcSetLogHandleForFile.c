/*
 * XREFs of CcSetLogHandleForFile @ 0x14053AD40
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  char *SharedCacheMap; // rbx
  _QWORD *v6; // rdi
  bool v7; // zf
  char **v8; // rdx
  PVOID *v9; // rcx
  char **v10; // rdx
  PVOID *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  _QWORD *v22; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x27BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x281uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (_QWORD *)*((_QWORD *)SharedCacheMap + 66);
  KeAcquireInStackQueuedSpinLock(v6 + 88, &LockHandle);
  v7 = *((_QWORD *)SharedCacheMap + 30) == 0LL;
  *((_QWORD *)SharedCacheMap + 31) = FlushToLsnRoutine;
  if ( !v7 )
  {
    v8 = (char **)*((_QWORD *)SharedCacheMap + 15);
    v9 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( v8[1] != SharedCacheMap + 120 || *v9 != SharedCacheMap + 120 )
      goto LABEL_28;
    v7 = byte_140C54C58 == 1;
    *v9 = v8;
    v8[1] = (char *)v9;
    if ( v7 )
    {
      v10 = (char **)*((_QWORD *)SharedCacheMap + 72);
      v11 = (PVOID *)*((_QWORD *)SharedCacheMap + 73);
      if ( v10[1] != SharedCacheMap + 576 || *v11 != SharedCacheMap + 576 )
        goto LABEL_28;
      *v11 = v10;
      v10[1] = (char *)v11;
    }
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v12 = SharedCacheMap + 120;
    if ( !*((_DWORD *)SharedCacheMap + 28) )
    {
      v22 = (_QWORD *)v6[77];
      if ( (_QWORD *)*v22 != v6 + 76 )
        goto LABEL_28;
      v7 = byte_140C54C58 == 1;
      *v12 = v6 + 76;
      *((_QWORD *)SharedCacheMap + 16) = v22;
      *v22 = v12;
      v6[77] = v12;
      if ( !v7 )
        goto LABEL_17;
      v14 = *((_QWORD *)SharedCacheMap + 74) + 624LL;
      goto LABEL_15;
    }
    v13 = (_QWORD *)v6[85];
    if ( (_QWORD *)*v13 != v6 + 84 )
      goto LABEL_28;
    v7 = byte_140C54C58 == 1;
    *v12 = v6 + 84;
    *((_QWORD *)SharedCacheMap + 16) = v13;
    *v13 = v12;
    v6[85] = v12;
    if ( v7 )
    {
      v14 = *((_QWORD *)SharedCacheMap + 74) + 688LL;
LABEL_15:
      v15 = *(__int64 ***)(v14 + 8);
      v16 = (__int64 *)(SharedCacheMap + 576);
      if ( *v15 == (__int64 *)v14 )
      {
        *v16 = v14;
        *((_QWORD *)SharedCacheMap + 73) = v15;
        *v15 = v16;
        *(_QWORD *)(v14 + 8) = v16;
        goto LABEL_17;
      }
LABEL_28:
      __fastfail(3u);
    }
  }
LABEL_17:
  *((_QWORD *)SharedCacheMap + 30) = LogHandle;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
}
