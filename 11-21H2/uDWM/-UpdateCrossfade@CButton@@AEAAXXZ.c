/*
 * XREFs of ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x180005C88
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180034BB0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180005CF4 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180005D88 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001DDAC (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 */

void __fastcall CButton::UpdateCrossfade(CButton *this)
{
  __int64 v2; // rcx
  float v3; // [rsp+30h] [rbp+8h] BYREF
  float v4; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 49) + 72LL) || (*((_BYTE *)this + 288) & 0x40) != 0 )
  {
    *((_BYTE *)this + 288) &= ~0x40u;
    CButton::DeactivateTimeline(this);
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
  else
  {
    CButton::ComputeFadeValues(this, &v3, &v4);
    CAtlasedImage::SetOpacity(*(CAtlasedImage **)(v2 + 296), v3);
    CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 38), v4);
  }
}
