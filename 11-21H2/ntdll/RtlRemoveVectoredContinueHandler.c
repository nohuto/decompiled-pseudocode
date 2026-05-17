/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1800E4D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredContinueHandler(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  return RtlpRemoveVectoredHandler(a1, 1uLL, a3, a4);
}
