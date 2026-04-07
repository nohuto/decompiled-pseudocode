/*
 * XREFs of ??1CAnimationResource@@IEAA@XZ @ 0x1800AB9B4
 * Callers:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800ABE80 (-Release@CAnimationResource@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationResource::~CAnimationResource(CAnimationResource *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CAnimationResource::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v3 )
    CBaseObject::Release(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 3);
}
