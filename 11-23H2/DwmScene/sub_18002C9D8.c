/*
 * XREFs of sub_18002C9D8 @ 0x18002C9D8
 * Callers:
 *     sub_1800CAB90 @ 0x1800CAB90 (sub_1800CAB90.c)
 * Callees:
 *     sub_180025DA4 @ 0x180025DA4 (sub_180025DA4.c)
 */

__int64 __fastcall sub_18002C9D8(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 136);
  for ( i = *(_QWORD *)(a1 + 128); i != v1; i += 64LL )
    result = sub_180025DA4(i);
  return result;
}
