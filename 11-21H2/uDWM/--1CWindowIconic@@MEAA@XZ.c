/*
 * XREFs of ??1CWindowIconic@@MEAA@XZ @ 0x18004A7FC
 * Callers:
 *     ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x18004A7A0 (--_ECWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001C4E4 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x18004A8AC (-CleanupAnimationResources@CWindowIconic@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::~CWindowIconic(CWindowIconic *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject **v7; // rcx

  *(_QWORD *)this = &CWindowIconic::`vftable';
  CWindowIconic::CleanupAnimationResources(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 13);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 14);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject **)*((_QWORD *)this + 10);
  if ( v7 )
  {
    if ( v7[55] )
    {
      CBaseObject::Release(v7[55]);
      v7 = (CBaseObject **)*((_QWORD *)this + 10);
    }
    if ( v7 )
    {
      CWindowData::`scalar deleting destructor'((CWindowData *)v7);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
