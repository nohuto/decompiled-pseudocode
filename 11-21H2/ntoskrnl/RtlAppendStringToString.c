/*
 * XREFs of RtlAppendStringToString @ 0x1406E24E0
 * Callers:
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_140858690 @ 0x140858690 (sub_140858690.c)
 *     sub_140917A40 @ 0x140917A40 (sub_140917A40.c)
 *     sub_140917E18 @ 0x140917E18 (sub_140917E18.c)
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  int Length; // edi
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  v4 = Destination->Length;
  if ( (int)v4 + Length <= (unsigned int)Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Source->Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
