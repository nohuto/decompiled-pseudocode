/*
 * XREFs of MiValidFault @ 0x140333770
 * Callers:
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 * Callees:
 *     MiProcessWsInSwapFault @ 0x140200008 (MiProcessWsInSwapFault.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MiLockPageAndSetDirty @ 0x140217514 (MiLockPageAndSetDirty.c)
 *     KeIsUserVaAccessAllowed @ 0x140249CB0 (KeIsUserVaAccessAllowed.c)
 *     MiTbFlushType @ 0x14025BD3C (MiTbFlushType.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiUpdatePrefetchPriority @ 0x140333C6C (MiUpdatePrefetchPriority.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140333D90 (MiCheckAndUpdateIoAttribution.c)
 *     KeInvalidAccessAllowed @ 0x140341F80 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140357628 (MiCheckSystemNxFault.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiValidVirtualizationFault @ 0x14046CD22 (MiValidVirtualizationFault.c)
 *     MiRotatedToFrameBuffer @ 0x1406333A4 (MiRotatedToFrameBuffer.c)
 *     MI_IS_PTE_SHADOW_STACK @ 0x140645C80 (MI_IS_PTE_SHADOW_STACK.c)
 *     MiCanGrantExecute @ 0x140646014 (MiCanGrantExecute.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406468BC (MiKernelWriteToExecutableMemory.c)
 *     MiSetFaultPacketDirectives @ 0x140646CAC (MiSetFaultPacketDirectives.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, signed __int64 a2)
{
  ULONG_PTR v2; // r11
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rsi
  __int64 v5; // r12
  volatile signed __int64 *v6; // r12
  _KPROCESS *Process; // r14
  ULONG_PTR v8; // r13
  signed __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // r10d
  ULONG_PTR v16; // r14
  int v17; // edx
  __int64 v18; // r9
  signed __int64 v19; // rcx
  __int64 v20; // rbx
  int v22; // eax
  __int64 v23; // r8
  _BYTE *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  ULONG_PTR v27; // rsi
  __int64 **Address; // rdi
  int v29; // edx
  _BYTE *v30; // r14
  _BYTE *v31; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v38; // rcx
  signed __int64 v40; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h]

  v40 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL;
  BugCheckParameter1 = *(_QWORD *)a1;
  BugCheckParameter3 = v3;
  v6 = (volatile signed __int64 *)(v5 - 0x98000000000LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = v3 & 1;
  if ( (v3 & 1) == 0 )
  {
LABEL_2:
    v9 = v40;
    if ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v40 & 0x80u) != 0LL )
    {
      if ( (v3 & 1) != 0 )
      {
        v31 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 || *v31 == 3 || *v31 == 6 )
          return (unsigned int)-1073741819;
LABEL_94:
        KeBugCheckEx(0x50u, v2, v4, v3, 8uLL);
      }
      if ( !(unsigned __int8)KeInvalidAccessAllowed(v3, 0LL) )
      {
        v2 = BugCheckParameter1;
        v3 = BugCheckParameter3;
        goto LABEL_94;
      }
      return (unsigned int)-1073741819;
    }
    v10 = 0;
    if ( (v40 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
      return (unsigned int)-1073741819;
    if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0
      && v3
      && v2 < 0xFFFF800000000000uLL
      && (v3 & 1) == 0
      && !KeIsUserVaAccessAllowed(v3) )
    {
      if ( !(unsigned __int8)KeInvalidAccessAllowed(v23, 0LL) )
        KeBugCheckEx(0x50u, BugCheckParameter1, v4, BugCheckParameter3, 0xFuLL);
      v2 = BugCheckParameter1;
    }
    if ( (v4 & 2) != 0 )
    {
      if ( (v9 & 0x200) == 0 )
      {
        if ( (v9 & 0x800) == 0 )
          return (unsigned int)-1073741819;
        if ( v9 >= 0
          && (v9 & 0x42) == 0
          && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0
          && v2 < 0xFFFF800000000000uLL )
        {
          CurrentThread = KeGetCurrentThread();
          if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
          {
            if ( (BYTE1(CurrentThread[1].Queue) & 0x10) == 0 )
              return (unsigned int)-1073739997;
          }
          else if ( (BYTE1(CurrentThread[1].Queue) & 0x20) == 0 )
          {
            v9 = v40;
            v10 = MiKernelWriteToExecutableMemory(a1, v40, Process);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            goto LABEL_9;
          }
          v9 = v40;
        }
LABEL_9:
        v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL;
        if ( v11 <= qword_140C65BA0 && _bittest64((const signed __int64 *)(48 * v11 - 0x21FFFFFFFFD8LL), 0x36u) )
        {
          v12 = 48 * v11 - 0x220000000000LL;
          v13 = *(_QWORD *)(v12 + 16);
          v14 = v12 + 16;
          if ( (unsigned __int64)(v12 + 16) >= 0xFFFFF6FB7DBED000uLL
            && v14 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0x600000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v13 & 1) != 0
              && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v34 = *((_QWORD *)&Flink->Flink + ((v14 >> 3) & 0x1FF));
                if ( (v34 & 0x20) != 0 )
                  v13 |= 0x20uLL;
                if ( (v34 & 0x42) != 0 )
                  v13 |= 0x42uLL;
              }
            }
            v9 = v40;
          }
          if ( (v13 & 1) == 0
            && (!v13 || (!qword_140C65B40 || (qword_140C65B40 & v13) != 0) && (v13 & 0x400) == 0)
            && (v13 & 4) != 0 )
          {
            MiLockPageAndSetDirty(v12, 1);
          }
          if ( *(__int64 *)(v12 + 40) < 0 && (*(_DWORD *)v14 & 0x400LL) != 0 )
            MiCheckAndUpdateIoAttribution(v12);
        }
        v2 = BugCheckParameter1;
        goto LABEL_21;
      }
      v22 = MiCopyOnWrite(v2, (unsigned __int64)v6, 0xFFFFFFFFFFFFFFFFuLL, 0);
      v10 = v22;
      if ( v22 < 0 )
      {
        MiSetFaultPacketDirectives(a1, (unsigned int)v22);
        return v10;
      }
      v10 = 274;
LABEL_40:
      v16 = BugCheckParameter3;
      goto LABEL_33;
    }
    if ( (v4 & 0x10) != 0 )
    {
      if ( v9 < 0 )
      {
        if ( !(unsigned int)MiCanGrantExecute(Process, v2) )
          return (unsigned int)-1073741819;
        v35 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL;
        if ( v35 > qword_140C65BA0 || !_bittest64((const signed __int64 *)(48 * v35 - 0x21FFFFFFFFD8LL), 0x36u) )
          return (unsigned int)-1073741819;
        v36 = v9 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (MiFlags & 0x300) != 0 )
          v36 |= 0x20uLL;
        MiWriteValidPteNewProtection((unsigned __int64)v6, v36);
        if ( (MiFlags & 0x300) == 0 )
          KeFlushSingleTb(BugCheckParameter1, 1u, 0);
        goto LABEL_40;
      }
      if ( (*(_DWORD *)(a1 + 80) & 0x20) == 0 )
      {
        MiCheckSystemNxFault(a1, v9, 5LL);
        v2 = BugCheckParameter1;
      }
    }
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 && !(unsigned int)MI_IS_PTE_SHADOW_STACK(&v40) )
      return (unsigned int)-1073741819;
LABEL_21:
    v15 = 0;
    v16 = BugCheckParameter3;
    v17 = 0;
    v18 = 0LL;
    v19 = v9;
    if ( (v9 & 0x20) != 0 )
    {
      if ( (!v8 || *(_BYTE *)(BugCheckParameter3 & 0xFFFFFFFFFFFFFFFEuLL) != 5) && (MiFlags & 0x300) == 0 )
        v17 = 1;
    }
    else
    {
      v19 = v9 | 0x20;
      v18 = 1LL;
    }
    if ( (*(_QWORD *)(a1 + 8) & 2) != 0 )
    {
      if ( (v19 & 0x42) == 0 )
      {
        if ( (MiFlags & 0x300) != 0 )
        {
LABEL_28:
          v19 |= 0x42uLL;
          goto LABEL_29;
        }
LABEL_80:
        v17 = 1;
        goto LABEL_28;
      }
      if ( (v19 & 0x42) == 0x40 )
        goto LABEL_80;
    }
    if ( !(_DWORD)v18 )
    {
LABEL_32:
      if ( v17 && (MiFlags & 0x100) == 0 )
      {
        v20 = a1;
        if ( (MiFlags & 0x200) == 0 )
        {
          v38 = *(_QWORD *)(a1 + 56);
          if ( v38 )
            v15 = MiTbFlushType(v38);
          KeFlushSingleTb(v2, v15, 0);
        }
        goto LABEL_34;
      }
LABEL_33:
      v20 = a1;
LABEL_34:
      if ( v8 )
      {
        v30 = (_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *v30 == 5 )
          MiValidVirtualizationFault(v20, v30, v6, v18);
      }
      return v10;
    }
LABEL_29:
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( v9 != _InterlockedCompareExchange64(v6, v19, v9) )
      goto LABEL_33;
    goto LABEL_32;
  }
  v24 = (_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiUpdatePrefetchPriority(v24, v2, 0LL);
    return 0LL;
  }
  else
  {
    if ( *v24 != 3 )
      goto LABEL_2;
    v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v40) >> 12) & 0xFFFFFFFFFFLL;
    if ( v25 <= qword_140C65BA0 )
    {
      v26 = 6 * v25;
      if ( _bittest64((const signed __int64 *)(48 * v25 - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        MiLockVadTree(1);
        v27 = BugCheckParameter1;
        Address = MiLocateAddress(BugCheckParameter1);
        MiUnlockVadTree(1, 0x11u);
        if ( Address )
        {
          v29 = *((_DWORD *)Address + 12);
          if ( ((_BYTE)Address[6] & 0x70) != 0x30
            && (v29 & 0x70) != 0x10
            && (v29 & 0x70) != 0x50
            && ((v29 & 0x200000) == 0 || (v29 & 0x800000) == 0 && (v29 & 0x180000u) < 0x100000)
            && ((v29 & 0x70) != 0x40 || !(unsigned int)MiRotatedToFrameBuffer(v6)) )
          {
            MiProcessWsInSwapFault(*(_QWORD *)(a1 + 56), 8 * v26 - 0x220000000000LL, v27, 0LL);
          }
        }
      }
    }
    return 0LL;
  }
}
