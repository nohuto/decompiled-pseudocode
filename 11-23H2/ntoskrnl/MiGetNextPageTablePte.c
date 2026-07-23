/*
 * XREFs of MiGetNextPageTablePte @ 0x14025D330
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x1402E5CB0 (MiGetLeafVa.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     MiIsPdeOrAboveAccessible @ 0x14034F6F0 (MiIsPdeOrAboveAccessible.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     MiFlushAllFilesystemPages @ 0x1406297E4 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiGetNextPageTablePte(int *a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  __int64 v7; // rax
  int v8; // ebx
  __int64 v10; // r15
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (__fastcall *v14)(int *); // rax
  __int64 BugCheckParameter4; // rdi
  unsigned __int64 LeafVa; // rbx
  int v17; // eax
  ULONG_PTR v18; // rsi
  _OWORD v19[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v20; // [rsp+50h] [rbp-68h]
  __int128 v21; // [rsp+60h] [rbp-58h]
  __int128 v22; // [rsp+70h] [rbp-48h]
  __int128 v23; // [rsp+80h] [rbp-38h]
  __int64 v24; // [rsp+90h] [rbp-28h]
  __int64 v25; // [rsp+D8h] [rbp+20h] BYREF

  v4 = a3;
  v5 = (unsigned __int64)a2;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( a3 == 3 )
    v7 = MI_READ_PTE_LOCK_FREE(a2);
  else
    v7 = *a2;
  v25 = v7;
  if ( !v7 )
    return !(_DWORD)v4 && (*a1 & 1) != 0;
  if ( (v7 & 1) == 0 )
  {
    if ( (int)v4 >= 1 )
    {
      if ( !(unsigned int)MiIsPdeOrAboveAccessible(v5) )
        goto LABEL_28;
    }
    else if ( !(_DWORD)v4 )
    {
      return 1LL;
    }
    if ( (*a1 & 0x80u) == 0 )
    {
      v13 = *((_QWORD *)a1 + 2);
      if ( v13 )
        MiFlushTbList(v13);
      v14 = (void (__fastcall *)(int *))*((_QWORD *)a1 + 20);
      if ( v14 )
        v14(a1);
      if ( (a1[1] & 1) == 0 )
        MiReleaseWalkLocks(a1);
      BugCheckParameter4 = (__int64)(v5 << 25) >> 16;
      LeafVa = MiGetLeafVa(BugCheckParameter4);
      DWORD2(v20) = a1[3];
      v17 = MmAccessFault(2uLL, BugCheckParameter4, 0, (ULONG_PTR)v19 + 1);
      v18 = v17;
      if ( v17 >= 0 )
        return 1LL;
      if ( LeafVa >= 0xFFFF800000000000uLL || !BYTE12(v20) )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v18, (ULONG_PTR)KeGetCurrentThread()->ApcState.Process, BugCheckParameter4);
      }
    }
    return 0LL;
  }
  if ( v5 == 0xFFFFF6FB7DBEDF68uLL )
    return 0LL;
  if ( (v7 & 0x80u) != 0LL )
  {
LABEL_28:
    if ( (*a1 & 0x40) == 0 )
      return 1LL;
    v12 = *((_QWORD *)a1 + 21);
    for ( *(_DWORD *)v12 = v4; (_DWORD)v4; LODWORD(v4) = v4 - 1 )
      v5 = (__int64)(v5 << 25) >> 16;
    if ( v5 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
      v5 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(v12 + 8) = v5;
    return 3LL;
  }
  v8 = *a1;
  if ( (*a1 & 0x200) != 0
    && qword_140C69758 != (PVOID)qword_140C69760
    && (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v25) >> 12) & 0xFFFFFFFFFFLL) == *(&qword_140C69758 + v4) )
  {
    return 0LL;
  }
  if ( (int)v4 > ((*((unsigned __int8 *)a1 + 4) >> 2) & 7) )
    return 2LL;
  if ( (v8 & 0x40) == 0 )
    return 1LL;
  v10 = *((_QWORD *)a1 + 21);
  if ( (v8 & 4) != 0 )
  {
    MiLockPageTableInternal(*((_QWORD *)a1 + 3), v5, 0, a4);
    MiUnlockPageTableInternal(*((_QWORD *)a1 + 3), ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *((_QWORD *)a1 + 6) = v5;
  }
  v11 = (__int64)(v5 << 25) >> 16;
  if ( v11 < ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8uLL) - 0x98000000000LL )
    v11 = ((*((_QWORD *)a1 + 4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(v10 + 8) = v11;
  return 3LL;
}
