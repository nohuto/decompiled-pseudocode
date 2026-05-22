/*
 * XREFs of ?ComputeVideoMemoryBreakdown@CSurfaceManager@DirectComposition@@IEAAXXZ @ 0x18001B9F0
 * Callers:
 *     ?Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z @ 0x18001B910 (-Initialize@CSurfaceManager@DirectComposition@@AEAAJPEAVCSurfaceFactory@2@PEAV12@@Z.c)
 * Callees:
 *     ?SetDefaultAtlasSize@VideoMemoryBreakdown@DirectComposition@@QEAAXIII@Z @ 0x18001BAF0 (-SetDefaultAtlasSize@VideoMemoryBreakdown@DirectComposition@@QEAAXIII@Z.c)
 *     ?GetDedicatedVideoMemory@CDxDevice@DirectComposition@@QEBA_KXZ @ 0x1800F7704 (-GetDedicatedVideoMemory@CDxDevice@DirectComposition@@QEBA_KXZ.c)
 */

void __fastcall DirectComposition::CSurfaceManager::ComputeVideoMemoryBreakdown(
        DirectComposition::CSurfaceManager *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // r10d
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax

  v1 = *((_QWORD *)this + 16);
  v3 = *(_DWORD *)(v1 + 132);
  v4 = *(_DWORD *)(v1 + 124);
  if ( *(_BYTE *)(v1 + 249) )
    v3 = 0x800000;
  v5 = *(_DWORD *)(v1 + 128);
  if ( !v4 || !v5 )
  {
    *((_DWORD *)this + 31) = 786432;
    if ( DirectComposition::CDxDevice::GetDedicatedVideoMemory((DirectComposition::CDxDevice *)(v1 + 8)) < 0x7400000 )
    {
      v7 = 548;
      v6 = 1024;
      goto LABEL_8;
    }
    v6 = 1024;
    goto LABEL_20;
  }
  *((_DWORD *)this + 31) = v4 * v5;
  v6 = (75 * v4 / 0x64u + 63) & 0xFFFFFFC0;
  v7 = (75 * v5 / 0x64u + 63) & 0xFFFFFFC0;
  if ( v6 > 0x400 )
    v6 = 1024;
  if ( v7 > 0x400 )
LABEL_20:
    v7 = 1024;
LABEL_8:
  DirectComposition::VideoMemoryBreakdown::SetDefaultAtlasSize(
    (DirectComposition::CSurfaceManager *)((char *)this + 96),
    v6,
    v7,
    v3);
  if ( v4 && v5 )
  {
    v8 = *((_DWORD *)this + 27);
    v9 = *((_DWORD *)this + 26);
    if ( v8 <= v5 + 2 )
      v8 = v5 + 2;
    if ( v9 <= v4 + 2 )
      v9 = v4 + 2;
    v10 = v3;
    if ( v9 < v3 )
      v10 = v9;
    *((_DWORD *)this + 26) = v10;
    if ( v8 < v3 )
      v3 = v8;
    *((_DWORD *)this + 27) = v3;
  }
}
