/*
 * XREFs of ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x1801139E0
 * Callers:
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180113A1A (--1CGeometry2DGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180206434 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800D7BE4 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CGeometry2DGroup::UnRegisterNotifiers(CGeometry2DGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 14);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 26));
    DefaultHeap::Free(*((void **)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
}
