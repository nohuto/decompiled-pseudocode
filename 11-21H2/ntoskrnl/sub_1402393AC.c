/*
 * XREFs of sub_1402393AC @ 0x1402393AC
 * Callers:
 *     sub_14022DBD4 @ 0x14022DBD4 (sub_14022DBD4.c)
 *     sub_14024253C @ 0x14024253C (sub_14024253C.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E851C @ 0x1402E851C (sub_1402E851C.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     sub_14058D990 @ 0x14058D990 (sub_14058D990.c)
 *     sub_1405B0AC0 @ 0x1405B0AC0 (sub_1405B0AC0.c)
 *     sub_1405B3384 @ 0x1405B3384 (sub_1405B3384.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1402393AC(__int64 a1, int a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // r11
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned __int64)(a2 & 0x7FFFF) << 40;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v2 & 0xF80000FFFFFFFFFFuLL, v2);
  for ( i = v2 == result; !i; i = v7 == result )
  {
    v7 = result;
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(a1 + 24),
               v3 | result & 0xF80000FFFFFFFFFFuLL,
               result);
  }
  return result;
}
