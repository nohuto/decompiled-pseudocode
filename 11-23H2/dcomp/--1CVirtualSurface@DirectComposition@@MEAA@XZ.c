/*
 * XREFs of ??1CVirtualSurface@DirectComposition@@MEAA@XZ @ 0x18003A9DC
 * Callers:
 *     ??_ECVirtualSurface@DirectComposition@@MEAAPEAXI@Z @ 0x18003C4C0 (--_ECVirtualSurface@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?Release@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x18003AB80 (-Release@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 *     ?Remove@?$CLinkTargetedDoubleLinkedList@VCVirtualSurface@DirectComposition@@$0FI@$0FI@@@QEAAXPEAVCVirtualSurface@DirectComposition@@@Z @ 0x18003C1C4 (-Remove@-$CLinkTargetedDoubleLinkedList@VCVirtualSurface@DirectComposition@@$0FI@$0FI@@@QEAAXPEA.c)
 *     ?DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ @ 0x18003C390 (-DestroyAllTilesAndClumps@CVirtualSurface@DirectComposition@@AEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIDCompositionPrimitivePartner@@@@IEAAKXZ @ 0x180081BCC (-InternalRelease@-$CMILRefCountBaseT@UIDCompositionPrimitivePartner@@@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180083180 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ @ 0x1800FAC54 (-Rebuild@CRebuildableObject@DirectComposition@@QEAAJXZ.c)
 */

void __fastcall DirectComposition::CVirtualSurface::~CVirtualSurface(DirectComposition::CVirtualSurface *this)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // r9
  __int64 i; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  DirectComposition::CSurfaceFactory *v9; // rcx
  int v10; // eax
  DirectComposition::CDevice **v11; // rcx
  DirectComposition::CDeviceLock *v12; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &DirectComposition::CVirtualSurface::`vftable'{for `CMILCOMBaseT<IDCompositionVirtualSurface>'};
  *((_QWORD *)this + 2) = &DirectComposition::CVirtualSurface::`vftable'{for `DirectComposition::CDirtyNotifier'};
  *((_QWORD *)this + 8) = &DirectComposition::CVirtualSurface::`vftable'{for `IDCompositionSurfaceDebug'};
  *((_QWORD *)this + 9) = &DirectComposition::CVirtualSurface::`vftable'{for `IDCompositionSurfacePartner'};
  *((_QWORD *)this + 10) = &DirectComposition::CVirtualSurface::`vftable'{for `DirectComposition::IDCompositionSurfaceListenerInternal'};
  v12 = (DirectComposition::CDeviceLock *)(*(_QWORD *)(*((_QWORD *)this + 13) + 24LL) + 96LL);
  DirectComposition::CDeviceLock::Enter(v12);
  if ( *((_QWORD *)this + 38) )
  {
    v2 = *((_QWORD *)this + 37);
    if ( (*(_BYTE *)(v2 + 40) & 1) != 0 )
    {
      v10 = DirectComposition::CRebuildableObject::Rebuild((DirectComposition::CRebuildableObject *)(v2 + 24));
      v11 = (DirectComposition::CDevice **)(v2 + 48);
      if ( v10 < 0 )
      {
        if ( *((int *)*v11 + 158) >= 0 )
          *((_DWORD *)*v11 + 158) = v10;
        *(_BYTE *)(v2 + 40) &= ~1u;
      }
      DirectComposition::CDevice::RemoveDirtyRebuildableObject(
        *v11,
        (struct DirectComposition::CRebuildableObject *)((v2 + 24) & -(__int64)(v2 != 0)));
    }
    v3 = *((_DWORD *)this + 12);
    v4 = *((_QWORD *)this + 3);
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      if ( ((*((_QWORD *)this + 38) + 16LL) & -(__int64)(*((_QWORD *)this + 38) != 0LL)) == *(_QWORD *)(v4 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v3 )
    {
      while ( (unsigned int)i < v3 - 1 )
      {
        *(_QWORD *)(v4 + 8 * i) = *(_QWORD *)(v4 + 8LL * (unsigned int)(i + 1));
        i = (unsigned int)(i + 1);
        v3 = *((_DWORD *)this + 12);
      }
      *((_DWORD *)this + 12) = v3 - 1;
    }
  }
  v6 = *((_QWORD *)this + 37);
  if ( v6 )
    DirectComposition::CDelayedDestructionObject::Release((DirectComposition::CDelayedDestructionObject *)(v6 + 8));
  if ( *((_QWORD *)this + 38) )
    CMILRefCountBaseT<IDCompositionPrimitivePartner>::InternalRelease();
  v7 = *(_QWORD *)(*((_QWORD *)this + 13) + 24LL);
  v8 = *(_QWORD *)(v7 + 464);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(v7 + 96));
  if ( *((_QWORD *)this + 11) )
    CLinkTargetedDoubleLinkedList<DirectComposition::CVirtualSurface,88,88>::Remove(v8 + 8, this);
  DirectComposition::CVirtualSurface::DestroyAllTilesAndClumps(this);
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>((_QWORD **)&v12);
  v9 = (DirectComposition::CSurfaceFactory *)*((_QWORD *)this + 13);
  if ( v9 )
    DirectComposition::CSurfaceFactory::Release(v9);
  FastRegion::CRegion::FreeMemory((DirectComposition::CVirtualSurface *)((char *)this + 136));
  *((_QWORD *)this + 2) = &DirectComposition::CDirtyNotifier::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 24);
}
