/*
 * XREFs of HalpPrepareForBugcheck @ 0x14050BE00
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031FD6C (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x14051FE74 (HalpTimerUpdateApiConsumers.c)
 */

__int64 __fastcall HalpPrepareForBugcheck(char a1)
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C6249C = -1;
    qword_140C624A0 = 0LL;
    xmmword_140C62488 = 0uLL;
    qword_140C62548 = 0LL;
    dword_140C62484 = 0;
    HalpEnlightenment = 0;
    result = HalpTimerUpdateApiConsumers();
  }
  if ( (a1 & 1) != 0 )
    dword_140C6A928 = 1;
  HalpBugcheckInProgress = 1;
  return result;
}
