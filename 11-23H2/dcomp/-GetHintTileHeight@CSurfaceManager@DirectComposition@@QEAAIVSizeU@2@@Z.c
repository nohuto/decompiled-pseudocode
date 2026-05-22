/*
 * XREFs of ?GetHintTileHeight@CSurfaceManager@DirectComposition@@QEAAIVSizeU@2@@Z @ 0x1800FBCE4
 * Callers:
 *     ?RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtlasSurface@2@@Z @ 0x1800200E0 (-RequestSurface@CSurfaceManager@DirectComposition@@QEAAJW4DXGI_FORMAT@@_NAEBVSizeU@2@PEAPEAVCAtl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceManager::GetHintTileHeight(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r8
  __int64 v4; // rax

  v2 = 0;
  v3 = (_DWORD *)(a1 + 136);
  v4 = 0LL;
  while ( v3[1] < HIDWORD(a2) || *v3 < (unsigned int)a2 )
  {
    v4 = (unsigned int)(v4 + 1);
    v3 += 2;
    if ( (unsigned int)v4 >= 5 )
      return v2;
  }
  return *(unsigned int *)(a1 + 8 * v4 + 140);
}
