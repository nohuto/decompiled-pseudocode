/*
 * XREFs of sub_1800380D0 @ 0x1800380D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_1800380D0(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = lpMem[2];
  if ( v4 )
    result = sub_180010530(v4);
  if ( a2 )
    return sub_18000B988(lpMem);
  return result;
}
