/*
 * XREFs of KiConstrainIdealProcessorSetBreakpoints @ 0x1402248C4
 * Callers:
 *     KiSelectIdealProcessorSetsForProcess @ 0x1402247E8 (KiSelectIdealProcessorSetsForProcess.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402BE244 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConstrainIdealProcessorSetBreakpoints(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *a1 < *a2 )
    *a1 = *a2;
  result = (unsigned int)a2[1];
  if ( a1[1] > (unsigned int)result )
    a1[1] = result;
  return result;
}
