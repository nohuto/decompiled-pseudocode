/*
 * XREFs of CcScheduleReadAheadEx @ 0x140329230
 * Callers:
 *     CcMdlRead @ 0x14073EB90 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
