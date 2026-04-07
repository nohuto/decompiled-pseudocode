/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x1800E6E50
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x18006A060 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800E7060 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = this[49];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[49] = 0LL;
  }
  v3 = this[54];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[54] = 0LL;
  }
  v4 = this[55];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[55] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 45);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 41);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CRenderDataVisual *)this);
}
