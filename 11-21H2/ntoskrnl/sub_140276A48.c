/*
 * XREFs of sub_140276A48 @ 0x140276A48
 * Callers:
 *     sub_140201AC4 @ 0x140201AC4 (sub_140201AC4.c)
 *     sub_1402483DC @ 0x1402483DC (sub_1402483DC.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_14059E4B0 @ 0x14059E4B0 (sub_14059E4B0.c)
 *     sub_14069C07C @ 0x14069C07C (sub_14069C07C.c)
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 *     sub_1406B96E8 @ 0x1406B96E8 (sub_1406B96E8.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 *     sub_1407E0C48 @ 0x1407E0C48 (sub_1407E0C48.c)
 *     sub_140847260 @ 0x140847260 (sub_140847260.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 * Callees:
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 */

unsigned __int64 __fastcall sub_140276A48(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // ecx

  if ( a2 )
    sub_1402F3424(a2 - 48, 15LL);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  result = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(result - 48), -v6);
  }
  return result;
}
