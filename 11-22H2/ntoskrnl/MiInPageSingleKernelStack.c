/*
 * XREFs of MiInPageSingleKernelStack @ 0x14021B110
 * Callers:
 *     KiInSwapKernelStacks @ 0x1402227D4 (KiInSwapKernelStacks.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402194A8 (MiSetPfnIdentity.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14021B4C4 (MiReleaseWsSwapReservationPfn.c)
 *     MiSetPfnKernelStack @ 0x14021B4F8 (MiSetPfnKernelStack.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MiDeleteKernelStackNode @ 0x14062CD5C (MiDeleteKernelStackNode.c)
 *     MiKernelStackVaToStackNode @ 0x14062D2AC (MiKernelStackVaToStackNode.c)
 *     MiLogKernelStackEvent @ 0x140644F74 (MiLogKernelStackEvent.c)
 */

void *__fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  int v4; // r15d
  __int64 v5; // r13
  __int64 v6; // r8
  ULONG_PTR v7; // r13
  ULONG_PTR v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 v15; // r15
  __int64 *v16; // r14
  __int64 v17; // rax
  bool v18; // cc
  unsigned int v19; // ebx
  ULONG_PTR v20; // rdi
  ULONG_PTR v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rsi
  unsigned __int64 v24; // r13
  __int64 v25; // rbx
  _QWORD *v26; // rbx
  void *result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v40; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  void *v43; // [rsp+60h] [rbp-A0h]
  char *v44; // [rsp+68h] [rbp-98h]
  _QWORD *v45; // [rsp+70h] [rbp-90h]
  _QWORD v46[14]; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v47; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-8h] BYREF

  v45 = a2;
  BugCheckParameter3 = a1;
  memset(v46, 0, 0x68uLL);
  v4 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL) + 1;
  v5 = (a2[1] >> 9) & 0x7FFFFFFFF8LL;
  LODWORD(v39) = v4;
  v6 = *a2;
  v7 = v5 - 0x98000000000LL;
  v40 = v7;
  v8 = (((unsigned __int64)(v6 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)(a1 + 544);
  v37 = 0LL;
  v43 = *(void **)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(v10 + 1838));
  if ( v43 == &MiSystemPartition )
  {
    P = 0LL;
  }
  else
  {
    result = (void *)MiKernelStackVaToStackNode(v6 - 1);
    P = result;
    if ( !result )
      return result;
  }
  MI_READ_PTE_LOCK_FREE(v9);
  BugCheckParameter1 = 0LL;
  v12 = MiSwizzleInvalidPte(128LL);
  if ( v11 != v12 )
    BugCheckParameter1 = (v11 & 0x800) == 0;
  v13 = MiSwizzleInvalidPte(768LL);
  v14 = MiSwizzleInvalidPte(992LL);
  if ( v7 <= v8 )
  {
    v15 = v37;
    v16 = &v48;
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE(v7);
      v37 = v17;
      if ( v17 != v14 && v17 != v12 && v17 != v13 && (v17 & 0x800) == 0 )
      {
        ++v15;
        *v16 = 4096LL;
        *(v16 - 1) = (__int64)(v7 << 25) >> 16;
        v16 += 2;
        if ( v15 == 18 )
          break;
      }
      v7 += 8LL;
    }
    while ( v7 <= v8 );
    v37 = v15;
    v18 = v15 <= 1;
    v4 = v39;
    if ( !v18 )
      MiPrefetchVirtualMemory(v37, &v47, 1LL);
  }
  v19 = 0;
  v39 = 0LL;
  v48 = 4096LL;
  v20 = (__int64)(v8 << 25) >> 16;
  v44 = (char *)v46 + 1;
LABEL_12:
  v21 = BugCheckParameter3;
  while ( v8 >= v40 )
  {
    v37 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v37 & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v8, BugCheckParameter3, 0LL);
    v47 = v20;
    v46[3] = 0LL;
    v46[4] = 0LL;
    LOWORD(v46[0]) = 4;
    v46[1] = &v47;
    v46[2] = 1LL;
    v46[6] = v21;
    LODWORD(v46[5]) = v4;
    MmAccessFault(2uLL, v20);
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
      while ( 1 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v8);
        v22 = v37;
        v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v37) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        v24 = (unsigned __int8)MiLockPageInline(v23);
        if ( v22 == MI_READ_PTE_LOCK_FREE(v8) )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v24 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v32 = (v31 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v24);
      }
      MiSetPfnKernelStack(v23, BugCheckParameter3);
      MiSetPfnIdentity(v23, 2);
      *(_BYTE *)(v23 + 35) = *(_BYTE *)(v23 + 35) & 0xF8 | 5;
      v25 = MiReleaseWsSwapReservationPfn(v23);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v32 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(v24);
      if ( v25 )
        MiReleasePageFileInfo(v43, v25, 0LL);
      v8 -= 8LL;
      v20 -= 4096LL;
      v19 = ++v39;
      goto LABEL_12;
    }
  }
  if ( P )
    MiDeleteKernelStackNode(P);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v20 + 4096, v19, 1LL);
  v26 = v45;
  result = (void *)v45[2];
  if ( *((_QWORD *)result - 1) != v21 )
  {
    MiFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, BugCheckParameter1, *(_QWORD *)(v26[2] - 8LL), 0LL, v26[2]);
  }
  return result;
}
