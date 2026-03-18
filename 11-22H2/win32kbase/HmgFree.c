/*
 * XREFs of HmgFree @ 0x1C0088BA0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     FreeObject @ 0x1C0088C60 (FreeObject.c)
 */

__int64 __fastcall HmgFree(__int64 a1)
{
  unsigned int v1; // ebx
  struct OBJECT *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v1 = a1;
  v2 = 0LL;
  SGDGetSessionState(a1);
  GreAcquireHmgrSemaphore(v3);
  v9 = 0LL;
  v10 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v9, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v10 )
  {
    v2 = HANDLELOCK::pObj((HANDLELOCK *)&v9);
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v9, v5, v6, v7);
    if ( v10 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
  }
  result = GreReleaseHmgrSemaphore(v4);
  if ( v2 )
    return FreeObject(v2);
  return result;
}
