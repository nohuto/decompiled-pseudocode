/*
 * XREFs of sub_140696928 @ 0x140696928
 * Callers:
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140696928(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8);
  result = v1 + 1;
  if ( (_DWORD)v1 )
    return *(unsigned int *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8);
  return result;
}
