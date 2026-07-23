/*
 * XREFs of CcScheduleReadAhead @ 0x14053A6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029CC2C @ 0x14029CC2C (sub_14029CC2C.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  sub_14029CC2C(FileObject, FileOffset, Length, 0LL, 0LL);
}
