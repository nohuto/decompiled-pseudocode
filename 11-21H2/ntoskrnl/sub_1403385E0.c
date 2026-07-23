/*
 * XREFs of sub_1403385E0 @ 0x1403385E0
 * Callers:
 *     sub_14022DBD4 @ 0x14022DBD4 (sub_14022DBD4.c)
 *     sub_14024253C @ 0x14024253C (sub_14024253C.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E851C @ 0x1402E851C (sub_1402E851C.c)
 *     sub_1403365F0 @ 0x1403365F0 (sub_1403365F0.c)
 *     sub_140338DB0 @ 0x140338DB0 (sub_140338DB0.c)
 *     sub_1403AC4E0 @ 0x1403AC4E0 (sub_1403AC4E0.c)
 *     sub_1405B0AC0 @ 0x1405B0AC0 (sub_1405B0AC0.c)
 *     sub_1405B3384 @ 0x1405B3384 (sub_1405B3384.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1403385E0(__int64 a1, unsigned __int64 a2)
{
  int v2; // eax
  signed __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 result; // rax
  signed __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 36);
  *(_QWORD *)a1 = (a2 << 40) | *(_QWORD *)a1 & 0xFFFFFFFFFFLL;
  *(_DWORD *)(a1 + 36) = v2 & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (a2 & 0xF800000000LL) << 20;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v4 | v3 & 0xF07FFFFFFFFFFFFFuLL, v3);
  if ( v3 != result )
  {
    do
    {
      v6 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v4 | result & 0xF07FFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v6 != result );
  }
  return result;
}
