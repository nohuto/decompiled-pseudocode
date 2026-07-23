/*
 * XREFs of sub_14029D818 @ 0x14029D818
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 * Callees:
 *     sub_14029E120 @ 0x14029E120 (sub_14029E120.c)
 */

__int64 __fastcall sub_14029D818(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // rax

  v4 = 0LL;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 528);
    if ( byte_140C54C58 == 1 )
      v4 = *(_QWORD *)(a1 + 592);
  }
  else
  {
    v5 = *((_QWORD *)qword_140D06C40 + 1);
  }
  return sub_14029E120(a1, a2, a3, a4, v5, v4);
}
