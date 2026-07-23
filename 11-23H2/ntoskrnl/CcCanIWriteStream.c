/*
 * XREFs of CcCanIWriteStream @ 0x140537974
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14032924C (CcScheduleReadAheadNuma.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 */

bool __fastcall CcCanIWriteStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  return CcCanIWriteStreamEx(a1, a2, a3, a4, a5, a6, 0LL);
}
