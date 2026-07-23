/*
 * XREFs of KeRequestTerminationProcess @ 0x1409744B4
 * Callers:
 *     MiForceCrashForInvalidAccess @ 0x140A2B3D4 (MiForceCrashForInvalidAccess.c)
 *     MiCommitRequestFailed @ 0x140A43BA4 (MiCommitRequestFailed.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x140309C8C (KeRequestTerminationThread.c)
 */

void __fastcall KeRequestTerminationProcess(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  unsigned __int32 v4; // eax

  v2 = *(unsigned int *)(a1 + 120);
  v3 = (unsigned int)(a2 << 18);
  if ( (v2 & 0xC0000) == 0 )
  {
    while ( 1 )
    {
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 120), v3 | v2, v2);
      if ( (_DWORD)v2 == v4 )
        break;
      v2 = v4;
      if ( (v4 & 0xC0000) != 0 )
        return;
    }
    KeRequestTerminationThread(a1, v3, v2);
  }
}
