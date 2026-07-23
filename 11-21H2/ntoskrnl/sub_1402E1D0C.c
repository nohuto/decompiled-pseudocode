/*
 * XREFs of sub_1402E1D0C @ 0x1402E1D0C
 * Callers:
 *     sub_1402E1CBC @ 0x1402E1CBC (sub_1402E1CBC.c)
 *     sub_1403ABB10 @ 0x1403ABB10 (sub_1403ABB10.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     sub_1406355B0 @ 0x1406355B0 (sub_1406355B0.c)
 *     sub_140635600 @ 0x140635600 (sub_140635600.c)
 *     sub_1406EFBC8 @ 0x1406EFBC8 (sub_1406EFBC8.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

LARGE_INTEGER __fastcall sub_1402E1D0C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // eax
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 > 3 )
    goto LABEL_10;
  if ( !(_DWORD)v2 )
    return (LARGE_INTEGER)sub_14022DB00();
  v3 = v2 - 1;
  if ( !v3 )
    return KeQueryPerformanceCounter(0LL);
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return (LARGE_INTEGER)__rdtsc();
LABEL_10:
    __fastfail(0x3Du);
  }
  v6 = 0LL;
  sub_14042A5E0(&v6, a2);
  return (LARGE_INTEGER)v6;
}
