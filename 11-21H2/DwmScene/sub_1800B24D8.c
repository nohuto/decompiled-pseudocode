/*
 * XREFs of sub_1800B24D8 @ 0x1800B24D8
 * Callers:
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 * Callees:
 *     sub_180026A18 @ 0x180026A18 (sub_180026A18.c)
 *     sub_1800B1E94 @ 0x1800B1E94 (sub_1800B1E94.c)
 */

char *__fastcall sub_1800B24D8(_QWORD *a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  float v6; // xmm0_4
  __int64 v7; // rax
  __int64 v8; // rcx
  float *v9; // rdx
  float *v10; // r9
  char *result; // rax
  float v12; // [rsp+30h] [rbp+8h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = sub_180026A18(
         1000000000 * (perf_counter % perf_frequency) / perf_frequency
       + 1000000000 * (perf_counter / perf_frequency)
       - *(_DWORD *)(a2 + 16));
  v7 = *(int *)(a2 + 8);
  v12 = v6;
  v8 = (__int64)&a1[2 * v7 + 7 + v7];
  v9 = *(float **)(v8 + 8);
  if ( v9 == *(float **)(v8 + 16) )
  {
    sub_1800B1E94(v8, (__int64)v9, &v12);
    v6 = v12;
  }
  else
  {
    *v9 = v6;
    *(_QWORD *)(v8 + 8) = v9 + 1;
  }
  v10 = (float *)a1[35];
  if ( ((((unsigned __int64)v10 - a1[34]) ^ (a1[3 * *(int *)(a2 + 8) + 8] - a1[3 * *(int *)(a2 + 8) + 7])) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( v10 == (float *)a1[36] )
    {
      return sub_1800B1E94((__int64)(a1 + 34), a1[35], &v12);
    }
    else
    {
      result = (char *)(v10 + 1);
      *v10 = v6;
      a1[35] = v10 + 1;
    }
  }
  else
  {
    result = (char *)a1[35];
    *((float *)result - 1) = v6 + *((float *)result - 1);
  }
  return result;
}
