/*
 * XREFs of sub_1C0013728 @ 0x1C0013728
 * Callers:
 *     sub_1C0013554 @ 0x1C0013554 (sub_1C0013554.c)
 *     sub_1C00135CC @ 0x1C00135CC (sub_1C00135CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0013728(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // r9d
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    v3 = *(unsigned __int8 *)(v2 + 3) - *(_DWORD *)a1 + v2 + 4;
  else
    v3 = 4;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v3 + 4 > v4 )
    return 0LL;
  result = *(_QWORD *)a1 + v3;
  if ( *(unsigned __int8 *)(result + 3) + v3 + 4 > v4 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
