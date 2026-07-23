/*
 * XREFs of sub_140A7C528 @ 0x140A7C528
 * Callers:
 *     sub_14082ED84 @ 0x14082ED84 (sub_14082ED84.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 * Callees:
 *     sub_140A89FE0 @ 0x140A89FE0 (sub_140A89FE0.c)
 */

__int64 __fastcall sub_140A7C528(int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( dword_140C1AFA8 != a1 )
    return sub_140A89FE0(a2);
  return result;
}
