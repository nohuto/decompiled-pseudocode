/*
 * XREFs of sub_14020D86C @ 0x14020D86C
 * Callers:
 *     sub_14020D740 @ 0x14020D740 (sub_14020D740.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 * Callees:
 *     RtlCompareMemoryUlong @ 0x14042A260 (RtlCompareMemoryUlong.c)
 */

_BOOL8 __fastcall sub_14020D86C(__int64 a1, __int64 a2, void *a3)
{
  _QWORD *v3; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax

  v3 = *(_QWORD **)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  if ( !v5 )
    return 0LL;
  while ( a2 != *v3 )
  {
    v6 = (unsigned int)(v6 + 1);
    ++v3;
    if ( (unsigned int)v6 >= v5 )
      return 0LL;
  }
  return !a3 || RtlCompareMemoryUlong(a3, 0x1000uLL, *(_DWORD *)(*(_QWORD *)(a1 + 48) + 4 * v6)) == 4096;
}
