/*
 * XREFs of ?SetDefaultAtlasSize@VideoMemoryBreakdown@DirectComposition@@QEAAXIII@Z @ 0x18001BAF0
 * Callers:
 *     ?Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z @ 0x18001B910 (-Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z.c)
 *     ?ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x18001B9F0 (-ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::VideoMemoryBreakdown::SetDefaultAtlasSize(
        DirectComposition::VideoMemoryBreakdown *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // eax
  unsigned int v6; // r8d

  v4 = a2;
  if ( a2 >= a4 )
    v4 = a4;
  *(_DWORD *)this = v4;
  if ( a3 >= a4 )
    a3 = a4;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 4) = (2 * v4 / 3 + 31) & 0xFFFFFFE0;
  *((_DWORD *)this + 5) = (2 * a3 / 3 + 31) & 0xFFFFFFE0;
  v5 = a4;
  v6 = (4 * a3 / 3 + 31) & 0xFFFFFFE0;
  if ( ((4 * v4 / 3 + 31) & 0xFFFFFFE0) < a4 )
    v5 = (4 * v4 / 3 + 31) & 0xFFFFFFE0;
  *((_DWORD *)this + 2) = v5;
  if ( v6 < a4 )
    a4 = v6;
  *((_DWORD *)this + 3) = a4;
}
