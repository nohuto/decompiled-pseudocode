/*
 * XREFs of sub_14023AFD8 @ 0x14023AFD8
 * Callers:
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 * Callees:
 *     sub_140275FC0 @ 0x140275FC0 (sub_140275FC0.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_1403119F0 @ 0x1403119F0 (sub_1403119F0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

void __fastcall sub_14023AFD8(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rdi
  __int64 v4; // r13
  char v5; // si
  __int64 v6; // rbx
  KIRQL OldIrql; // r15
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // edx
  bool v17; // zf
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  KIRQL v21; // bl
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  __int64 v24; // r8
  int v25; // eax
  KIRQL v26; // bl
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  struct _KLOCK_QUEUE_HANDLE v31; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+50h] [rbp-98h] BYREF
  char v34; // [rsp+52h] [rbp-96h]
  char v35; // [rsp+53h] [rbp-95h]
  int v36; // [rsp+54h] [rbp-94h]
  _QWORD v37[2]; // [rsp+58h] [rbp-90h] BYREF
  struct _KLOCK_QUEUE_HANDLE v38; // [rsp+68h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  __int128 v40; // [rsp+98h] [rbp-50h] BYREF
  char v42; // [rsp+F8h] [rbp+10h]
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+18h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+20h]

  v32 = 0LL;
  v35 = 0;
  v42 = 0;
  v2 = 0;
  v3 = 0LL;
  v40 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v31, 0, sizeof(v31));
  memset(&v38, 0, sizeof(v38));
  v4 = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v34 = 6;
    v36 = 0;
    v37[1] = v37;
    v37[0] = v37;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v6 )
    {
      v4 = *(_QWORD *)(v6 + 528);
      v31.LockQueue.Lock = (volatile PKSPIN_LOCK)(v4 + 704);
      v31.LockQueue.Next = 0LL;
      sub_1403119F0(&v31);
      v5 = 1;
      if ( *(_QWORD *)(v6 + 224) == v6 + 224 )
      {
        v8 = *(_DWORD *)(v6 + 152);
        if ( (v8 & 0x100) == 0 )
        {
          v42 = 1;
          *(_DWORD *)(v6 + 152) = v8 | 0x10000;
          v32 = *(_QWORD *)(v6 + 272);
          *(_QWORD *)(v6 + 272) = (char *)&v32 + 1;
          v9 = *(_DWORD *)(v6 + 152);
          if ( (v9 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v6 + 496) )
            {
              v38.LockQueue.Lock = (volatile PKSPIN_LOCK)(v4 + 768);
              v38.LockQueue.Next = 0LL;
              sub_1403119F0(&v38);
              v10 = *(_QWORD *)(v6 + 496);
              if ( v10 )
              {
                v3 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
                v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
                v12 = *(_QWORD **)((v10 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v11 + 8) != v3 || *v12 != v3 )
                  __fastfail(3u);
                *v12 = v11;
                *(_QWORD *)(v11 + 8) = v12;
                *(_QWORD *)(v3 + 8) = 0LL;
                *(_QWORD *)v3 = 0LL;
                *(_QWORD *)(v6 + 496) = 0LL;
                v2 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v38);
            }
          }
          else
          {
            *(_DWORD *)(v6 + 152) = v9 | 0x20;
            v2 = 1;
          }
        }
      }
    }
    if ( v5 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
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
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      *((_QWORD *)&v40 + 1) = v3;
      sub_140275FC0(v6, &v40, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v3 )
      sub_1402766A0((PSLIST_ENTRY)v3);
    if ( v42 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 704), &v31);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v18 )
        {
          v19 = (_QWORD *)(v18 + 272);
          v20 = *(_QWORD *)(v18 + 272);
          if ( v20 )
          {
            while ( (__int64 *)v20 != (__int64 *)((char *)&v32 + 1) )
            {
              v19 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
              v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v20 )
                goto LABEL_37;
            }
            *v19 = v32;
          }
LABEL_37:
          *(_DWORD *)(v18 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
          v21 = v31.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v22 = KeGetCurrentIrql();
              if ( v22 <= 0xFu && v31.OldIrql <= 0xFu && v22 >= 2u )
              {
                v23 = KeGetCurrentPrcb();
                v24 = *((_QWORD *)v23 + 4375);
                v25 = ~(unsigned __int16)(-1LL << (v31.OldIrql + 1));
                v17 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
                *(_DWORD *)(v24 + 20) &= v25;
                if ( v17 )
                  sub_140418E4C(v23);
              }
            }
          }
          __writecr8(v21);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v31);
          v26 = v31.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && v31.OldIrql <= 0xFu && v27 >= 2u )
              {
                v28 = KeGetCurrentPrcb();
                v29 = *((_QWORD *)v28 + 4375);
                v30 = ~(unsigned __int16)(-1LL << (v31.OldIrql + 1));
                v17 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
                *(_DWORD *)(v29 + 20) &= v30;
                if ( v17 )
                  sub_140418E4C(v28);
              }
            }
          }
          __writecr8(v26);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
