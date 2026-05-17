/*
 * XREFs of RtlCrc64 @ 0x180102250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCrc64(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, &Crc64Ctrl);
}
