/*
 * XREFs of VfUtilIsBootDriver @ 0x140AC2730
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACB558 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilIsBootDriver(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return (*(_DWORD *)(result + 32) >> 1) & 1;
  return result;
}
