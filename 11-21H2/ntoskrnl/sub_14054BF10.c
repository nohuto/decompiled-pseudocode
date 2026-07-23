/*
 * XREFs of sub_14054BF10 @ 0x14054BF10
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     sub_14054B670 @ 0x14054B670 (sub_14054B670.c)
 *     sub_14054B7FC @ 0x14054B7FC (sub_14054B7FC.c)
 *     sub_14054BA84 @ 0x14054BA84 (sub_14054BA84.c)
 *     sub_14054BAFC @ 0x14054BAFC (sub_14054BAFC.c)
 *     sub_14054BB58 @ 0x14054BB58 (sub_14054BB58.c)
 *     sub_14054BC60 @ 0x14054BC60 (sub_14054BC60.c)
 *     sub_14054BE48 @ 0x14054BE48 (sub_14054BE48.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_14054BF10(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( qword_140C4E8C8 )
    return EtwWriteEx(qword_140C4E8C8, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  return result;
}
