/*
 * XREFs of sub_140A67C74 @ 0x140A67C74
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140562A68 @ 0x140562A68 (sub_140562A68.c)
 *     sub_140563058 @ 0x140563058 (sub_140563058.c)
 *     sub_1405633A8 @ 0x1405633A8 (sub_1405633A8.c)
 *     sub_14095319C @ 0x14095319C (sub_14095319C.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A692FC @ 0x140A692FC (sub_140A692FC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140A67C74()
{
  char v0; // r14
  char v1; // r15
  struct _WORK_QUEUE_ITEM *v2; // rdi
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int128 v31; // [rsp+30h] [rbp-48h] BYREF
  __int128 v32; // [rsp+40h] [rbp-38h]
  __int64 v33; // [rsp+50h] [rbp-28h]

  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v0 = 0;
  v1 = 0;
  v2 = 0LL;
  KeInitializeEvent((PRKEVENT)(qword_140C448A8 + 33048), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(qword_140C448A8 + 33072), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(qword_140C448A8 + 33096), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(qword_140C448A8 + 33120), NotificationEvent, 0);
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) == 0 )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1366322768LL);
    v2 = Pool2;
    if ( !Pool2 )
    {
      v4 = qword_140C448A8;
      v5 = -1073741670;
      v6 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v6 )
        v6 = 1656;
      v7 = *(_DWORD *)(qword_140C448A8 + 33276);
      *(_DWORD *)(qword_140C448A8 + 33272) = v6;
      if ( !v7 )
        v7 = 10;
      *(_DWORD *)(v4 + 33276) = v7;
      goto LABEL_46;
    }
    Pool2->List.Flink = 0LL;
    Pool2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140A69140;
    Pool2->Parameter = Pool2;
    ExQueueWorkItem(Pool2, CriticalWorkQueue);
  }
  v5 = sub_14095319C();
  if ( v5 < 0 )
  {
    v4 = qword_140C448A8;
    v9 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v9 )
      v9 = 1671;
    *(_DWORD *)(qword_140C448A8 + 33272) = v9;
    v10 = *(_DWORD *)(v4 + 33276);
    if ( !v10 )
      v10 = 1;
    *(_DWORD *)(v4 + 33276) = v10;
    goto LABEL_46;
  }
  v1 = 1;
  if ( !*(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) )
    goto LABEL_25;
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 8) == 0 )
  {
    *((_QWORD *)&v32 + 1) = 0LL;
    *(_QWORD *)&v31 = sub_1407F5000;
    *((_QWORD *)&v31 + 1) = sub_140A67BA0;
    *(_QWORD *)&v32 = sub_140562F00;
    v33 = 8LL;
    v5 = sub_140A487C0((__int64)&v31);
    if ( v5 == 1073742484 )
      v5 = 0;
    goto LABEL_46;
  }
  v5 = sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), v8);
  if ( v5 < 0 )
  {
    v11 = qword_140C448A8;
    v4 = 1739LL;
    v12 = *(_DWORD *)(qword_140C448A8 + 33272);
    if ( !v12 )
      v12 = 1739;
    *(_DWORD *)(qword_140C448A8 + 33272) = v12;
    v13 = *(_DWORD *)(v11 + 33276);
    if ( !v13 )
      v13 = 8;
    *(_DWORD *)(v11 + 33276) = v13;
  }
  else
  {
LABEL_25:
    CurrentIrql = KeGetCurrentIrql();
    v5 = sub_140563058();
    if ( v5 < 0 )
    {
      v20 = qword_140C448A8;
      v4 = 1772LL;
      v21 = *(_DWORD *)(qword_140C448A8 + 33272);
      if ( !v21 )
        v21 = 1772;
      *(_DWORD *)(qword_140C448A8 + 33272) = v21;
      v22 = *(_DWORD *)(v20 + 33276);
      if ( !v22 )
        v22 = 1;
      *(_DWORD *)(v20 + 33276) = v22;
    }
    else
    {
      v0 = 1;
      v5 = sub_1405633A8(v16, v15);
      if ( v5 < 0 )
      {
        sub_14042A5E0(3LL, *(_QWORD *)(qword_140C448A8 + 33160));
        v17 = qword_140C448A8;
        v18 = *(_DWORD *)(qword_140C448A8 + 33272);
        if ( !v18 )
          v18 = 1762;
        *(_DWORD *)(qword_140C448A8 + 33272) = v18;
        v19 = *(_DWORD *)(v17 + 33276);
        if ( !v19 )
          v19 = 1;
        *(_DWORD *)(v17 + 33276) = v19;
      }
      sub_140A692FC();
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = -1LL << (CurrentIrql + 1);
          v25 = *((_QWORD *)CurrentPrcb + 4375);
          v26 = ~(unsigned __int16)v4;
          v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= v26;
          if ( v27 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_46:
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
  {
    if ( v0 )
      sub_140562A68();
  }
  else if ( v2 )
  {
    KeSetEvent((PRKEVENT)(qword_140C448A8 + 33096), 0, 0);
    KeWaitForSingleObject((PVOID)(qword_140C448A8 + 33120), Executive, 0, 0, 0LL);
  }
  v28 = *(_QWORD *)(qword_140C448A8 + 33160);
  if ( v28 )
    sub_14042A5E0(v28, v4);
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(qword_140C448A8 + 24) + 4LL) )
    {
      v29 = sub_14042A5E0(*(_QWORD *)(qword_140C448A8 + 33168), v4);
      if ( v5 >= 0 )
        return v29;
    }
  }
  return (unsigned int)v5;
}
