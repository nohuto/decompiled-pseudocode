/*
 * XREFs of VidSchiCompletePreemption @ 0x1C003A4D8
 * Callers:
 *     VidSchiPreemptEngineNodes @ 0x1C0106130 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C01063A8 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C0106EAC (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2900);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
