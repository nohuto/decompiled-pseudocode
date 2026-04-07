/*
 * XREFs of ??1CIndirectTouchVisual@@MEAA@XZ @ 0x1800C0B44
 * Callers:
 *     ??_GCIndirectTouchVisual@@MEAAPEAXI@Z @ 0x1800C0BE0 (--_GCIndirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800C13E0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::~CIndirectTouchVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CIndirectTouchVisual::`vftable';
  CIndirectTouchVisual::Stop((CIndirectTouchVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 104); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[49] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[48];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 49);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CRenderDataVisual *)this);
}
