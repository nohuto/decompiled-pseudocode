/*
 * XREFs of sub_14058B0C8 @ 0x14058B0C8
 * Callers:
 *     sub_14058A4E8 @ 0x14058A4E8 (sub_14058A4E8.c)
 *     sub_14058B784 @ 0x14058B784 (sub_14058B784.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x140229990 (ExReleaseSpinLockExclusive.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     sub_14028D31C @ 0x14028D31C (sub_14028D31C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14058B734 @ 0x14058B734 (sub_14058B734.c)
 *     sub_14058C0BC @ 0x14058C0BC (sub_14058C0BC.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1405C5DA0 @ 0x1405C5DA0 (sub_1405C5DA0.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14058B0C8(volatile LONG *P, KIRQL a2, __int64 *a3, struct _FILE_OBJECT **a4)
{
  int v4; // r12d
  volatile LONG *v7; // r13
  struct _FILE_OBJECT *v8; // r14
  struct _WORK_QUEUE_ITEM *v9; // rbx
  BOOL v10; // esi
  KIRQL v11; // r9
  signed __int64 v12; // rdx
  NTSTATUS v13; // r15d
  ULONG Characteristics; // r12d
  KIRQL v15; // al
  __int64 v16; // rsi
  __int64 v17; // rdi
  KIRQL v19; // r9
  BOOL v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  _QWORD v25[2]; // [rsp+70h] [rbp-10h] BYREF
  KIRQL OldIrql; // [rsp+C0h] [rbp+40h]

  *((_DWORD *)P + 14) |= 0x100u;
  v25[1] = v25;
  v4 = 0;
  v24 = 393479LL;
  v25[0] = v25;
  v22 = *((_QWORD *)P + 10);
  *a4 = 0LL;
  *((_QWORD *)P + 10) = &v22;
  v21 = 0LL;
  *a3 = 0LL;
  v23 = 4LL;
  v7 = P + 18;
  v8 = (struct _FILE_OBJECT *)sub_14058B734(P);
  ExReleaseSpinLockExclusive(v7, a2);
  v9 = 0LL;
  v10 = (int)sub_1407F099C(v8) >= 0;
  v20 = v10;
  v11 = ExAcquireSpinLockExclusive(v7);
  OldIrql = v11;
  v12 = _InterlockedDecrement64((volatile signed __int64 *)P + 14);
  *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * (P[15] & 0x3FF)) + 1688LL) = 0LL;
  if ( !v10 || (P[14] & 1) != 0 )
  {
    *((_DWORD *)P + 14) &= ~0x100u;
    HIDWORD(v23) = 1;
    if ( !v12 )
    {
      sub_14058C0BC(P, &v22);
      ExReleaseSpinLockExclusive(P + 18, v19);
      if ( v10 )
        sub_1407F0748(v8);
      sub_1402700FC((PVOID)P);
      ObfDereferenceObjectWithTag(v8, 0x63536D4Du);
      return 0LL;
    }
    v13 = 0;
  }
  else
  {
    ++*((_DWORD *)P + 19);
    ExReleaseSpinLockExclusive(P + 18, v11);
    *((_QWORD *)KeGetCurrentThread() + 162) = 1LL;
    v13 = sub_140329730(0LL, 0LL, (__int64 *)P + 16, 0LL, 0LL, 2u, (int *)&v21);
    *((_QWORD *)KeGetCurrentThread() + 162) = 0LL;
    if ( v13 < 0 )
      v9 = (struct _WORK_QUEUE_ITEM *)sub_1402828F0(64, 0x38uLL, 0x70646D4Du);
    Characteristics = v8->DeviceObject->Characteristics;
    v15 = ExAcquireSpinLockExclusive(P + 18);
    *((_DWORD *)P + 14) &= ~0x100u;
    OldIrql = v15;
    v4 = (Characteristics >> 4) & 1;
    *a3 = sub_140287A8C((__int64)P, 1);
  }
  v16 = 0LL;
  sub_14058C0BC(P, &v22);
  if ( *((_QWORD *)P + 3) | *((_QWORD *)P + 5) | P[14] & 1 )
    goto LABEL_22;
  if ( !HIDWORD(v23) || !*((_QWORD *)P + 4) )
  {
    if ( v13 >= 0 || !*((_QWORD *)P + 4) )
      goto LABEL_19;
    if ( v13 != -1073740749 && sub_14028D31C(1, v4, v13) )
    {
      if ( v9 )
      {
        v9[1].List.Flink = (struct _LIST_ENTRY *)sub_1405C5DA0(P + 16, 1682730317LL);
        LODWORD(v9[1].List.Blink) = v13;
        LOBYTE(v9[1].WorkerRoutine) = 1;
        v9->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14096C160;
        v9->Parameter = v9;
        v9->List.Flink = 0LL;
        ExQueueWorkItem(v9, DelayedWorkQueue);
        *a4 = v8;
        return 1LL;
      }
LABEL_19:
      *a4 = v8;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return 1LL;
    }
  }
  v16 = sub_140287FB8((__int64)P);
  if ( !v16 )
LABEL_22:
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(qword_140C51F48 + 8LL * (P[15] & 0x3FF));
  ExReleaseSpinLockExclusive(v7, OldIrql);
  if ( v20 )
    sub_1407F0748(v8);
  ObfDereferenceObjectWithTag(v8, 0x63536D4Du);
  if ( v16 )
    sub_1405C4B8C(v17, 1LL, v16);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return 0LL;
}
