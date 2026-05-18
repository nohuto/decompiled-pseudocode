/*
 * XREFs of sub_180043080 @ 0x180043080
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180043080(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
    return sub_180010530(v2);
  return result;
}
