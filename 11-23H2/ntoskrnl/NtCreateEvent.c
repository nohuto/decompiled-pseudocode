/*
 * XREFs of NtCreateEvent @ 0x14075CF70
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPopulateReadList @ 0x14075C570 (PfSnPopulateReadList.c)
 *     PfSnPrefetchMetadata @ 0x14075E7D4 (PfSnPrefetchMetadata.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140842080 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140B686B0 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v7; // rdi
  char PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v10; // [rsp+20h] [rbp-48h]
  PRKEVENT Event; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v7 = EventHandle;
  Event = 0LL;
  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  result = ObCreateObjectEx(
             PreviousMode,
             ExEventObjectType,
             (__int64)ObjectAttributes,
             PreviousMode,
             v10,
             24,
             0,
             0,
             &Event,
             0LL);
  if ( result >= 0 )
  {
    KeInitializeEvent(Event, EventType, InitialState);
    result = ObInsertObjectEx((char *)Event, 0LL, DesiredAccess, 0, 0, 0LL, &v12);
    LODWORD(Event) = result;
    if ( result >= 0 )
      *v7 = (HANDLE)v12;
  }
  return result;
}
