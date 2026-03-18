/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x14053F54C
 * Callers:
 *     HvlPhase1Initialize @ 0x1403880A4 (HvlPhase1Initialize.c)
 *     PopHiberCheckResume @ 0x140AA2EA0 (PopHiberCheckResume.c)
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8F14 (PopShutdownSystem.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x140548E30 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
