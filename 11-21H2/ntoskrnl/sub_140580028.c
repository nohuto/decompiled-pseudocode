/*
 * XREFs of sub_140580028 @ 0x140580028
 * Callers:
 *     sub_14031CD90 @ 0x14031CD90 (sub_14031CD90.c)
 *     sub_140580CE0 @ 0x140580CE0 (sub_140580CE0.c)
 *     sub_140580FA4 @ 0x140580FA4 (sub_140580FA4.c)
 *     sub_140581158 @ 0x140581158 (sub_140581158.c)
 * Callees:
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     sub_14032E910 @ 0x14032E910 (sub_14032E910.c)
 */

_BOOL8 __fastcall sub_140580028(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // rax
  _BOOL8 result; // rax

  result = 0;
  if ( sub_14032E910(a1) && !sub_14030EC40(v1) )
  {
    v3 = *(unsigned int *)(v2 + 52);
    LODWORD(v3) = v3 & 0x7FFFFFFF;
    if ( (v3 | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 31)) - 1 <= 0x7FFFFFFFBLL
      && (*(_DWORD *)(v2 + 48) & 8) == 0 )
    {
      return 1;
    }
  }
  return result;
}
