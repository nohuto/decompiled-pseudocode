/*
 * XREFs of sub_1405DC760 @ 0x1405DC760
 * Callers:
 *     sub_14045E06E @ 0x14045E06E (sub_14045E06E.c)
 * Callees:
 *     sub_1405DB8E0 @ 0x1405DB8E0 (sub_1405DB8E0.c)
 */

BOOLEAN __fastcall sub_1405DC760(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax

  v2 = *(_DWORD *)(a1 + 34112);
  v3 = *(_QWORD *)(a1 + 35000);
  *(_DWORD *)(a1 + 34116) = v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 4) = v2;
    *(_DWORD *)(v3 + 12) = 1;
    __writemsr(0x400000C2u, 0xFFFFFFFEuLL);
  }
  return sub_1405DB8E0(a1);
}
