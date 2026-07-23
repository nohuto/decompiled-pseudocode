/*
 * XREFs of sub_140417DE0 @ 0x140417DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402B1CB0 (KeReleaseSpinLock.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418160 @ 0x140418160 (sub_140418160.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 */

char __fastcall sub_140417DE0(__int64 *a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // rbp
  char v4; // di
  int v6; // eax
  struct _MDL *v7; // rcx
  __int64 v8; // r12
  char v9; // r15
  KSPIN_LOCK *v10; // r14
  __int64 v11; // rsi
  KIRQL v12; // al
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // al
  __int64 v20; // rcx
  KIRQL v21; // r13
  __int64 *v22; // rdx
  __int64 **v23; // rax
  __int64 v24; // r9
  __int64 v25; // r14
  unsigned int v26; // ebx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  int v30; // [rsp+40h] [rbp-58h]
  ULONG_PTR v32; // [rsp+A8h] [rbp+10h] BYREF
  int v33; // [rsp+B0h] [rbp+18h]
  char v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v32 = a2;
  v3 = *a1;
  v4 = 0;
  v6 = *(_DWORD *)(*a1 + 48);
  v7 = *(struct _MDL **)(*a1 + 8);
  v8 = *(unsigned int *)(v3 + 56);
  v9 = *(_BYTE *)(v3 + 68);
  v10 = *(KSPIN_LOCK **)(v3 + 152);
  v11 = *(_QWORD *)(v3 + 112);
  v30 = v6;
  v34 = *(_BYTE *)(v3 + 65);
  if ( v7 )
  {
    sub_1405570D0(v7);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  if ( v10 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(v10 + 187);
    KeReleaseSpinLock(v10 + 187, v12);
  }
  if ( v10 != (KSPIN_LOCK *)KeGetCurrentThread()
    || KeAreAllApcsDisabled()
    || *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
  {
    if ( !v9 )
    {
      KeInitializeApc(
        v3 + 120,
        (__int64)v10,
        *(char *)(v3 + 70),
        (__int64)sub_140418160,
        (__int64)sub_140417DB0,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(v3 + 120, v32, 0LL, a3);
      goto LABEL_29;
    }
LABEL_18:
    v19 = KeAcquireQueuedSpinLock(0xBuLL);
    v20 = qword_140C471A0;
    v21 = v19;
    if ( (__int64 *)qword_140C471A0 == &qword_140C471A0 )
    {
LABEL_21:
      if ( v10 )
      {
        KeInitializeApc(
          v3 + 120,
          (__int64)v10,
          *(char *)(v3 + 70),
          (__int64)sub_140418160,
          (__int64)sub_140417DB0,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(v3 + 120, v32, 0LL, v33);
        KeReleaseQueuedSpinLock(0xBuLL, v21);
        goto LABEL_29;
      }
    }
    else
    {
      while ( 1 )
      {
        v22 = *(__int64 **)v20;
        if ( v20 - 32 == v3 )
          break;
        v20 = *(_QWORD *)v20;
        if ( v22 == &qword_140C471A0 )
          goto LABEL_21;
      }
      v23 = *(__int64 ***)(v20 + 8);
      if ( v22[1] != v20 || *v23 != (__int64 *)v20 )
        __fastfail(3u);
      *v23 = v22;
      v22[1] = (__int64)v23;
      *(_QWORD *)(v20 - 32 + 40) = v20;
      *(_QWORD *)v20 = v20;
      ObfDereferenceObject(v10);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v21);
    sub_140234D58((PIRP)v3, v32);
    goto LABEL_29;
  }
  if ( v9 )
    goto LABEL_18;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  sub_140418160(v3 + 120, 0LL, 0LL, &v32, 0LL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
LABEL_29:
  if ( v30 < 0 || v9 )
  {
    *(_DWORD *)(*(_QWORD *)(v11 - 40) + 48LL) = v30;
    *(_BYTE *)(*(_QWORD *)(v11 - 40) + 65LL) = v34;
    v28 = *(_QWORD *)(v11 - 40);
    *a1 = v28;
    sub_14020B888(v28, 9, 1);
  }
  else
  {
    v24 = *(_QWORD *)(v11 - 40);
    v25 = *(_QWORD *)(v24 + 184);
    if ( (*(_DWORD *)(*(_QWORD *)(v11 - 24) + 80LL) & 8) != 0 )
    {
      v26 = *(_DWORD *)(v25 - 64);
      v27 = *(unsigned __int16 *)(*(_QWORD *)(v11 - 32) + 304LL);
      if ( !(_WORD)v27 )
        v27 = 4096;
      if ( v27 + v26 - 1 - (v27 + v26 - 1) % v27 < v26 )
        v26 = v27 + v26 - 1 - (v27 + v26 - 1) % v27;
      if ( (unsigned int)v8 < v26 )
        memset((void *)(*(_QWORD *)(v24 + 112) + v8), 0, v26 - (unsigned int)v8);
    }
    else
    {
      v26 = v8;
    }
    *(_DWORD *)(v25 - 64) = v26;
    *(_QWORD *)(v11 - 56) = sub_1404183A0;
    *(_QWORD *)(v11 - 48) = v11 - 40;
    *(_QWORD *)(v11 - 72) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v11 - 72), CriticalWorkQueue);
    return 1;
  }
  return v4;
}
