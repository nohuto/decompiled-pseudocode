/*
 * XREFs of MiInitializeWorkingSetList @ 0x140223424
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406B2ACC (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407A9DB8 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x14026BA60 (MiAllocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  char v6; // bl
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v5) = (*(_BYTE *)(a1 + 184) ^ a3) & 7;
  *(_BYTE *)(a1 + 184) ^= v5;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) |= 0x80u;
      v5 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 120) = v5;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 392) = 1LL;
    v6 = MiLockWorkingSetShared(a1);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v7 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    MiAllocateWsle(a1, 2109661032, 48 * (v7 >> 12), 0, ZeroPte, 0, 0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v8) = v6;
    LOBYTE(v5) = MiUnlockWorkingSetShared(a1, v8);
  }
  return v5;
}
