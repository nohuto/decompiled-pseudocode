/*
 * XREFs of ?Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z @ 0x18001B910
 * Callers:
 *     ?Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z @ 0x18001B7CC (-Create@CSurfaceManager@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAV12@PEAPEAV12@@Z.c)
 * Callees:
 *     ?ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x18001B9F0 (-ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ.c)
 *     ?SetDefaultAtlasSize@VideoMemoryBreakdown@DirectComposition@@QEAAXIII@Z @ 0x18001BAF0 (-SetDefaultAtlasSize@VideoMemoryBreakdown@DirectComposition@@QEAAXIII@Z.c)
 */

__int64 __fastcall DirectComposition::CSurfaceManager::Initialize(
        DirectComposition::CSurfaceManager *this,
        struct DirectComposition::CSurfaceFactory *a2,
        struct DirectComposition::CSurfaceManager *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // ecx

  *((_QWORD *)this + 16) = a2;
  if ( a3 )
  {
    v6 = *((_DWORD *)a2 + 33);
    v7 = *((_DWORD *)a3 + 25);
    if ( *((_BYTE *)a2 + 249) )
      v6 = 0x800000;
    DirectComposition::VideoMemoryBreakdown::SetDefaultAtlasSize(
      (DirectComposition::CSurfaceManager *)((char *)this + 96),
      *((_DWORD *)a3 + 24),
      v7,
      v6);
    v8 = *((_DWORD *)a3 + 26);
    v9 = *((_DWORD *)a3 + 27);
    if ( v8 >= v6 )
      v8 = v6;
    *((_DWORD *)this + 26) = v8;
    if ( v9 >= v6 )
      v9 = v6;
    *((_DWORD *)this + 27) = v9;
    *((_DWORD *)this + 31) = *((_DWORD *)a3 + 31);
  }
  else
  {
    DirectComposition::CSurfaceManager::ComputeVideoMemoryBreakdown(this);
  }
  return 0LL;
}
