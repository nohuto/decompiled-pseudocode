/*
 * XREFs of RtlWakeAddressAll @ 0x180029FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWakeAddressAll(__int64 a1, __int64 a2)
{
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  LOBYTE(a2) = 1;
  return RtlpWakeByAddress(a1, a2);
}
