/*
 * XREFs of sub_140642758 @ 0x140642758
 * Callers:
 *     sub_140642660 @ 0x140642660 (sub_140642660.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

_BOOL8 __fastcall sub_140642758(__int64 *a1)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( sub_14028FBF0((__int64)a1)
    && (!*a1 || sub_14028FBF0(*a1) && (__int64 *)(*(_QWORD *)(*a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a1) )
  {
    v2 = a1[1];
    if ( !v2 || sub_14028FBF0(v2) && (__int64 *)(*(_QWORD *)(a1[1] + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a1 )
      return 1;
  }
  return result;
}
