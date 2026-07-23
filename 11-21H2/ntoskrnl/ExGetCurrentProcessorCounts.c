/*
 * XREFs of ExGetCurrentProcessorCounts @ 0x140238F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCurrentProcessorCounts(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  *a1 = *(_DWORD *)(*((_QWORD *)CurrentPrcb + 3) + 652LL);
  *a2 = *((_DWORD *)CurrentPrcb + 8273) + *((_DWORD *)CurrentPrcb + 8274);
  result = *((unsigned int *)CurrentPrcb + 9);
  *a3 = result;
  return result;
}
