/*
 * XREFs of sub_180080778 @ 0x180080778
 * Callers:
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18003070C @ 0x18003070C (sub_18003070C.c)
 *     sub_180030718 @ 0x180030718 (sub_180030718.c)
 *     sub_180030724 @ 0x180030724 (sub_180030724.c)
 */

__int64 __fastcall sub_180080778(__int64 a1)
{
  volatile __int32 *v2; // rax
  __int32 v3; // r8d
  __int64 v4; // r9
  __int64 perf_frequency; // rdi
  __int64 perf_counter; // rax
  __int64 result; // rax
  _DWORD *v8; // rdx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 1;
  sub_180030724(&v9);
  v2 = (volatile __int32 *)sub_18001DE70(a1 + 48);
  while ( _InterlockedExchange(v2, v3) )
    ;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 16);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v9 = 0;
  *(_QWORD *)(a1 + 80) = 1000000000 * (perf_counter / perf_frequency)
                       + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  sub_18003070C(a1 + 48);
  result = sub_180030718(&v9);
  *v8 = result;
  return result;
}
