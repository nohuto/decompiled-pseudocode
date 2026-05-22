/*
 * XREFs of ??1CPrimitiveGroup@DirectComposition@@MEAA@XZ @ 0x180003620
 * Callers:
 *     ?OnMarshalerRelease@CPrimitiveGroup@DirectComposition@@UEAAXXZ @ 0x1800035E0 (-OnMarshalerRelease@CPrimitiveGroup@DirectComposition@@UEAAXXZ.c)
 *     ??_GCPrimitiveGroup@DirectComposition@@MEAAPEAXI@Z @ 0x1800F99B4 (--_GCPrimitiveGroup@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ @ 0x180003718 (-RemoveFromPrimitiveGroup@CPrimitive@DirectComposition@@IEAAJXZ.c)
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ @ 0x18003BE34 (-ReleaseAllResources@CPrimitiveGroup@DirectComposition@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CPrimitiveGroup::~CPrimitiveGroup(DirectComposition::CPrimitiveGroup *this)
{
  struct DirectComposition::CRebuildableObject *v1; // rdi
  DirectComposition::CDeviceLock *v3; // rcx
  char v4; // al
  DirectComposition::CDelayedDestructionObject *v5; // rcx
  DirectComposition::CTransformGroupProxy *v6; // rcx
  DirectComposition::CDevice *v7; // rcx
  DirectComposition::CDeviceLock *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (DirectComposition::CPrimitiveGroup *)((char *)this + 24);
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroup::`vftable'{for `IDCompositionPrimitiveGroupPartner'};
  *((_QWORD *)this + 1) = &DirectComposition::CPrimitiveGroup::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  v3 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 6) + 96LL);
  *(_QWORD *)v1 = &DirectComposition::CPrimitiveGroup::`vftable'{for `DirectComposition::CRebuildableObject'};
  v8 = v3;
  DirectComposition::CDeviceLock::Enter(v3);
  v4 = *((_BYTE *)this + 40);
  if ( (v4 & 1) != 0 && (v7 = (DirectComposition::CDevice *)*((_QWORD *)this + 6)) != 0LL )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(v7, v1);
  else
    *((_BYTE *)this + 40) = v4 | 1;
  v5 = (DirectComposition::CDelayedDestructionObject *)*((_QWORD *)this + 9);
  if ( v5 )
    DirectComposition::CDelayedDestructionObject::Release(v5);
  DirectComposition::CPrimitiveGroup::ReleaseAllResources(this);
  while ( *((_QWORD *)this + 8) )
    DirectComposition::CPrimitive::RemoveFromPrimitiveGroup(*((DirectComposition::CPrimitive **)this + 8));
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v8);
  v6 = (DirectComposition::CTransformGroupProxy *)*((_QWORD *)this + 7);
  if ( v6 )
    DirectComposition::CTransformGroupProxy::Release(v6);
  *((_QWORD *)this + 38) = &CMergedRect::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 216);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 152);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)v1 = &DirectComposition::CRebuildableObject::`vftable';
}
