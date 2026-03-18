/*
 * XREFs of RIMIsCurrentProcessTrusted @ 0x1C006F020
 * Callers:
 *     rimCheckForRegistrationConflicts @ 0x1C006EF1C (rimCheckForRegistrationConflicts.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 * Callees:
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0086270 (CheckDwmProcessSecurityIdentifier.c)
 */

__int64 __fastcall RIMIsCurrentProcessTrusted(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  unsigned int v4; // ebx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  v4 = 0;
  if ( CurrentProcess && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
    || (int)CheckDwmProcessSecurityIdentifier() >= 0 )
  {
    return 1;
  }
  return v4;
}
