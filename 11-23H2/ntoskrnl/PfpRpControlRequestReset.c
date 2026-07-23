/*
 * XREFs of PfpRpControlRequestReset @ 0x14084EFB4
 * Callers:
 *     PfpRpControlRequestPerform @ 0x1407B5314 (PfpRpControlRequestPerform.c)
 *     PfpRpShutdown @ 0x14097F664 (PfpRpShutdown.c)
 * Callees:
 *     PsGetNextProcess @ 0x1407443A0 (PsGetNextProcess.c)
 *     PfpRpCHashEmpty @ 0x14084F00C (PfpRpCHashEmpty.c)
 */

__int64 __fastcall PfpRpControlRequestReset(__int64 a1)
{
  __int64 *i; // rcx
  __int64 *NextProcess; // rax

  PfpRpCHashEmpty(a1, a1 + 96, a1 + 120);
  for ( i = 0LL; ; i = NextProcess )
  {
    NextProcess = PsGetNextProcess(i);
    if ( !NextProcess )
      break;
    _InterlockedAnd((volatile signed __int32 *)NextProcess + 281, 0xFFFFBFFF);
  }
  PfpRpCHashEmpty(a1, a1 + 56, a1 + 88);
  *(_QWORD *)(a1 + 80) = 0LL;
  return 0LL;
}
