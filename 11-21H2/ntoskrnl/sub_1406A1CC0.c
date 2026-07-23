/*
 * XREFs of sub_1406A1CC0 @ 0x1406A1CC0
 * Callers:
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     sub_1406D7014 @ 0x1406D7014 (sub_1406D7014.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

__int64 __fastcall sub_1406A1CC0(__int64 a1)
{
  void *v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 )
  {
    sub_1407A5A54(v3);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 144);
  if ( v4 )
  {
    sub_1406D7014(v4);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
  {
    sub_1407A5A54(v5);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 160);
  if ( (v6 & 1) != 0 )
  {
    if ( v6 >= 4 && (v6 & 2) != 0 )
      ObfDereferenceObject((PVOID)(v6 & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 208);
  if ( v7 )
  {
    PsReleaseProcessWakeCounter(v7);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
  {
    PsReleaseProcessWakeCounter(v8);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(a1 + 240) = 2621440;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    _InterlockedExchange((volatile __int32 *)(result + 40), 0);
  }
  return result;
}
