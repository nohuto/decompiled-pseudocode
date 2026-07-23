/*
 * XREFs of MiSharedVaToPartition @ 0x1402E2A18
 * Callers:
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     MiCreateSharedZeroPages @ 0x1402E1050 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14020AB68 (MiSessionLookupImage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020AE38 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateAddress @ 0x140217240 (MiLocateAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x14027D190 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 */

void *__fastcall MiSharedVaToPartition(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  _KPROCESS *v11; // rcx
  _QWORD *CloneAddress; // rax
  __int64 **Address; // rdi
  __int64 *v14; // rax
  char v15; // al
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r8
  _KPROCESS *Process; // rcx
  _QWORD *v19; // rax

  if ( !byte_140C67DD4 )
    return &MiSystemPartition;
  v7 = *(_QWORD *)(qword_140C673C8 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v8 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = v8;
  if ( (v8 & 0x400) != 0 && MI_PROTO_FORMAT_COMBINED(v8, v9) )
    return **(void ***)(((a3 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( a2 >= 0xFFFF800000000000uLL )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    if ( v15 == 4 )
    {
      v16 = P;
      while ( v16 )
      {
        v17 = v16[11] & 0xFFFFFFFFFFFFF000uLL;
        if ( a2 < v17 + v16[4] )
        {
          if ( a2 >= v17 )
            break;
          v16 = (_QWORD *)*v16;
        }
        else
        {
          v16 = (_QWORD *)v16[1];
        }
      }
      if ( !v16 )
        return (void *)v7;
      v14 = (__int64 *)v16[6];
    }
    else
    {
      if ( v15 != 1 )
        return (void *)v7;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[1].Affinity.StaticBitmap[25] )
        return (void *)v7;
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        return (void *)v7;
      v19 = MiSessionLookupImage(a2);
      if ( !v19 )
        return (void *)v7;
      v14 = v19 + 10;
    }
LABEL_31:
    if ( *v14 )
      return *(void **)(qword_140C673C8 + 8LL * (*(_WORD *)(*v14 + 60) & 0x3FF));
    return (void *)v7;
  }
  if ( MiIsPrototypePteVadLookup(v10) )
    goto LABEL_13;
  v11 = KeGetCurrentThread()->ApcState.Process;
  if ( !v11[1].Affinity.StaticBitmap[12] || (CloneAddress = MiLocateCloneAddress((__int64)v11, a3)) == 0LL )
  {
    v7 = 0LL;
    goto LABEL_13;
  }
  v7 = *(_QWORD *)(CloneAddress[7] + 24LL);
  if ( !v7 )
  {
LABEL_13:
    MiLockVadTree(1);
    Address = MiLocateAddress(a2);
    MiUnlockVadTree(1, 0x11u);
    if ( !Address )
      return (void *)v7;
    if ( ((_DWORD)Address[6] & 0x200000) != 0 )
      return (void *)v7;
    v14 = Address[9];
    if ( !v14 )
      return (void *)v7;
    goto LABEL_31;
  }
  return (void *)v7;
}
