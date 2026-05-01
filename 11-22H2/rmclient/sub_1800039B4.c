/*
 * XREFs of sub_1800039B4 @ 0x1800039B4
 * Callers:
 *     sub_1800038F0 @ 0x1800038F0 (sub_1800038F0.c)
 * Callees:
 *     sub_1800099B0 @ 0x1800099B0 (sub_1800099B0.c)
 *     j_free @ 0x18000A7C8 (j_free.c)
 */

void __fastcall sub_1800039B4(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // r14
  __int64 v4; // rdi
  __int64 i; // rsi

  *(_QWORD *)a1 = off_1800206A8;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (void *)(v2 - 8);
    v4 = *(_QWORD *)(v2 - 8);
    for ( i = v2 + 8 * v4; v4; --v4 )
    {
      i -= 8LL;
      sub_1800099B0(i);
    }
    j_free(v3);
  }
  j_free(*(void **)(a1 + 32));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
