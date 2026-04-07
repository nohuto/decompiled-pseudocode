/*
 * XREFs of ??1CDirectTouchVisual@@MEAA@XZ @ 0x180046584
 * Callers:
 *     ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x1800473D0 (--_GCDirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800465F0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::~CDirectTouchVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *this = (CBaseObject *)&CDirectTouchVisual::`vftable';
  CDirectTouchVisual::StopTimer((CDirectTouchVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  v2 = this[53];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[52];
  if ( v3 )
    CBaseObject::Release(v3);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
