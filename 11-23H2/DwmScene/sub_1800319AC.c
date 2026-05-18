/*
 * XREFs of sub_1800319AC @ 0x1800319AC
 * Callers:
 *     sub_18002FF08 @ 0x18002FF08 (sub_18002FF08.c)
 * Callees:
 *     sub_180031BCC @ 0x180031BCC (sub_180031BCC.c)
 */

__int64 __fastcall sub_1800319AC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180031BCC(v2 + 32);
  return sub_18001D2A8(a1);
}
