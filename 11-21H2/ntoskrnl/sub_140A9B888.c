/*
 * XREFs of sub_140A9B888 @ 0x140A9B888
 * Callers:
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A92124 @ 0x140A92124 (sub_140A92124.c)
 *     sub_140A92524 @ 0x140A92524 (sub_140A92524.c)
 *     sub_140A9BEE8 @ 0x140A9BEE8 (sub_140A9BEE8.c)
 */

__int64 __fastcall sub_140A9B888(__int16 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  _DWORD *v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r8
  bool v20; // zf
  _DWORD *v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v21 = 0LL;
  result = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (a1 & 0x400) == 0 )
    return result;
  if ( dword_140D049A0 != 2 && !_InterlockedCompareExchange(&dword_140D049A0, 1, 0) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 0x20uLL, 0x77496656u);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A9BF20;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
    else
    {
      dword_140D049A0 = 0;
    }
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_140C1AFB0);
  if ( !(unsigned int)sub_140A92124((__int64)a2, 0) )
  {
    v8 = sub_140A9BEE8(a2, &v21);
    v9 = v21;
    v10 = v8;
    if ( !*v21 )
    {
      if ( v8 )
      {
LABEL_14:
        v15 = *(_DWORD *)(v10 + 24);
        if ( (v15 & 6) == 0 )
        {
          v16 = v15 == 1 ? *(unsigned int *)(v10 + 32) : *(unsigned int *)(v10 + 36);
          if ( (unsigned int)sub_140A92524(a3, v16) )
          {
            v17 = 5 * (*(unsigned int *)(v10 + 36) + 1LL);
            *(_OWORD *)(v10 + 8 * v17) = v22;
            *(_OWORD *)(v10 + 8 * v17 + 16) = v23;
            *(_QWORD *)(v10 + 8 * v17 + 32) = v24;
            if ( ++*(_DWORD *)(v10 + 36) == *(_DWORD *)(v10 + 32) )
            {
              *(_DWORD *)(v10 + 24) |= 1u;
              *(_DWORD *)(v10 + 36) = 0;
            }
          }
        }
        goto LABEL_21;
      }
      v10 = ExAllocatePool2(64LL, 0x348uLL, 0x65496656u);
      if ( v10 )
      {
        ObfReferenceObject(a2);
        *(_DWORD *)(v10 + 24) = 0;
        v11 = v9 + 2;
        *(_QWORD *)v10 = a2;
        v12 = a2[18];
        *(_DWORD *)(v10 + 36) = 0;
        *(_DWORD *)(v10 + 28) = v12;
        v13 = (_QWORD *)(v10 + 8);
        *(_DWORD *)(v10 + 32) = 20;
        v14 = *((_QWORD *)v9 + 1);
        if ( *(_DWORD **)(v14 + 8) != v9 + 2 )
          __fastfail(3u);
        *v13 = v14;
        *(_QWORD *)(v10 + 16) = v11;
        *(_QWORD *)(v14 + 8) = v13;
        *v11 = v13;
        goto LABEL_14;
      }
    }
  }
LABEL_21:
  KeReleaseSpinLockFromDpcLevel(&qword_140C1AFB0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = ((unsigned int)result & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= result;
        if ( v20 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
