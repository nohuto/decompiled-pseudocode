/*
 * XREFs of sub_14022F99C @ 0x14022F99C
 * Callers:
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     sub_14022F864 @ 0x14022F864 (sub_14022F864.c)
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

char __fastcall sub_14022F99C(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // rbx
  char result; // al

  v6 = 32LL * *(unsigned int *)(a1 + 37136);
  *(_DWORD *)(a1 + 37136) = ((unsigned __int8)*(_DWORD *)(a1 + 37136) + 1) & 0xF;
  *(_DWORD *)(v6 + a1 + 37784) = a4;
  *(_DWORD *)(v6 + a1 + 37788) = a3;
  *(_QWORD *)(v6 + a1 + 37792) = a2;
  *(LARGE_INTEGER *)(v6 + a1 + 37800) = KeQueryPerformanceCounter(0LL);
  result = a5;
  *(_BYTE *)(v6 + a1 + 37808) = a5;
  return result;
}
