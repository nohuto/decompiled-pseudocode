/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x1409F51A0
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x140604318 (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkIdFilter(*(_WORD *)(a1 + 40), a2, a3, 1);
}
