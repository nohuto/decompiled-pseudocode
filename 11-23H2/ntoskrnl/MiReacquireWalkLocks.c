/*
 * XREFs of MiReacquireWalkLocks @ 0x14046B9C8
 * Callers:
 *     MiQueryEPTAccessedState @ 0x14046C08C (MiQueryEPTAccessedState.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14025A290 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1403195C0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiReacquireWalkLocks(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int64 valid; // rax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
    MiLockWorkingSetShared(v4);
  valid = MiLockLowestValidPageTable(v4, a2 << 25 >> 16, &v10, a4);
  if ( valid == a2 )
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    MiUnlockPageTableInternal(v4, valid);
    if ( !a3 )
      MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 7));
    return 0LL;
  }
  return result;
}
