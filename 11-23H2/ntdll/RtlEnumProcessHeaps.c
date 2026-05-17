/*
 * XREFs of RtlEnumProcessHeaps @ 0x1800FEA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumProcessHeaps(__int64 (__fastcall *a1)(void *, __int64), __int64 a2)
{
  return RtlpEnumProcessHeaps(a1, a2, 0);
}
