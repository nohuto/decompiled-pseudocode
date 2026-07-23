/*
 * XREFs of sub_1403C89A0 @ 0x1403C89A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403C8AA8 @ 0x1403C8AA8 (sub_1403C8AA8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1403C89A0(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  char *v9; // r15
  volatile LONG *v10; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // r12
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v17; // rdx
  bool v18; // zf
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  _DWORD v21[10]; // [rsp+20h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      sub_1402F32E0(&v22, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    v9 = sub_14026DFC0(1);
    v10 = (volatile LONG *)sub_140282AD0((__int64)v9);
    v11 = ExAcquireSpinLockExclusive(v10);
    *((_DWORD *)v10 + 1) = 0;
    v12 = v11;
    ExAcquireSpinLockExclusive(&dword_140C55048);
    if ( qword_140C54FA8 )
    {
      if ( *(_QWORD *)a2 )
      {
        v15 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(v15 + 12) = 0;
        *(_QWORD *)(v15 + 24) = v15 + 16;
        *(_QWORD *)(v15 + 16) = v15 + 16;
        *(_WORD *)(v15 + 8) = 263;
        *(_BYTE *)(v15 + 10) = 6;
        *(_QWORD *)v15 = qword_140C54FD8;
        qword_140C54FD8 = v15;
      }
      else
      {
        stru_140C54FB0.List.Flink = 0LL;
        stru_140C54FB0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1403B7CB0;
        stru_140C54FB0.Parameter = &StartContext;
        ExQueueWorkItem(&stru_140C54FB0, DelayedWorkQueue);
        byte_140C5504C = 1;
      }
      v13 = 259;
    }
    else
    {
      sub_1403C8AA8(a2);
      v13 = 0;
    }
    *(_DWORD *)(a2 + 16) = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C55048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = (*(_DWORD *)(v17 + 20) & 0xFFFF0007) == 0;
        *(_DWORD *)(v17 + 20) &= 0xFFFF0007;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    __writecr8(2uLL);
    sub_14030FA80((__int64)v9, v12);
  }
  v19 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v21[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v20 )
        break;
      sub_1402F32E0(v21, a2, (__int64)a3, a4);
    }
  }
  else
  {
    result = v20 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
