/*
 * XREFs of EtwEventWriteEx @ 0x18007C930
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x180030348 (EtwpEventWriteFull.c)
 */

ULONG __cdecl EtwEventWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwpEventWriteFull(
           RegHandle,
           (__int128 *)EventDescriptor,
           Filter,
           Flags,
           0,
           (_GUID *)ActivityId,
           (__int128 *)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
