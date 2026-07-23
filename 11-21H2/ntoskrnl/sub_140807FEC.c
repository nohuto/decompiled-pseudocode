/*
 * XREFs of sub_140807FEC @ 0x140807FEC
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall sub_140807FEC(LONG a1, struct _KEVENT *a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+50h] [rbp-30h] BYREF
  __int64 v5; // [rsp+60h] [rbp-20h]
  int v6; // [rsp+68h] [rbp-18h]
  int v7; // [rsp+6Ch] [rbp-14h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v7 = 0;
  Handle = 0LL;
  a2[3].Header.LockNV = a1;
  v4 = 0x30uLL;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  v5 = 0LL;
  v6 = 512;
  v8 = 0LL;
  result = PsCreateSystemThreadEx((int)&Handle, 0, &v4, 0LL, 0LL, (__int64)sub_140A48630, (__int64)a2, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    return 0LL;
  }
  return result;
}
