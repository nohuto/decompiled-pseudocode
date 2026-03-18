/*
 * XREFs of xxxMNSetCapture @ 0x1C0233B40
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C021C050 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C021C1CC (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 */

void __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct tagWND *v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  ThreadLock(*(_QWORD *)(**(_QWORD **)a1 + 8LL), (__int64 *)&v8);
  xxxCapture(gptiCurrent, *(struct tagWND **)(**(_QWORD **)a1 + 8LL), 4);
  ThreadUnlock1(v5, v4, v6);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( gpqForeground )
  {
    v7 = *(struct tagWND **)(gpqForeground + 112LL);
    if ( v7 )
    {
      if ( *((_QWORD *)v7 + 2) == gptiCurrent )
        xxxWindowEvent(0x80000004, v7, 0, 1u, 33);
    }
  }
}
