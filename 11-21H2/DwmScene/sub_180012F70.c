/*
 * XREFs of sub_180012F70 @ 0x180012F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012F70(__int64 a1, int *a2)
{
  _DWORD *v2; // rcx
  int v3; // xmm1_4
  int v4; // eax

  if ( *(_DWORD *)(a1 + 48) )
  {
    v2 = *(_DWORD **)(a1 + 32);
    v3 = a2[2];
    v4 = *a2;
    v2[23] = a2[1];
    v2[24] = v3;
    v2[22] = v4;
    v2[25] = 1065353216;
  }
  else
  {
    *(_OWORD *)(a1 + 52) = *(_OWORD *)a2;
  }
  return 0LL;
}
