/*
 * XREFs of MiMakeProtoPrivate @ 0x1402011DC
 * Callers:
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiMakeProtoPrivate(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int64 v8; // rdx
  int v9; // ebp
  __int64 CloneAddress; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v14 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( _bittest64((const signed __int64 *)(v8 + 40), 0x28u) || *(__int64 *)(v8 + 8) <= 0 )
  {
    CloneAddress = MiLocateCloneAddress(
                     KeGetCurrentThread()->ApcState.Process,
                     *(_QWORD *)(v8 + 8) | 0x8000000000000000uLL);
    v5 = CloneAddress & -(__int64)(*(_QWORD *)(CloneAddress + 96) < *(_QWORD *)(*(_QWORD *)(v12 + 1680) + 344LL));
  }
  v9 = MiCopyOnWrite((__int64)(a3 << 25) >> 16);
  if ( v9 < 0 )
  {
    MiUnlockPageTableInternal(a1, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LOBYTE(v13) = a2;
    MiUnlockWorkingSetShared(a1, v13);
    MiCopyOnWriteCheckConditions(a1, (unsigned int)v9);
    return 2LL;
  }
  else
  {
    LOBYTE(v4) = v5 != 0;
    return v4;
  }
}
