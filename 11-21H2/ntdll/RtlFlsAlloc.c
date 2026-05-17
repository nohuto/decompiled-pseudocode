/*
 * XREFs of RtlFlsAlloc @ 0x18007B440
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsAlloc @ 0x18007B460 (RtlpFlsAlloc.c)
 */

__int64 __fastcall RtlFlsAlloc(int a1, __int64 a2, __int64 a3, int a4)
{
  return RtlpFlsAlloc(a1, a2, a1, a4, a2);
}
