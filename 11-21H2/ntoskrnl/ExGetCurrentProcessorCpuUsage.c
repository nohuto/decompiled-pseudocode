/*
 * XREFs of ExGetCurrentProcessorCpuUsage @ 0x1404618D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetCurrentProcessorCpuUsage(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = 100
         * (unsigned __int64)*(unsigned int *)(*((_QWORD *)CurrentPrcb + 3) + 652LL)
         / (*((unsigned int *)CurrentPrcb + 8273) + (unsigned __int64)*((unsigned int *)CurrentPrcb + 8274));
  *a1 = 100 - result;
  return result;
}
