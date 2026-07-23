/*
 * XREFs of sub_1403A3F0C @ 0x1403A3F0C
 * Callers:
 *     sub_1403A3C90 @ 0x1403A3C90 (sub_1403A3C90.c)
 *     sub_140A4ADB0 @ 0x140A4ADB0 (sub_140A4ADB0.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B0DF0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402D3080 @ 0x1402D3080 (sub_1402D3080.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_1403A46E4 @ 0x1403A46E4 (sub_1403A46E4.c)
 *     sub_1403A4868 @ 0x1403A4868 (sub_1403A4868.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403A3F0C(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        _SLIST_ENTRY *a9,
        __int64 *a10,
        _SLIST_ENTRY **a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v14; // r13
  _SLIST_ENTRY *v15; // rsi
  PDEVICE_OBJECT v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r12
  int v21; // ebx
  unsigned int v22; // r14d
  int v23; // eax
  unsigned int v24; // r12d
  unsigned int v25; // r12d
  IRP *v26; // r13
  int v27; // eax
  char v28; // cl
  __int64 v29; // rax
  _SLIST_ENTRY *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  _SLIST_ENTRY **v33; // rax
  void *v34; // r12
  __int64 v36; // rsi
  void *v37; // [rsp+48h] [rbp-41h]
  LONG SpinLock[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v39; // [rsp+58h] [rbp-31h]
  LARGE_INTEGER Interval; // [rsp+60h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  __int64 Irp; // [rsp+E0h] [rbp+57h] BYREF
  char v44; // [rsp+E8h] [rbp+5Fh]
  int v45; // [rsp+F0h] [rbp+67h]

  v45 = a4;
  v44 = a3;
  BugCheckParameter4 = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  Irp = 0LL;
  *(_QWORD *)SpinLock = 0LL;
  v14 = 0LL;
  *a10 = 0LL;
  v15 = 0LL;
  LockHandle.LockQueue = 0LL;
  *a11 = 0LL;
  v16 = sub_1402D30A0(a1, 0x72496F50u);
  v17 = sub_14036B86C((__int64)a1, 0x72496F50u);
  v37 = v17;
  if ( v17 )
  {
    v19 = v17[39];
    v20 = *(_QWORD *)(v19 + 40);
    if ( v20 )
    {
      v21 = a5;
      if ( v45 == 1 && a3 == 2 )
      {
        v23 = sub_1403A46E4(v20, (int)a1, a5, a8, (__int64)a9, a7, (__int64)&Irp, SpinLock);
        v22 = v23;
        if ( v23 < 0 && v23 != -1073741130 || v23 == 259 )
        {
          v14 = Irp;
          v15 = *(_SLIST_ENTRY **)SpinLock;
LABEL_33:
          v34 = v37;
LABEL_21:
          if ( v14 )
            goto LABEL_22;
          goto LABEL_46;
        }
        if ( v23 >= 0 )
        {
          v36 = *(_QWORD *)(v20 + 80);
          v39 = v36;
          if ( v16->StackSize > *(_BYTE *)(*(_QWORD *)(v36 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(v16, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v36 + 104), 0x72496F50u);
            v16 = *(PDEVICE_OBJECT *)(v36 + 104);
          }
          v26 = (IRP *)Irp;
          v15 = *(_SLIST_ENTRY **)SpinLock;
LABEL_19:
          IoReuseIrp(v26, -1073741637);
          sub_1402D3080();
          v26->IoStatus.Information = 0LL;
          v26->Tail.Overlay.ListEntry.Blink = &v26->Tail.Overlay.ListEntry;
          v26->Tail.Overlay.ListEntry.Flink = &v26->Tail.Overlay.ListEntry;
          memset(v15, 0, 0x120uLL);
          v27 = v45;
          v28 = v44;
          v15[2].Next = (_SLIST_ENTRY *)v16;
          *((_QWORD *)&v15[1].Next + 1) = v37;
          *((_BYTE *)&v15[11].Next + 8) = v28;
          *((_DWORD *)&v15[11].Next + 3) = v27;
          v29 = v39;
          LODWORD(v15[12].Next) = v21;
          v15[1].Next = (_SLIST_ENTRY *)v26;
          *((_QWORD *)&v15[12].Next + 1) = v29;
          v30 = *(_SLIST_ENTRY **)SpinLock;
          v14 = Irp;
          *(_DWORD *)(*(_QWORD *)SpinLock + 212LL) = _InterlockedIncrement(&dword_140C22758);
          *((_QWORD *)&v30[13].Next + 1) = a8;
          v30[14].Next = a9;
          *((_QWORD *)&v30[14].Next + 1) = a1;
          *((_QWORD *)&v30[16].Next + 1) = sub_1403A4CC0;
          v30[17].Next = v30;
          *((_QWORD *)&v30[15].Next + 1) = 0LL;
          v31 = *(_QWORD *)(v14 + 184);
          *(_QWORD *)(v31 - 32) = 0LL;
          *(_QWORD *)(v31 - 8) = v30;
          *(_QWORD *)(v14 + 184) -= 72LL;
          v32 = *(_QWORD *)(v14 + 184);
          --*(_BYTE *)(v14 + 67);
          *(_BYTE *)(v32 - 71) = v28;
          *(_BYTE *)(v32 - 72) = 22;
          *(_QWORD *)(v32 - 32) = v16;
          KeAcquireInStackQueuedSpinLock(&qword_140C22F90, &LockHandle);
          v33 = (_SLIST_ENTRY **)qword_140C22FB8;
          if ( *(__int64 **)qword_140C22FB8 != &qword_140C22FB0 )
            __fastfail(3u);
          v30->Next = (_SLIST_ENTRY *)&qword_140C22FB0;
          *((_QWORD *)&v30->Next + 1) = v33;
          *v33 = v30;
          qword_140C22FB8 = (__int64)v30;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v16 = 0LL;
          v34 = 0LL;
          v15 = 0LL;
          v22 = 0;
          *a10 = v14;
          *a11 = v30;
          goto LABEL_21;
        }
        v14 = Irp;
      }
      else
      {
        v22 = -1073741130;
        if ( !v44 )
        {
          v39 = sub_1403A4868(*(_QWORD *)(v19 + 40), 0LL);
          goto LABEL_13;
        }
      }
      v39 = 0LL;
LABEL_13:
      Interval.QuadPart = -500000LL;
      v24 = 0;
      while ( 1 )
      {
        if ( v24 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v24;
        *(_QWORD *)SpinLock = sub_140202234((__int64)&stru_140CF72C0);
        v15 = *(_SLIST_ENTRY **)SpinLock;
        if ( *(_QWORD *)SpinLock )
          break;
        if ( !a6 || v24 >= 0xA )
          goto LABEL_33;
      }
      v25 = 0;
      while ( 1 )
      {
        if ( v25 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v25;
        Irp = (__int64)IoAllocateIrp(v16->StackSize + 1, 0);
        v26 = (IRP *)Irp;
        if ( Irp )
          goto LABEL_19;
        if ( !a6 )
        {
          v34 = v37;
          goto LABEL_22;
        }
        if ( v25 >= 0xA )
        {
          v34 = v37;
          goto LABEL_47;
        }
      }
    }
  }
  v34 = v37;
  v22 = -1073741808;
LABEL_46:
  if ( a6 )
  {
LABEL_47:
    if ( v22 != 259 )
    {
      LOBYTE(BugCheckParameter4) = v45 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)v16, BugCheckParameter4);
    }
  }
LABEL_22:
  if ( v15 )
    sub_140203D88((__int64)&stru_140CF72C0, v15, v18);
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x72496F50u);
  if ( v34 )
    ObfDereferenceObjectWithTag(v34, 0x72496F50u);
  return v22;
}
