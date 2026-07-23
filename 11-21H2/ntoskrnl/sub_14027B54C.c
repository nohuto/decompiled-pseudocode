/*
 * XREFs of sub_14027B54C @ 0x14027B54C
 * Callers:
 *     sub_140278960 @ 0x140278960 (sub_140278960.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14027B54C(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdx
  int v4; // r9d

  v1 = (((unsigned __int64)qword_140C540C0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v4 = 0;
  while ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v3 >= v1 && v3 <= (((unsigned __int64)qword_140C51BF0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      return (unsigned int)(v4 != 0) + 1;
    ++v4;
    v3 = (__int64)(v3 << 25) >> 16;
    v1 &= 0xFFFFFFFFFFFFF000uLL;
  }
  return v2;
}
