/*
 * XREFs of MiReacquireWalkLocks @ 0x14027D2D8
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiQueryEPTAccessedState @ 0x14045BCA2 (MiQueryEPTAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x140582320 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 valid; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
    MiLockWorkingSetShared(v3);
  valid = MiLockLowestValidPageTable(v3, a2 << 25 >> 16, &v10);
  if ( valid == a2 )
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    MiUnlockPageTableInternal(v3, valid);
    if ( !a3 )
    {
      LOBYTE(v9) = *(_BYTE *)(a1 + 7);
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 24), v9);
    }
    return 0LL;
  }
  return result;
}
