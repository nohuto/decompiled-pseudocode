/*
 * XREFs of sub_140AD6B50 @ 0x140AD6B50
 * Callers:
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 * Callees:
 *     sub_140B1D468 @ 0x140B1D468 (sub_140B1D468.c)
 *     sub_140B2FE74 @ 0x140B2FE74 (sub_140B2FE74.c)
 *     sub_140B31590 @ 0x140B31590 (sub_140B31590.c)
 */

__int64 sub_140AD6B50()
{
  __int64 result; // rax

  result = sub_140B31590();
  if ( !(_DWORD)result )
  {
    result = sub_140B1D468();
    if ( (int)result < 0 && !dword_140D06840 )
      return sub_140B2FE74(sub_140AD0DA0);
  }
  return result;
}
