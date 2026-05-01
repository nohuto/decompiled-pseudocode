/*
 * XREFs of sub_180019200 @ 0x180019200
 * Callers:
 *     sub_180004CC0 @ 0x180004CC0 (sub_180004CC0.c)
 * Callees:
 *     sub_1800099B0 @ 0x1800099B0 (sub_1800099B0.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void *__fastcall sub_180019200(__int64 a1)
{
  void *v1; // rdi
  __int64 v2; // rbx
  __int64 i; // rsi

  v1 = (void *)(a1 - 8);
  v2 = *(_QWORD *)(a1 - 8);
  for ( i = a1 + 8 * v2; v2; --v2 )
  {
    i -= 8LL;
    sub_1800099B0(i);
  }
  j_free(v1);
  return v1;
}
