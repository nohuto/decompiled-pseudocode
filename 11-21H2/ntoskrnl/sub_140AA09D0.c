/*
 * XREFs of sub_140AA09D0 @ 0x140AA09D0
 * Callers:
 *     sub_140A9F7F0 @ 0x140A9F7F0 (sub_140A9F7F0.c)
 *     sub_140A9F970 @ 0x140A9F970 (sub_140A9F970.c)
 *     sub_140A9FA80 @ 0x140A9FA80 (sub_140A9FA80.c)
 *     sub_140A9FDD0 @ 0x140A9FDD0 (sub_140A9FDD0.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA09D0(char a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax

  if ( !a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && (dword_140C29FC0 & 0x20000) != 0 )
      return sub_140A8C924(0xC4u, 0x7EuLL, CurrentIrql, 2uLL, 0LL);
  }
  return result;
}
