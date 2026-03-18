/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1405B2914
 * Callers:
 *     MiDecrementHugeContext @ 0x14025E544 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x14022689C (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14025DB3C (MiFreeUltraMapping.c)
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 */

void *__fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx

  if ( !a2 )
    return MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
  v2 = *(_QWORD *)(a1 + 224);
  v3 = *(_QWORD *)(v2 + 312);
  *(_QWORD *)(v2 + 312) = 0LL;
  MiFreeUltraMapping(v3);
  return (void *)MiDeleteUltraThreadContext(v2 + 184);
}
