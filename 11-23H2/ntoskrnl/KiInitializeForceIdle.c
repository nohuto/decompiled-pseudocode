/*
 * XREFs of KiInitializeForceIdle @ 0x14081DB00
 * Callers:
 *     KeInitializeTimerTable @ 0x14081D9C4 (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402BF9A0 (KeInitializeDpc.c)
 *     KeDisableForceIdle @ 0x14057CC80 (KeDisableForceIdle.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    KiForceIdleLock = 0LL;
    KeInitializeDpc((PRKDPC)&KiForceIdleStartDpc, (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine, 0LL);
    KeInitializeDpc((PRKDPC)&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    BYTE1(KiForceIdleStartDpc) = 3;
    BYTE1(KiForceIdleStopDpc) = 3;
    if ( !KiSerializeTimerExpiration )
      KeDisableForceIdle();
  }
  KeInitializeDpc((PRKDPC)(a1 + 34200), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 34201) = 3;
  result = *(_QWORD *)(a1 + 34256);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 34202) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
