/*
 * XREFs of sub_1C0008BF0 @ 0x1C0008BF0
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C001250C @ 0x1C001250C (sub_1C001250C.c)
 *     sub_1C0019498 @ 0x1C0019498 (sub_1C0019498.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0025E36 @ 0x1C0025E36 (sub_1C0025E36.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C004E7B0 @ 0x1C004E7B0 (sub_1C004E7B0.c)
 *     sub_1C004FE34 @ 0x1C004FE34 (sub_1C004FE34.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0074CA8 @ 0x1C0074CA8 (sub_1C0074CA8.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C0008BF0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5216));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5224));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 4896), a2, a3);
  return *(_BYTE *)(*(_QWORD *)(a1 + 4896) + 20LL) & 1;
}
