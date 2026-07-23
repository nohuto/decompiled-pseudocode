/*
 * XREFs of sub_1402D5CA8 @ 0x1402D5CA8
 * Callers:
 *     IoDetachDevice @ 0x140256080 (IoDetachDevice.c)
 *     sub_1402A7190 @ 0x1402A7190 (sub_1402A7190.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 * Callees:
 *     sub_140259288 @ 0x140259288 (sub_140259288.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     sub_1402A4064 @ 0x1402A4064 (sub_1402A4064.c)
 *     sub_1402A6E00 @ 0x1402A6E00 (sub_1402A6E00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D5A04 @ 0x1402D5A04 (sub_1402D5A04.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403A56FC @ 0x1403A56FC (sub_1403A56FC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_14080EA40 @ 0x14080EA40 (sub_14080EA40.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

char __fastcall sub_1402D5CA8(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // bl
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r12
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // ebx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v25; // [rsp+C8h] [rbp+48h]

  v25 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v10 = *(_QWORD *)(BugCheckParameter2 + 24);
      v24 = v10;
      if ( v10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 80LL);
        sub_1402A6E00(BugCheckParameter2, 0);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v13 )
        {
          if ( *(_DWORD *)v13 > 0x68u )
          {
            v14 = *(_QWORD *)(v13 + 104);
            if ( v14 )
            {
              v15 = (dword_140C29FC0 & 0x10) != 0
                 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(BugCheckParameter2 + 8))
                  ? sub_140A8A9AC()
                  : 0LL;
              sub_14042A5E0(v24, BugCheckParameter2);
              if ( v15 )
                sub_140A8A8D4(v15, v14);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        sub_140259288(BugCheckParameter2, 0);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_18;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v11 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v11 )
        ObDereferenceSecurityDescriptor(v11, 1LL);
      sub_1402D5A04(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      v7 = 1;
      if ( !v8 )
        return v7;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_18:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    v16 = *(_QWORD *)(v4 + 8);
    v17 = v16;
    if ( v16 )
    {
      while ( !*(_DWORD *)(v17 + 4) && !*(_QWORD *)(v17 + 24) && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 6) == 0 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_24;
      }
      v8 = 0;
    }
LABEL_24:
    v18 = *(_DWORD *)(v4 + 16);
    if ( (v18 & 0x80u) != 0 && v16 )
    {
      v8 = 0;
    }
    else if ( v8 )
    {
      *(_DWORD *)(v4 + 16) = v18 | 1;
    }
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_QWORD *)&WorkItem[56] = v4;
      if ( v25 )
      {
        sub_1406DE800(WorkItem);
      }
      else
      {
        *(_QWORD *)WorkItem = 0LL;
        *(_QWORD *)&WorkItem[16] = sub_1406DE800;
        *(_QWORD *)&WorkItem[24] = WorkItem;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObject((PVOID)v4);
    }
    return v7;
  }
  v24 = sub_1402A4064(BugCheckParameter2);
  v19 = v24;
  v22 = sub_1403A56FC(&v24, v20, 0LL);
  KeReleaseQueuedSpinLock((unsigned int)(v21 + 10), a3);
  if ( v22 != 1 )
    sub_14080EA40(v19, v25);
  return 0;
}
