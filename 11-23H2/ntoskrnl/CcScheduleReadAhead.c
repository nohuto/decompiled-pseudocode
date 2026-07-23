/*
 * XREFs of CcScheduleReadAhead @ 0x140537E70
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadNuma((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL, 0LL);
}
