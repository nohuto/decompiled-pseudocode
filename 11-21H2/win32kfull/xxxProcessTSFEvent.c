/*
 * XREFs of xxxProcessTSFEvent @ 0x1C01E55A8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00741F8 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0074860 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z @ 0x1C01E523C (-TSFRangeFromEvent@@YAKKW4TSFLocality@@@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C01E52B8 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 */

void __fastcall xxxProcessTSFEvent(struct tagNOTIFY *a1)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // r9
  int v7; // r8d

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = *((_DWORD *)a1 + 7);
  *((_QWORD *)a1 + 8) = ThreadWin32Thread;
  TSFRangeFromEvent(v3, 1);
  v5 = TSFRangeFromEvent(v4, 0);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 448) + 24LL) & (v5 | v7) & 0x1703) != 0 )
    xxxCallTSFNotifyHook(a1);
  *((_QWORD *)a1 + 8) = 0LL;
  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  RemoveNotify((struct tagNOTIFY ***)a1);
}
