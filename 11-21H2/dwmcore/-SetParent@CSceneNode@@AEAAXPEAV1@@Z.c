/*
 * XREFs of ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18023E5F4
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x18023DEE8 (--1CSceneNode@@MEAA@XZ.c)
 *     ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x18023E3A4 (-OnChildrenChanged@CSceneNode@@QEAAXXZ.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x18023E484 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x18023E0F0 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18023E1B8 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 */

void __fastcall CSceneNode::SetParent(CSceneNode *this, struct CSceneNode *a2)
{
  __int64 v4; // rcx

  if ( *((struct CSceneNode **)this + 16) != a2 )
  {
    if ( !a2 || *((_QWORD *)this + 15) != *((_QWORD *)a2 + 15) )
      CSceneNode::DehydrateSpectreResources(this);
    *((_QWORD *)this + 16) = a2;
    if ( a2 && *((_QWORD *)a2 + 17) )
    {
      v4 = *((_QWORD *)this + 17);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      else
        CSceneNode::HydrateSpectreResources(this, *((struct CSceneWorld **)a2 + 15));
    }
  }
}
