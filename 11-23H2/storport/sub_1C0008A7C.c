/*
 * XREFs of sub_1C0008A7C @ 0x1C0008A7C
 * Callers:
 *     sub_1C00085EC @ 0x1C00085EC (sub_1C00085EC.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001AF48 @ 0x1C001AF48 (sub_1C001AF48.c)
 *     sub_1C00437A0 @ 0x1C00437A0 (sub_1C00437A0.c)
 *     sub_1C004D914 @ 0x1C004D914 (sub_1C004D914.c)
 *     sub_1C004F800 @ 0x1C004F800 (sub_1C004F800.c)
 *     sub_1C00602B8 @ 0x1C00602B8 (sub_1C00602B8.c)
 *     sub_1C00A1C44 @ 0x1C00A1C44 (sub_1C00A1C44.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 */

char __fastcall sub_1C0008A7C(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r14
  unsigned int v6; // ebp
  char v9; // si
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 4896) )
  {
    v9 = sub_1C0008BF0(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)sub_1C0008B84(a1) )
  {
    if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2088));
      if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2096));
    }
    v11 = *(_QWORD *)(a1 + 1792);
    if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
      v11 = *(_QWORD *)(a1 + 1792);
    }
    if ( *(_DWORD *)(a1 + 972) && (v6 & 1) != 0 )
      v6 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v11, a2, v6);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  return v9;
}
