/*
 * XREFs of CcScheduleReadAheadEx @ 0x140328FA0
 * Callers:
 *     CcMdlRead @ 0x14073E9A0 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x140328FBC (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
