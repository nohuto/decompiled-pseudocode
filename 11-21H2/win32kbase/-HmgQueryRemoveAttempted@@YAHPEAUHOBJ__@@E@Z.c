/*
 * XREFs of ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C016BE10
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C002EB80 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall HmgQueryRemoveAttempted(struct HOBJ__ *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  v3 = (unsigned int)a1;
  v4 = 0;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  v9 = 0LL;
  v10 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v9, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 1LL, 0, 0);
  if ( v10 )
  {
    if ( *(_BYTE *)(v9 + 14) == 1 && *(_WORD *)(v9 + 12) == HIWORD(v3) )
      v4 = (*(unsigned __int8 *)(v9 + 15) >> 3) & 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
    if ( v10 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
  }
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v4;
}
