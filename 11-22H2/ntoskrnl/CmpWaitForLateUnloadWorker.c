/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x1402EC614
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1403481B0 (ExBlockOnAddressPushLock.c)
 *     CmUnlockHive @ 0x140748488 (CmUnlockHive.c)
 *     CmLockHive @ 0x1407484C4 (CmLockHive.c)
 */

__int64 __fastcall CmpWaitForLateUnloadWorker(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  ((void (*)(void))CmLockHive)();
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 4800);
    v2 = v4;
    result = CmUnlockHive(a1);
    if ( !v2 )
      break;
    ExBlockOnAddressPushLock(a1 + 4808, a1 + 4800, (unsigned int)&v4, 4, 0LL);
    CmLockHive(a1);
  }
  return result;
}
