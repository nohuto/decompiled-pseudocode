/*
 * XREFs of sub_14027A168 @ 0x14027A168
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_140279DB0 @ 0x140279DB0 (sub_140279DB0.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402EA5E4 @ 0x1402EA5E4 (sub_1402EA5E4.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_1405A7A00 @ 0x1405A7A00 (sub_1405A7A00.c)
 * Callees:
 *     sub_14027A9D0 @ 0x14027A9D0 (sub_14027A9D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 */

__int64 __fastcall sub_14027A168(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = a1 + 24;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    sub_14027A9D0(a1 + 24);
    LOBYTE(v3) = *(_BYTE *)(v1 + 12);
    if ( (*(_BYTE *)(v1 + 13) & 1) != 0 )
      result = sub_14030FA80(v2, v3);
    else
      result = sub_1402B0CE0(v2, v3);
    *(_QWORD *)v1 = 0LL;
  }
  return result;
}
