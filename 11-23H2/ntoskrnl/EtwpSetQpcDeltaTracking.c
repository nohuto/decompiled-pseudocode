/*
 * XREFs of EtwpSetQpcDeltaTracking @ 0x1405FC8E8
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpSetQpcDeltaTracking(__int64 a1)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 200) - 3) <= 1 )
    return 3221225659LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x8000000u);
  return 0LL;
}
