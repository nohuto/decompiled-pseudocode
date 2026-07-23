/*
 * XREFs of ntoskrnl_24 @ 0x1409F9AA0
 * Callers:
 *     sub_14082D3F8 @ 0x14082D3F8 (sub_14082D3F8.c)
 *     sub_14082DE40 @ 0x14082DE40 (sub_14082DE40.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 */

NTSTATUS __fastcall ntoskrnl_24(PCEVENT_DESCRIPTOR EventDescriptor)
{
  NTSTATUS result; // eax

  if ( qword_140C16478 )
    return EtwWrite(qword_140C16478, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
