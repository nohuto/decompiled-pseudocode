/*
 * XREFs of sub_1402F339C @ 0x1402F339C
 * Callers:
 *     sub_14027A950 @ 0x14027A950 (sub_14027A950.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     sub_1402F3424 @ 0x1402F3424 (sub_1402F3424.c)
 */

signed __int64 __fastcall sub_1402F339C(signed __int64 *a1, __int64 a2)
{
  signed __int64 result; // rax
  signed __int64 v5; // rtt

  sub_1402F3424(a2 - 48, 15LL);
  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 0xF) == 0 )
  {
    if ( a2 != (result & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v5 = result;
    result = _InterlockedCompareExchange64(a1, result + 15, result);
    if ( v5 == result )
      return result;
  }
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFFFFFFFFFFFFFFF1uLL);
}
