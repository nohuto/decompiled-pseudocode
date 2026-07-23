/*
 * XREFs of sub_14083ECE0 @ 0x14083ECE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_14023C084 @ 0x14023C084 (sub_14023C084.c)
 *     sub_140263260 @ 0x140263260 (sub_140263260.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140346260 @ 0x140346260 (sub_140346260.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057B4EC @ 0x14057B4EC (sub_14057B4EC.c)
 *     sub_1406DCB98 @ 0x1406DCB98 (sub_1406DCB98.c)
 *     sub_140A01EE4 @ 0x140A01EE4 (sub_140A01EE4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_14083ECE0(_QWORD *a1)
{
  char v2; // r12
  struct _WORK_QUEUE_ITEM *v3; // r15
  _QWORD *PoolWithTag; // r14
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r13
  unsigned __int64 v7; // rsi
  NTSTATUS v8; // eax
  struct _KDPC *v9; // r9
  int v10; // ebx
  __int64 v11; // r10
  __int64 v12; // rsi
  unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KDPC *v16; // rcx
  __int64 j; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  __int64 i; // rbx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // r8
  int v30; // eax
  char v31; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v32; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _KTHREAD *v33; // [rsp+50h] [rbp-B8h]
  _QWORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v35[68]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object[3]; // [rsp+178h] [rbp+70h] BYREF

  v2 = 0;
  v32 = 0;
  memset(v35, 0, 0x108uLL);
  v31 = 1;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
    if ( v3 )
    {
      v31 = 0;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v33 = CurrentThread;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 0xCu);
  v34[1] = -1LL;
  v34[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)dword_140C0C868) >> 2),
    (10000000LL * (unsigned int)dword_140C0C868) >> 2,
    (__int64)v34);
  v6 = 0;
  v7 = 10000000LL * (unsigned int)dword_140C0C868;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  v34[0] = v7;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v8 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v9 = 0LL;
    if ( !v8 )
      break;
    v22 = v8 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + i);
          if ( (v24 & 1) == 0 )
          {
            if ( v24 )
            {
              if ( (*(_DWORD *)(v24 + 712) & 0x4000) == 0 && !*(_DWORD *)(v24 + 4) )
              {
                v25 = (*(_DWORD *)(v24 + 712) & 0x3FFF) - ((2 * *(_DWORD *)(v24 + 716)) >> 1);
                if ( v25 )
                {
                  sub_14023C084(v24, v7, v25);
                  v9 = 0LL;
                }
              }
            }
          }
        }
        CurrentThread = v33;
      }
      LOBYTE(v11) = 1;
LABEL_13:
      if ( v6 )
        goto LABEL_23;
      goto LABEL_14;
    }
    v6 = 0;
    v27 = 0LL;
    v11 = 1LL;
    do
    {
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + 8 * v27);
      if ( ((unsigned __int8)v28 & (unsigned __int8)v11) != 0 )
        v28 = (__int64)v9;
      if ( *(_DWORD *)(v28 + 704) == *(_DWORD *)(v28 + 708) && sub_140346260(v28, 0x3FFF) )
      {
        if ( (dword_140C11648 & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)dword_140C11648, 2uLL, 0LL, (ULONG_PTR)v9);
        if ( v27 == v11 && v31 == (_BYTE)v9 )
        {
          *(_DWORD *)PoolWithTag = v11;
          PoolWithTag[1] = v28;
          v3->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A01E10;
          v3->Parameter = PoolWithTag;
          v3->List.Flink = (struct _LIST_ENTRY *)v9;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v31 = 1;
        }
        v30 = sub_1406DCB98((_QWORD *)v28, (__int64)a1 + 276, v29, (int)v9);
        v9 = 0LL;
        v11 = 1LL;
        if ( v30 < 0 )
          v2 = 1;
      }
      v27 += v11;
    }
    while ( v27 <= v11 );
LABEL_14:
    v15 = (__int64)v9;
    do
    {
      v16 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + v15);
      if ( ((unsigned __int8)v16 & (unsigned __int8)v11) != 0 )
        v16 = v9;
      *((_DWORD *)&v16[11].0 + 1) = v16[11].TargetInfoAsUlong;
      if ( ((__int64)v16[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v16[11].ProcessorHistory) || v2 )
        v6 = v11;
      v15 += 8LL;
    }
    while ( v15 <= 8 );
    if ( v6 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v9);
    CurrentThread = v33;
LABEL_23:
    v35[0] = 2097153;
    memset(&v35[1], 0, 0x104uLL);
    sub_140263260(*(_WORD *)a1[1], (unsigned __int16 *)v35, &v32);
    v2 = 0;
    if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)v35, *((unsigned __int16 **)CurrentThread + 69)) )
      sub_14020E9E8((__int64)CurrentThread, (__int64)v35);
    for ( j = 0LL; j < 64; j += 8LL )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + j);
      if ( (v18 & 1) == 0 && v18 && *(_DWORD *)(v18 + 664) != v32 )
        sub_14057B4EC(v18, v32);
    }
    CurrentThread = v33;
    v7 = v34[0];
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v10 = 0;
    LODWORD(v11) = 1;
    v12 = 0LL;
    do
    {
      v13 = (unsigned __int16 *)a1[1];
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *v13) + v12) & (unsigned __int8)v11) != 0
        && (v26 = sub_140A01EE4(*a1, v13, (unsigned int)v10, v9), v9 = 0LL, LODWORD(v11) = 1, v26 < 0) )
      {
        v2 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + v12);
        if ( ((unsigned __int8)v14 & (unsigned __int8)v11) == 0 )
        {
          if ( v14 )
          {
            if ( sub_140346260(v14, *(_DWORD *)(v14 + 720)) )
            {
              v21 = sub_1406DCB98(v19, (__int64)a1 + 276, v20, (int)v9);
              v9 = 0LL;
              LODWORD(v11) = 1;
              if ( v21 < 0 )
                v2 = 1;
            }
          }
        }
      }
      v10 += v11;
      v12 += 8LL;
    }
    while ( v10 < 8 );
    CurrentThread = v33;
    goto LABEL_13;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
