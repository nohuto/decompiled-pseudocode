/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x1C00741F8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x1C01E55A8 (xxxProcessTSFEvent.c)
 */

HANDLE xxxFlushDeferredWindowEvents()
{
  HANDLE result; // rax
  int v1; // ebx
  __int64 i; // rcx
  int v3; // r8d
  bool v4; // zf

  if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
    __int2c();
  result = PsGetCurrentThreadId();
  v1 = (int)result;
LABEL_4:
  for ( i = gPendingNotifiesList; i != gPendingNotifiesList; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 56);
    if ( (v3 & 2) != 0 && *(_DWORD *)(i + 48) == v1 )
    {
      v4 = *(_DWORD *)(i + 24) == 0;
      *(_DWORD *)(i + 56) = v3 & 0xFFFFFFFD;
      if ( v4 )
        result = (HANDLE)xxxProcessNotifyWinEvent(i);
      else
        result = (HANDLE)xxxProcessTSFEvent((struct tagNOTIFY *)i);
      goto LABEL_4;
    }
  }
  return result;
}
