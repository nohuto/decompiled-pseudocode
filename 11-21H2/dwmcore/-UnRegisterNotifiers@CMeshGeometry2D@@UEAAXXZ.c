/*
 * XREFs of ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180207160
 * Callers:
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1801144DE (--1CMeshGeometry2D@@MEAA@XZ.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18020695C (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CMeshGeometry2D::UnRegisterNotifiers(CMeshGeometry2D *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    DefaultHeap::Free(v2);
    *((_QWORD *)this + 16) = 0LL;
    *((_DWORD *)this + 30) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    DefaultHeap::Free(v3);
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    DefaultHeap::Free(v4);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 38) = 0;
  }
  v5 = (void *)*((_QWORD *)this + 22);
  if ( v5 )
  {
    DefaultHeap::Free(v5);
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
}
