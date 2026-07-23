/*
 * XREFs of sub_14069B63C @ 0x14069B63C
 * Callers:
 *     sub_14069B200 @ 0x14069B200 (sub_14069B200.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14069B63C(__int64 a1, _DWORD *a2, int a3, _DWORD *a4, char a5)
{
  __int64 v6; // rax
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // edi
  __int128 Event; // [rsp+30h] [rbp-28h] BYREF
  __int128 Event_16; // [rsp+40h] [rbp-18h]

  Event = 0LL;
  Event_16 = 0LL;
  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    DWORD2(Event_16) = *(_DWORD *)v6;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    DWORD2(Event_16) = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == DWORD2(Event_16) )
    return 0LL;
  KeInitializeEvent((PRKEVENT)&Event, SynchronizationEvent, 0);
  v8 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v9 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == DWORD2(Event_16) )
  {
    v9 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 352);
    sub_1402AFC00(a1 + 352);
    while ( 1 )
    {
      v9 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v9 )
        break;
      if ( (*((_DWORD *)KeGetCurrentThread() + 344) & 1) != 0 )
      {
        v9 = -1073741749;
        break;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 352);
  sub_1402AFC00(a1 + 352);
  return v9;
}
