/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004D444
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18004D080 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009B390 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800B0380 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180108648 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18004D334 (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  HRESULT result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
