/*
 * XREFs of NtCreateEvent @ 0x14075CD80
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPopulateReadList @ 0x14075C380 (PfSnPopulateReadList.c)
 *     PfSnPrefetchMetadata @ 0x14075E5E4 (PfSnPrefetchMetadata.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140841D80 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140B686B0 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateEvent(unsigned __int64 a1, int a2, __int64 a3, EVENT_TYPE a4, BOOLEAN a5)
{
  _QWORD *v7; // rdi
  char PreviousMode; // si
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-48h]
  PRKEVENT Event; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v7 = (_QWORD *)a1;
  Event = 0LL;
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( (unsigned int)a4 > SynchronizationEvent )
    return 3221225485LL;
  result = ObCreateObjectEx(PreviousMode, ExEventObjectType, a3, PreviousMode, v10, 24, 0, 0, &Event, 0LL);
  if ( (int)result >= 0 )
  {
    KeInitializeEvent(Event, a4, a5);
    result = ObInsertObjectEx((char *)Event, 0LL, a2, 0, 0, 0LL, &v12);
    LODWORD(Event) = result;
    if ( (int)result >= 0 )
      *v7 = v12;
  }
  return result;
}
