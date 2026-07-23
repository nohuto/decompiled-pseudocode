/*
 * XREFs of MiTerminateWsle @ 0x140274AE0
 * Callers:
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiRemoveSystemImagePage @ 0x140351038 (MiRemoveSystemImagePage.c)
 *     MiDeleteEmptyPageTable @ 0x140357E80 (MiDeleteEmptyPageTable.c)
 * Callees:
 *     MiGetWsleContents @ 0x140216FB0 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x1402188A0 (MiRebuildPageTableLeafAges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiUnlockWsle @ 0x1402A2990 (MiUnlockWsle.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5FD0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiTerminateWsle(__int64 a1, unsigned __int64 a2, char a3, int *a4)
{
  int v4; // ebp
  BOOL v7; // r14d
  int v8; // r12d
  unsigned __int64 v9; // rdi
  _KPROCESS *Process; // rcx
  _KPROCESS *v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int8 WsleContents; // si
  int v14; // eax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  _KPROCESS *v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v7 = 1;
  v8 = 10;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = (_KPROCESS *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v29 = Process;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = *(_QWORD *)v9;
    v30 = 1;
    v8 = 10 - ((a3 & 2) != 0);
    if ( MiPteInShadowRange(v9) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 && (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        Flink = Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v24 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v25 = v12 | 0x20;
          if ( (v24 & 0x20) == 0 )
            v25 = v12;
          v12 = v25;
          if ( (v24 & 0x42) != 0 )
            v12 = v25 | 0x42;
        }
      }
    }
    v11 = v29;
    WsleContents = HIBYTE(v12) & 0xF | (16 * ((v12 >> 60) & 7));
    v7 = (v29->DirectoryTableBase & 0x8000000000000000uLL) == 0LL;
    if ( (HIBYTE(v12) & 0xF) == 8 )
    {
      MiUnlockWsle(a1, a2);
      WsleContents = MiGetWsleContents(v26, a2);
    }
    v14 = 1;
  }
  else
  {
    v14 = 0;
    WsleContents = (Process->Header.Type >> 1) & 7;
    v30 = 0;
  }
  if ( (a3 & 3) != 0 )
    goto LABEL_18;
  if ( (a3 & 4) != 0 )
  {
    v27 = MI_READ_PTE_LOCK_FREE(v9);
    v14 = v30;
    v15 = v27 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v14 )
  {
    if ( !(unsigned int)MiEvictPageTableLock(a1, v9, v15, 0LL) )
    {
      *a4 = 0;
      return 0LL;
    }
    goto LABEL_17;
  }
  v16 = *(_QWORD *)v9;
  if ( v9 < 0xFFFFF6FB7DBED000uLL || v9 > 0xFFFFF6FB7DBED7F8uLL || !(unsigned int)MiPteHasShadow(Process, v16, v11) )
  {
    v17 = ((unsigned int)MiFlags >> 26) & 3;
    if ( v17 > 1 )
    {
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      goto LABEL_14;
    }
    if ( v17 )
    {
      if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL && (v16 & 0x80u) == 0LL )
        LOBYTE(v16) = 32;
LABEL_14:
      if ( (v16 & 0x20) == 0 )
      {
        if ( (MI_INTERLOCKED_EXCHANGE_PTE(v9, v15) & 0x20) == 0 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
  }
  if ( MiPteInShadowRange(v9) && (unsigned int)MiPteHasShadow(v19, v18, v20) )
  {
    *(_QWORD *)v9 = v15;
    MiWritePteShadow(v9, v15);
  }
  else
  {
    *(_QWORD *)v9 = v15;
  }
LABEL_17:
  v4 = 1;
LABEL_18:
  MiRemoveWsle(a1, a2, 1, WsleContents, v8, v7);
  if ( v30 )
    MiRebuildPageTableLeafAges(v21, a2);
  *a4 = v4;
  return 1LL;
}
