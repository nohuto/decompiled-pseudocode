/*
 * XREFs of CmpLockHashEntryShared @ 0x1407696CC
 * Callers:
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407694D0 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x14076A77C (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  signed __int64 *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 result; // rax

  v2 = (unsigned int)BugCheckParameter4;
  v4 = (signed __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                                        * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))));
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0LL, v5, (__int64)v4);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 9uLL, v2);
  return result;
}
