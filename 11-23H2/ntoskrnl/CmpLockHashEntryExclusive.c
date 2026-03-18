/*
 * XREFs of CmpLockHashEntryExclusive @ 0x14076A418
 * Callers:
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x14076A58C (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 result; // rax

  v2 = (unsigned int)BugCheckParameter4;
  v4 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1656) - 1) & ((101027
                                                                                          * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)BugCheckParameter4 ^ ((unsigned int)BugCheckParameter4 >> 9))) >> 9))));
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v2);
  return result;
}
