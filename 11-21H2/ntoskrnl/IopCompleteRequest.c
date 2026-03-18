/*
 * XREFs of IopCompleteRequest @ 0x140347E10
 * Callers:
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IopCompleteIrpInFileObjectList @ 0x1403117B0 (IopCompleteIrpInFileObjectList.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     IopAbortRequest @ 0x140933A70 (IopAbortRequest.c)
 * Callees:
 *     IopSkipCompletionPort @ 0x14023EE1C (IopSkipCompletionPort.c)
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     IopDequeueIrpFromFileObject @ 0x1403476D0 (IopDequeueIrpFromFileObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     IopUpdateIrpTransferCount @ 0x1403488C0 (IopUpdateIrpTransferCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     IopDequeueIrpFromThread @ 0x1403489B0 (IopDequeueIrpFromThread.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1404178E8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1404179B0 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopProcessBufferedIoCompletion @ 0x140417AE0 (IopProcessBufferedIoCompletion.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopDecrementIrpRefCount @ 0x1405566A4 (IopDecrementIrpRefCount.c)
 *     FeatureServicing_40851744_EnableKey @ 0x14065863C (FeatureServicing_40851744_EnableKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopCompleteRequest(__int64 a1, __int64 a2, _QWORD *a3, ULONG_PTR *a4, _QWORD *a5)
{
  IRP *v6; // r14
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v8; // rsi
  unsigned int *v9; // r12
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // r15d
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  struct _MDL *v15; // rcx
  struct _MDL *v16; // rbx
  void *v17; // rcx
  __int64 v18; // rcx
  struct _KEVENT *v19; // rcx
  IRP *v20; // rcx
  void *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r13
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // ecx
  IRP *v31; // rcx
  int v32; // eax
  struct _MDL *v33; // rcx
  struct _MDL *Next; // rbx
  struct _KEVENT *v35; // rcx
  void *v36; // rcx
  void *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct _KEVENT *v40; // rcx
  int v41; // ecx
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // r8d
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // ecx
  IRP *v49; // rcx
  struct _KTHREAD *v50; // [rsp+48h] [rbp-80h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  char v52; // [rsp+E0h] [rbp+18h]

  v6 = (IRP *)(a1 - 120);
  CurrentThread = KeGetCurrentThread();
  v50 = CurrentThread;
  v8 = *a4;
  if ( !a3 || (v52 = 1, *a3 != 1LL) )
    v52 = 0;
  v9 = (unsigned int *)(a1 - 104);
  v10 = *(_DWORD *)(a1 - 104);
  if ( (v10 & 0x80u) != 0 )
  {
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
    *(_QWORD *)(a1 + 40) = *a5;
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    return;
  }
  v11 = EnableFeatureServicing_40851744;
  if ( EnableFeatureServicing_40851744 != 1 )
  {
    if ( !EnableFeatureServicing_40851744 )
    {
      v12 = 0;
      v11 = 0;
      goto LABEL_11;
    }
    v11 = (unsigned __int8)FeatureServicing_40851744_EnableKey((unsigned int)EnableFeatureServicing_40851744, a2, a3);
    v10 = *v9;
  }
  v12 = 0;
LABEL_11:
  if ( !v11 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        v32 = *(_DWORD *)(a1 - 72);
        if ( v32 != -2147483626 && (v32 & 0xC0000000) != 0xC0000000 )
          memmove(*(void **)(a1 - 8), *(const void **)(a1 - 96), *(_QWORD *)(a1 - 64));
      }
      v10 = *v9;
      if ( (*v9 & 0x20) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 - 96), 0);
        v10 = *v9;
      }
    }
    *v9 = v10 & 0xFFFFFFCF;
    v33 = *(struct _MDL **)(a1 - 112);
    if ( v33 )
    {
      do
      {
        Next = v33->Next;
        IoFreeMdl(v33);
        v33 = Next;
      }
      while ( Next );
    }
    *(_QWORD *)(a1 - 112) = 0LL;
    v14 = *(unsigned int *)(a1 - 72);
    if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000 )
    {
      if ( !*(_BYTE *)(a1 - 55) )
        goto LABEL_101;
      if ( (*v9 & 4) != 0 || v8 && (*(_DWORD *)(v8 + 80) & 2) != 0 )
      {
        if ( !v8 )
          goto LABEL_101;
        if ( (*v9 & 4) != 0 )
        {
          *(_OWORD *)*(_QWORD *)(a1 - 48) = *(_OWORD *)(a1 - 72);
          v35 = *(struct _KEVENT **)(a1 - 40);
          if ( v35 )
          {
LABEL_100:
            KeSetEvent(v35, 0, 0);
LABEL_101:
            if ( (*v9 & 0x2000) != 0 )
              IopDequeueIrpFromFileObject((__int64)v6, v8);
            if ( v8 )
              ObDereferenceObjectDeferDelete((PVOID)v8);
            v36 = *(void **)(a1 - 40);
            if ( v36 && v8 && (*v9 & 4) == 0 )
              ObfDereferenceObject(v36);
            v20 = v6;
            if ( (*v9 & 0x8000) == 0 )
              goto LABEL_48;
LABEL_110:
            if ( !(unsigned int)IopDecrementIrpRefCount(v20) )
              IoFreeIrp(v6);
            return;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 56) = v14;
        }
        v35 = (struct _KEVENT *)(v8 + 152);
        goto LABEL_100;
      }
    }
    v37 = 0LL;
    v51 = 0LL;
    if ( v8 )
    {
      v38 = *(_QWORD *)(v8 + 176);
      if ( v38 )
      {
        if ( (*v9 & 0x2000) != 0 )
        {
          v37 = *(void **)v38;
          v51 = *(_QWORD *)(v38 + 8);
        }
        else
        {
          IopIncrementCompletionContextUsageCountAndReadData(v8);
          v37 = 0LL;
        }
        if ( v37 )
          ObfReferenceObject(v37);
      }
    }
    v39 = *(_QWORD *)(a1 - 48);
    if ( (*(_BYTE *)(a1 - 49) & 0x10) != 0 )
      *(_DWORD *)(v39 + 4) = *(_DWORD *)(a1 - 64);
    else
      *(_QWORD *)(v39 + 8) = *(_QWORD *)(a1 - 64);
    *(_DWORD *)v39 = *(_DWORD *)(a1 - 72);
    v40 = *(struct _KEVENT **)(a1 - 40);
    if ( v40 )
    {
      KeSetEvent(v40, 0, 0);
      if ( !v8 )
        goto LABEL_133;
      v41 = *(_DWORD *)(a1 - 104);
      if ( (v41 & 4) == 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a1 - 40));
        v41 = *(_DWORD *)(a1 - 104);
      }
      if ( (*(_DWORD *)(v8 + 80) & 2) == 0 || (v41 & 0x1000) != 0 )
      {
LABEL_133:
        if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
          v42 = *(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL;
        else
          v42 = 0LL;
        IopUpdateIrpTransferCount(v6, v42);
        if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
        {
          IopDequeueIrpFromFileObject((__int64)v6, v8);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = CurrentThread;
          IopDequeueIrpFromThread(v6, v43, v44);
        }
        v45 = *(_DWORD *)(a1 - 104) & 0x8000;
        if ( v45 || (*(_QWORD *)(a1 - 32) &= ~1uLL, (v46 = *(_QWORD *)(a1 - 32)) == 0) )
        {
          if ( v37 && *(_QWORD *)(a1 - 24) && !(unsigned int)IopSkipCompletionPort(v8, (__int64)v6) )
          {
            *(_QWORD *)a1 = v51;
            *(_DWORD *)(a1 + 64) = 0;
            if ( v8 )
            {
              v48 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
              if ( v48 == 8 || v48 == 20 )
                v12 = 1;
            }
            KeInsertQueueEx((__int64)v37, (_QWORD *)(a1 + 48), v12, 0LL);
            goto LABEL_157;
          }
          v49 = v6;
          if ( v45 )
          {
            if ( (unsigned int)IopDecrementIrpRefCount(v6) )
              goto LABEL_157;
            v49 = v6;
          }
          IoFreeIrp(v49);
        }
        else
        {
          if ( v52 )
            v47 = *(char *)(a1 - 50);
          else
            v47 = 2;
          KeInitializeApc(
            a1,
            (__int64)CurrentThread,
            v47,
            (__int64)IopUserRundown,
            (__int64)IopUserRundown,
            v46,
            *(_BYTE *)(a1 - 56),
            *(_QWORD *)(a1 - 24));
          KeInsertQueueApc(a1, *(_QWORD *)(a1 - 48), 0LL, 2);
        }
LABEL_157:
        if ( v37 )
          ObfDereferenceObject(v37);
        goto LABEL_159;
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_133;
      if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
        goto LABEL_132;
    }
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
LABEL_132:
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
    goto LABEL_133;
  }
  if ( (v10 & 0x2000) != 0 )
    v13 = *(_QWORD *)(a1 - 32) & 0xFFFFFFFFFFFFFFF9uLL;
  else
    v13 = 0LL;
  IopProcessBufferedIoCompletion(v6);
  v15 = *(struct _MDL **)(a1 - 112);
  if ( v15 )
  {
    do
    {
      v16 = v15->Next;
      IoFreeMdl(v15);
      v15 = v16;
    }
    while ( v16 );
  }
  *(_QWORD *)(a1 - 112) = 0LL;
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000 && !*(_BYTE *)(a1 - 55) )
  {
    v17 = *(void **)(a1 - 40);
    if ( v17 && v8 && (*v9 & 4) == 0 )
      ObfDereferenceObject(v17);
    goto LABEL_37;
  }
  v18 = *(_QWORD *)(a1 - 48);
  if ( (*(_BYTE *)(a1 - 49) & 0x10) != 0 )
    *(_DWORD *)(v18 + 4) = *(_DWORD *)(a1 - 64);
  else
    *(_QWORD *)(v18 + 8) = *(_QWORD *)(a1 - 64);
  *(_DWORD *)v18 = *(_DWORD *)(a1 - 72);
  v19 = *(struct _KEVENT **)(a1 - 40);
  if ( !v19 )
  {
    if ( !v8 )
      goto LABEL_37;
    if ( (*(_DWORD *)(v8 + 80) & 0x4000000) != 0 )
    {
LABEL_36:
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(a1 - 72);
      goto LABEL_37;
    }
LABEL_35:
    KeSetEvent((PRKEVENT)(v8 + 152), 0, 0);
    goto LABEL_36;
  }
  KeSetEvent(v19, 0, 0);
  if ( v8 )
  {
    if ( (*(_DWORD *)(a1 - 104) & 4) == 0 )
      ObfDereferenceObject(*(PVOID *)(a1 - 40));
    if ( (*(_DWORD *)(v8 + 80) & 2) != 0 && (*(_DWORD *)(a1 - 104) & 0x1000) == 0 )
      goto LABEL_35;
  }
LABEL_37:
  if ( (*(_DWORD *)(a1 - 72) & 0xC0000000) == 0xC0000000
    && (!*(_BYTE *)(a1 - 55) || (*(_DWORD *)(a1 - 104) & 4) != 0 || v8 && (*(_DWORD *)(v8 + 80) & 2) != 0) )
  {
    if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
      IopDequeueIrpFromFileObject((__int64)v6, v8);
    if ( v8 )
      ObDereferenceObjectDeferDelete((PVOID)v8);
    v20 = v6;
    if ( (*(_DWORD *)(a1 - 104) & 0x8000) == 0 )
    {
      CurrentThread = v50;
LABEL_48:
      *(_QWORD *)(a1 + 32) = CurrentThread;
      IopDequeueIrpFromThread(v20, v14, a3);
      IoFreeIrp(v6);
      return;
    }
    goto LABEL_110;
  }
  v21 = 0LL;
  v22 = 0LL;
  if ( v8 )
  {
    v23 = *(_QWORD *)(v8 + 176);
    if ( v23 )
    {
      if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
      {
        v21 = *(void **)v23;
        v22 = *(_QWORD *)(v23 + 8);
      }
      else
      {
        IopIncrementCompletionContextUsageCountAndReadData(v8);
        v21 = 0LL;
        v22 = 0LL;
      }
      if ( v21 )
        ObfReferenceObject(v21);
    }
  }
  IopUpdateIrpTransferCount(v6, v13);
  if ( (*(_DWORD *)(a1 - 104) & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)v6, v8);
    v26 = (__int64)v50;
  }
  else
  {
    v26 = (__int64)v50;
    *(_QWORD *)(a1 + 32) = v50;
    IopDequeueIrpFromThread(v6, v24, v25);
  }
  v27 = *(_DWORD *)(a1 - 104) & 0x8000;
  if ( v27 || (*(_QWORD *)(a1 - 32) &= ~1uLL, (v28 = *(_QWORD *)(a1 - 32)) == 0) )
  {
    if ( v21 && *(_QWORD *)(a1 - 24) && !(unsigned int)IopSkipCompletionPort(v8, (__int64)v6) )
    {
      *(_QWORD *)a1 = v22;
      *(_DWORD *)(a1 + 64) = 0;
      if ( v8 )
      {
        v30 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
        if ( v30 == 8 || v30 == 20 )
          v12 = 1;
      }
      KeInsertQueueEx((__int64)v21, (_QWORD *)(a1 + 48), v12, 0LL);
      goto LABEL_77;
    }
    v31 = v6;
    if ( v27 )
    {
      if ( (unsigned int)IopDecrementIrpRefCount(v6) )
        goto LABEL_77;
      v31 = v6;
    }
    IoFreeIrp(v31);
  }
  else
  {
    if ( v52 )
      v29 = *(char *)(a1 - 50);
    else
      v29 = 2;
    KeInitializeApc(
      a1,
      v26,
      v29,
      (__int64)IopUserRundown,
      (__int64)IopUserRundown,
      v28,
      *(_BYTE *)(a1 - 56),
      *(_QWORD *)(a1 - 24));
    KeInsertQueueApc(a1, *(_QWORD *)(a1 - 48), 0LL, 2);
  }
LABEL_77:
  if ( v21 )
    ObfDereferenceObject(v21);
LABEL_159:
  if ( v8 )
    ObDereferenceObjectDeferDelete((PVOID)v8);
}
