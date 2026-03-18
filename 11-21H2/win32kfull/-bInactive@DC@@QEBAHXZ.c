/*
 * XREFs of ?bInactive@DC@@QEBAHXZ @ 0x1C0138894
 * Callers:
 *     NtGdiFillPath @ 0x1C0136730 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C01376C0 (NtGdiSelectClipPath.c)
 *     NtGdiFlattenPath @ 0x1C02ABDD0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02ABEC0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02AC150 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AC2B0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AC450 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AC590 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 25) )
    return 0;
  v1 = *((_DWORD *)this + 62);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
