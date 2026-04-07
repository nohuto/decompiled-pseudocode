/*
 * XREFs of ??1CPressTapVisual@@MEAA@XZ @ 0x1800C92D4
 * Callers:
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800C9340 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800C99B0 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

void __fastcall CPressTapVisual::~CPressTapVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CPressTapVisual::`vftable';
  CPressTapVisual::StopTimer((CPressTapVisual *)this);
  v2 = this[38];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[44];
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[45];
  if ( v4 )
    CBaseObject::Release(v4);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CRenderDataVisual *)this);
}
