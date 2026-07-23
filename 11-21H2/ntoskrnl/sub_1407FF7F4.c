/*
 * XREFs of sub_1407FF7F4 @ 0x1407FF7F4
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407FF7F4(char a1)
{
  char v2; // di
  char v3; // al
  __int64 result; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C68, 0LL);
  if ( a1 )
  {
    dword_140C48C88 |= 0x80000000;
  }
  else
  {
    dword_140C48C88 &= ~0x80000000;
    if ( dword_140C48C88 )
    {
      v2 = 1;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      qword_140C48C80 = &Event;
    }
  }
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C68, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C48C68);
  result = sub_1402AFC00((ULONG_PTR)&qword_140C48C68);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C68, 0LL);
    qword_140C48C80 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C48C68);
    return sub_1402AFC00((ULONG_PTR)&qword_140C48C68);
  }
  return result;
}
