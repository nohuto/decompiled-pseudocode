/*
 * XREFs of ??1CImage@@EEAA@XZ @ 0x18003A8E0
 * Callers:
 *     ??_GCImage@@EEAAPEAXI@Z @ 0x18003A930 (--_GCImage@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImage::~CImage(CImage *this)
{
  CBaseObject *v2; // rcx

  *(_QWORD *)this = &CImage::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual(this);
}
