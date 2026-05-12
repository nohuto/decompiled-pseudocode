/*
 * XREFs of sub_1C004C030 @ 0x1C004C030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C004C030(__int64 a1)
{
  __int64 result; // rax

  sub_1C001A364(a1 + 336);
  result = *(_QWORD *)(a1 + 4896);
  if ( result )
    _interlockedbittestandreset((volatile signed __int32 *)(result + 120), 0);
  return result;
}
