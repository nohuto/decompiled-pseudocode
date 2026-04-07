/*
 * XREFs of ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800693F8
 * Callers:
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180003E64 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800B3D00 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800BEE90 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CWindowData *,0>::Find(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  while ( *a2 != *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return 1LL;
}
