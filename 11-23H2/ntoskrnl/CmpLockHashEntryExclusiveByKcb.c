/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x14076A4D0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDrainDelayDerefContext @ 0x14022D4F0 (CmpDrainDelayDerefContext.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AB10 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x14076A58C (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned __int64 *)(*(_QWORD *)(v2 + 1648)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v2 + 1656) - 1) & ((unsigned int)(101027
                                                                                        * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
  v4 = KeAbPreAcquire((__int64)v3, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  v3[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
