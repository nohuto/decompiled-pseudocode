/*
 * XREFs of ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3C28
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180013490 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031A20 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800338F0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C2D68 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800C3260 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::SetIconicBitmap(CWindowData *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 54) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
}
