/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCAtlasSurface@DirectComposition@@$0A@@@QEAAJPEFBQEAVCAtlasSurface@DirectComposition@@I@Z @ 0x18007315C
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<DirectComposition::CAtlasSurface *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    v7 = 181;
    v8 = -2147024362;
    goto LABEL_8;
  }
  v4 = 0;
  if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8LL, a1, a2);
    v4 = v6;
    if ( v6 >= 0 )
      return v4;
    v7 = 192;
    v8 = v6;
LABEL_8:
    DoStackCaptureDirect(v8, v7);
    return v4;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * v2) = *a2;
  *(_DWORD *)(a1 + 24) = v3;
  return v4;
}
