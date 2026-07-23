/*
 * XREFs of NtCreateEvent @ 0x140727DD0
 * Callers:
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 *     sub_1407DE1A8 @ 0x1407DE1A8 (sub_1407DE1A8.c)
 *     sub_1407DF200 @ 0x1407DF200 (sub_1407DF200.c)
 *     sub_14084CC44 @ 0x14084CC44 (sub_14084CC44.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140B25D38 @ 0x140B25D38 (sub_140B25D38.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 */

NTSTATUS __cdecl NtCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  PHANDLE v6; // rdi
  unsigned __int8 v7; // si
  NTSTATUS result; // eax
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v6 = EventHandle;
  v9 = 0LL;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v7 )
  {
    if ( (unsigned __int64)EventHandle >= 0x7FFFFFFF0000LL )
      EventHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *EventHandle = *EventHandle;
  }
  if ( (unsigned int)EventType > SynchronizationEvent )
    return -1073741811;
  result = sub_14072B3B0(v7, (_DWORD)ExEventObjectType, (_DWORD)ObjectAttributes, v7);
  if ( result >= 0 )
  {
    KeInitializeEvent(0LL, EventType, InitialState);
    result = sub_140729C30(0LL, 0LL, 0, 0LL, (__int64)&v9);
    if ( result >= 0 )
      *v6 = (HANDLE)v9;
  }
  return result;
}
