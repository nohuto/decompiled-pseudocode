/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x140655808
 * Callers:
 *     MiDecrementHugeContext @ 0x1403D6838 (MiDecrementHugeContext.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E9534 (MiDeleteUltraThreadContext.c)
 *     MiZeroPageWorkMapping @ 0x140368AE4 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x1403C6788 (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a1 + 344);
    v3 = *(_QWORD *)(v2 + 312);
    *(_QWORD *)(v2 + 312) = 0LL;
    MiFreeUltraMapping(v3);
    MiDeleteUltraThreadContext(v2 + 184);
  }
  else
  {
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
  }
}
