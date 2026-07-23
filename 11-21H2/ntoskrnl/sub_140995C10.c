/*
 * XREFs of sub_140995C10 @ 0x140995C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140995C10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 16) != 1 )
    return 3221266435LL;
  *(_DWORD *)a2 = 1;
  result = 0LL;
  *(_BYTE *)(a2 + 26) = 1;
  return result;
}
