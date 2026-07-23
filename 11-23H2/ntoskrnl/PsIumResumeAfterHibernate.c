/*
 * XREFs of PsIumResumeAfterHibernate @ 0x1405A5E54
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     PspInitPhase0 @ 0x140B4A894 (PspInitPhase0.c)
 * Callees:
 *     VslRegisterLogPages @ 0x14054C6D0 (VslRegisterLogPages.c)
 */

__int64 PsIumResumeAfterHibernate()
{
  __int64 result; // rax

  result = PspIumLogBuffer;
  if ( PspIumLogBuffer )
  {
    *(_DWORD *)PspIumLogBuffer = -1;
    return VslRegisterLogPages();
  }
  return result;
}
