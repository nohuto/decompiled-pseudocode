/*
 * XREFs of sub_140255A78 @ 0x140255A78
 * Callers:
 *     sub_1406DDFF0 @ 0x1406DDFF0 (sub_1406DDFF0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406DE800 @ 0x1406DE800 (sub_1406DE800.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140255A78(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE v3; // dl
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // edx
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  void *Pool2; // rbx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE WorkItem[80]; // [rsp+50h] [rbp-58h] BYREF

  *(_OWORD *)Src = 0LL;
  memset(WorkItem, 0, sizeof(WorkItem));
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v3 = *((_BYTE *)CurrentThread + 562);
  if ( v3 )
  {
    if ( !SeSinglePrivilegeCheck(PrivilegeValue, v3) )
      return 3221225569LL;
    if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
      return 0LL;
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a1;
    v6 = *(_DWORD *)v5;
    LODWORD(Src[0]) = v6;
    v7 = *(void **)(v5 + 8);
    Src[1] = v7;
    if ( !(_WORD)v6 )
      return 3221225485LL;
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)v7 + (unsigned __int16)v6;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v7 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 538996553LL, v4);
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    Src[1] = Pool2;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    Pool2 = 0LL;
  }
  WorkItem[34] = 6;
  *(_DWORD *)&WorkItem[36] = 0;
  *(_QWORD *)&WorkItem[48] = &WorkItem[40];
  *(_QWORD *)&WorkItem[40] = &WorkItem[40];
  *(_QWORD *)&WorkItem[56] = 0LL;
  *(_QWORD *)&WorkItem[64] = Src;
  if ( *((PEPROCESS *)CurrentThread + 23) == PsInitialSystemProcess )
  {
    sub_1406DE800(WorkItem);
  }
  else
  {
    *(_QWORD *)&WorkItem[16] = sub_1406DE800;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    *(_QWORD *)WorkItem = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], UserRequest, 0, 0, 0LL);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return *(unsigned int *)&WorkItem[72];
}
