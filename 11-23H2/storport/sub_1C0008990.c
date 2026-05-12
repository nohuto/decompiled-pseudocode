/*
 * XREFs of sub_1C0008990 @ 0x1C0008990
 * Callers:
 *     sub_1C00085EC @ 0x1C00085EC (sub_1C00085EC.c)
 *     sub_1C001313C @ 0x1C001313C (sub_1C001313C.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001AEA8 @ 0x1C001AEA8 (sub_1C001AEA8.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     sub_1C004D6F0 @ 0x1C004D6F0 (sub_1C004D6F0.c)
 *     sub_1C004F478 @ 0x1C004F478 (sub_1C004F478.c)
 *     sub_1C004FE34 @ 0x1C004FE34 (sub_1C004FE34.c)
 *     sub_1C0060344 @ 0x1C0060344 (sub_1C0060344.c)
 *     sub_1C0061A30 @ 0x1C0061A30 (sub_1C0061A30.c)
 *     sub_1C00A1C44 @ 0x1C00A1C44 (sub_1C00A1C44.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 */

bool __fastcall sub_1C0008990(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // di
  bool v10; // bl
  int v12; // edi
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( (unsigned __int8)sub_1C0008B84(a1) )
    {
      PoFxIdleComponent(**(_QWORD **)(a1 + 1792), a2, a3);
      v5 = 1;
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
      v6 = (v12 & 2) == 0;
    }
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(v4 + 4896) )
    {
      v13 = sub_1C0008BB4(v4, 0LL, a3);
      if ( !v5 )
        return v13;
    }
  }
  return v6;
}
