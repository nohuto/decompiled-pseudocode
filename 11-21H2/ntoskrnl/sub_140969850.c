/*
 * XREFs of sub_140969850 @ 0x140969850
 * Callers:
 *     sub_14059E2C0 @ 0x14059E2C0 (sub_14059E2C0.c)
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 *     sub_14096AF9C @ 0x14096AF9C (sub_14096AF9C.c)
 *     sub_1409704A0 @ 0x1409704A0 (sub_1409704A0.c)
 *     sub_140981EE4 @ 0x140981EE4 (sub_140981EE4.c)
 * Callees:
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14036071C @ 0x14036071C (sub_14036071C.c)
 *     sub_140360A00 @ 0x140360A00 (sub_140360A00.c)
 *     sub_1403B7624 @ 0x1403B7624 (sub_1403B7624.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405531C0 @ 0x1405531C0 (sub_1405531C0.c)
 *     sub_14056AF98 @ 0x14056AF98 (sub_14056AF98.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_140583408 @ 0x140583408 (sub_140583408.c)
 *     sub_1405835E0 @ 0x1405835E0 (sub_1405835E0.c)
 *     sub_140583778 @ 0x140583778 (sub_140583778.c)
 *     sub_140583A70 @ 0x140583A70 (sub_140583A70.c)
 *     sub_14059EFE4 @ 0x14059EFE4 (sub_14059EFE4.c)
 *     sub_1405AD99C @ 0x1405AD99C (sub_1405AD99C.c)
 *     sub_1405B2400 @ 0x1405B2400 (sub_1405B2400.c)
 *     sub_1405B3268 @ 0x1405B3268 (sub_1405B3268.c)
 *     sub_1405BF2A0 @ 0x1405BF2A0 (sub_1405BF2A0.c)
 *     sub_14081DDB0 @ 0x14081DDB0 (sub_14081DDB0.c)
 *     sub_140969320 @ 0x140969320 (sub_140969320.c)
 *     sub_14096A988 @ 0x14096A988 (sub_14096A988.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140969850(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  ULONG_PTR *v7; // r15
  int v8; // r12d
  int v9; // ebx
  ULONG_PTR *v10; // rcx
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  WNF_CHANGE_STAMP *v16; // r12
  unsigned int *v17; // rax
  int v18; // eax
  int v19; // eax
  ULONG_PTR *v20; // rcx
  WNF_CHANGE_STAMP *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp-49h]
  unsigned int *v24; // [rsp+48h] [rbp-41h]
  WNF_CHANGE_STAMP v25[2]; // [rsp+58h] [rbp-31h] BYREF
  WNF_CHANGE_STAMP *v26; // [rsp+60h] [rbp-29h]
  __int64 v27; // [rsp+68h] [rbp-21h]
  _QWORD v28[14]; // [rsp+70h] [rbp-19h] BYREF
  unsigned int *v29; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR v30; // [rsp+F8h] [rbp+6Fh] BYREF
  int v31; // [rsp+100h] [rbp+77h]
  char *v32; // [rsp+108h] [rbp+7Fh] BYREF

  v30 = a2;
  v26 = v25;
  v27 = 0LL;
  *(_QWORD *)v25 = v25;
  CurrentThread = KeGetCurrentThread();
  v5 = BugCheckParameter2;
  v28[1] = 0LL;
  v6 = 6 * BugCheckParameter2;
  v28[4] = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v23 = 0LL;
  v7 = (ULONG_PTR *)sub_1402182F8((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF);
  if ( v7 == &StartContext )
  {
    sub_140360A00((__int64)&StartContext, (__int64)CurrentThread);
  }
  else
  {
    sub_140360A00((__int64)v7, (__int64)CurrentThread);
    sub_140583408();
  }
  v8 = a3 & 2;
  v31 = v8;
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    if ( (a3 & 0x40) != 0 )
    {
      v5 = sub_14059EFE4(&v30);
      if ( v5 == -1LL )
      {
        if ( v7 == &StartContext )
        {
          v10 = &StartContext;
        }
        else
        {
          sub_140583A70();
          v10 = v7;
        }
        sub_14036071C((__int64)v10, (__int64)CurrentThread);
        return 0LL;
      }
    }
    v12 = v30;
  }
  else
  {
    v28[0] = 0LL;
    v12 = v30;
    v28[2] = v5;
    v28[3] = v30;
    if ( (a3 & 0x10000) != 0 )
    {
      v13 = 8 * v6 - 0x220000000000LL;
      v14 = v13 + 48 * v30;
      while ( v13 < v14 )
      {
        if ( sub_1405AD99C(v13) )
        {
          v9 = -1073740023;
          goto LABEL_49;
        }
        v13 = v15 + 48;
      }
    }
    v9 = sub_140969320(&v32, (unsigned int *)qword_140D06950, v28);
    if ( v9 < 0 )
      goto LABEL_49;
    v9 = sub_14056AF98(v5, v5 + v12 - 1, 2LL);
    if ( v9 < 0 )
      goto LABEL_49;
    v23 = sub_14023FF18((__int64)&StartContext, 1u);
    if ( !(unsigned int)sub_1403B7624((__int64)v25, v5, v12) )
    {
      v9 = -1073741670;
LABEL_21:
      sub_14056AF98(v5, v5 + v12 - 1, 8LL);
      goto LABEL_49;
    }
    v16 = *(WNF_CHANGE_STAMP **)v25;
    v17 = (unsigned int *)v23;
    while ( 1 )
    {
      v24 = v17;
      if ( v16 == v25 )
        break;
      v9 = sub_140969320(&v29, v17, v16);
      if ( v24 != (unsigned int *)v23 )
        ExFreePoolWithTag(v24 - 4, 0);
      if ( v9 < 0 )
        goto LABEL_21;
      v17 = v29;
      v16 = *(WNF_CHANGE_STAMP **)v16;
    }
    if ( (a3 & 0x100000) == 0 )
    {
      sub_1405B3268(&StartContext, v12, v12);
      sub_14028CE10((__int64)&StartContext, v12);
    }
    sub_1405835E0(v5, v12, (void **)&v32, (__int64 *)&v29, a3, (__int64 ***)v25);
    sub_14081DDB0(&StartContext, 1);
    if ( (a3 & 0x100000) == 0 )
    {
      v18 = -1;
      if ( qword_140C590D0 <= 0xFFFFFFFF )
        v18 = qword_140C590D0;
      MEMORY[0xFFFFF780000002E8] = v18;
    }
    v19 = sub_14056AF98(v5, v5 + v12 - 1, 4LL);
    v9 = v19;
    if ( v19 < 0 )
      KeBugCheckEx(0x1Au, 0x61A02uLL, v5, v5 + v12, v19);
    v8 = v31;
  }
  sub_140582D7C(v5, v12, (unsigned __int16 *)&StartContext, a3, 0LL, 0LL);
  sub_140583778(v5, v12, 0);
  if ( (a3 & 0x20) != 0 )
  {
    qword_140C54FD0 += v12;
    if ( (unsigned __int64)qword_140C54FD0 >= 0x5555 && !byte_140C5504C )
    {
      stru_140C54FB0.List.Flink = 0LL;
      stru_140C54FB0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1403B7CB0;
      stru_140C54FB0.Parameter = &StartContext;
      ExQueueWorkItem(&stru_140C54FB0, DelayedWorkQueue);
      byte_140C5504C = 1;
    }
  }
  if ( !v8 )
  {
    if ( stru_140C51E68.Header.SignalState && (dword_140D06880 & 0x30u) >= 0x20 )
      ZwUpdateWnfStateData(&stru_1400148A0, 0LL, 0, 0LL, 0LL, 0, 0);
    KePulseEvent(qword_140C550C8, 0, 0);
    if ( (a3 & 0x10000) != 0 )
    {
      sub_1405BF2A0((__int64)v7, v5, v12);
      sub_14096A988((_DWORD)v7, v5, v12, 0, 2 - ((a3 & 0x200) != 0), 1);
    }
    if ( (a3 & 0x200000) == 0 )
    {
      sub_14026A230();
      sub_1405B2400(v5, v12);
    }
  }
LABEL_49:
  if ( v7 == &StartContext )
  {
    v20 = &StartContext;
  }
  else
  {
    sub_140583A70();
    v20 = v7;
  }
  sub_14036071C((__int64)v20, (__int64)CurrentThread);
  if ( v32 )
    ExFreePoolWithTag(v32 - 16, 0);
  if ( !v29 )
    goto LABEL_57;
  v21 = v29 - 4;
  while ( 1 )
  {
    ExFreePoolWithTag(v21, 0);
LABEL_57:
    v21 = *(WNF_CHANGE_STAMP **)v25;
    if ( *(WNF_CHANGE_STAMP **)v25 == v25 )
      break;
    if ( *(WNF_CHANGE_STAMP **)(*(_QWORD *)v25 + 8LL) != v25
      || (v22 = **(_QWORD **)v25, *(_QWORD *)(**(_QWORD **)v25 + 8LL) != *(_QWORD *)v25) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v25 = **(_QWORD **)v25;
    *(_QWORD *)(v22 + 8) = v25;
  }
  if ( v23 )
    sub_14023FCF0(v23);
  if ( v9 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x200002) == 0 )
    sub_1405531C0();
  return (unsigned int)v9;
}
