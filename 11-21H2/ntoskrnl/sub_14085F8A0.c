/*
 * XREFs of sub_14085F8A0 @ 0x14085F8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14085F8A0(_DWORD **a1, _DWORD **a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rcx
  unsigned int v4; // edx

  v2 = *a1;
  v3 = *a2;
  if ( *v2 == **a2 )
  {
    v4 = v2[1];
    if ( v4 <= v3[1] && (v4 < v3[1] || v2 < v3) )
      return 0xFFFFFFFFLL;
    return 1LL;
  }
  if ( *v2 > *v3 )
    return 1LL;
  return 0xFFFFFFFFLL;
}
