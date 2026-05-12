/*
 * XREFs of sub_1C004D83C @ 0x1C004D83C
 * Callers:
 *     sub_1C00130BC @ 0x1C00130BC (sub_1C00130BC.c)
 *     sub_1C0071BB8 @ 0x1C0071BB8 (sub_1C0071BB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C004D83C(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rax
  unsigned int v3; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1792);
  if ( !v1 )
    return 300000LL;
  v2 = *(_DWORD **)(v1 + 8);
  if ( !v2 || *v2 != 3 )
    return 300000LL;
  v3 = v2[5];
  result = 300000LL;
  if ( v3 )
    return v3;
  return result;
}
