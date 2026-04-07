/*
 * XREFs of ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800AC788
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x18006B634 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x1800ACFA4 (-DrawStateW@CButton@@AEAAXPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000AE54 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasedImage::SetBitmapSource(CAtlasedImage *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 9);
  if ( v4 != a2 )
  {
    if ( v4 )
      CBaseObject::Release(v4);
    *((_QWORD *)this + 9) = a2;
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
    CAtlasedImage::SetDirtyFlags(this, 1, 0x2000u);
  }
}
