/*
 * XREFs of MiInitializeWorkingSetList @ 0x1402A0624
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 */

char __fastcall MiInitializeWorkingSetList(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rax
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // rdx

  v5 = a3 ^ *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v6) = v5 & 7;
  *(_BYTE *)(a1 + 184) ^= v6;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) |= 0x80u;
      v6 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 120) = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 392) = 1LL;
    v7 = MiLockWorkingSetShared(a1);
    MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v8 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
    MiAllocateWsle(a1, 2109661032, 48 * (v8 >> 12), 0, ZeroPte, 0, 0LL);
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v9) = v7;
    LOBYTE(v6) = MiUnlockWorkingSetShared(a1, v9);
  }
  return v6;
}
