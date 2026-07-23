/*
 * XREFs of KeRemoveProcessorGroupAffinity @ 0x140240D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorGroupAffinity(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = *a1;
  _bittestandreset64(&result, dword_140D0E5E0[a2] & 0x3F);
  *a1 = result;
  return result;
}
