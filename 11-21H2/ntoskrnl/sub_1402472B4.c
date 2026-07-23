/*
 * XREFs of sub_1402472B4 @ 0x1402472B4
 * Callers:
 *     sub_140350070 @ 0x140350070 (sub_140350070.c)
 *     sub_14036FAB0 @ 0x14036FAB0 (sub_14036FAB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402472B4(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ a1 ^ qword_140C5A5C0 ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 72;
  v3 = *(unsigned __int64 **)(a1 + 80);
  if ( *v3 != a1 + 72 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 80) = a2;
  ++*(_QWORD *)(a1 + 88);
  return result;
}
