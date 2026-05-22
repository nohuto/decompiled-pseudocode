/*
 * XREFs of ??1CSurfaceFactory@DirectComposition@@MEAA@XZ @ 0x18001B2E4
 * Callers:
 *     ??_ECSurfaceFactory@DirectComposition@@MEAAPEAXI@Z @ 0x18001B030 (--_ECSurfaceFactory@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectComposition@@@Z @ 0x18001B998 (--$ReleaseInterface@VCSurfaceManager@DirectComposition@@@@YAXAEAPEAVCSurfaceManager@DirectCompos.c)
 *     ??$ReleaseInterface@VCScratchSurfaceManager@DirectComposition@@@@YAXAEAPEAVCScratchSurfaceManager@DirectComposition@@@Z @ 0x18001B9C4 (--$ReleaseInterface@VCScratchSurfaceManager@DirectComposition@@@@YAXAEAPEAVCScratchSurfaceManage.c)
 *     ?Clear@CSurfaceManager@DirectComposition@@QEAAXXZ @ 0x18001BD40 (-Clear@CSurfaceManager@DirectComposition@@QEAAXXZ.c)
 *     ?CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180021458 (-CollectScratchSurfaces@CScratchSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ @ 0x18009BE60 (-Uninitialize@CDxDevice@DirectComposition@@IEAAXXZ.c)
 *     ?Remove@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x18009C2A4 (-Remove@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEAAXP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CSurfaceFactory::~CSurfaceFactory(DirectComposition::CSurfaceFactory *this)
{
  DirectComposition::CDxDevice *v1; // rsi
  DirectComposition::CDeviceLock *v3; // rcx
  __int64 i; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  DirectComposition::CScratchSurfaceManager *v8; // rcx
  DirectComposition::CSurfaceManager *v9; // rcx

  v1 = (DirectComposition::CSurfaceFactory *)((char *)this + 8);
  *(_QWORD *)this = &DirectComposition::CSurfaceFactory::`vftable'{for `IDCompositionSurfaceFactoryPartner3'};
  v3 = (DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL);
  *(_QWORD *)v1 = &DirectComposition::CSurfaceFactory::`vftable'{for `DirectComposition::CDxDevice'};
  DirectComposition::CDeviceLock::Enter(v3);
  for ( i = *((_QWORD *)this + 42); i; *((_QWORD *)this + 42) = i )
  {
    v5 = i + 208;
    *(_DWORD *)(v5 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 24LL);
    v6 = *((_QWORD *)this + 42);
    i = *(_QWORD *)(v6 + 240);
    *(_QWORD *)(v6 + 240) = 0LL;
  }
  if ( *((_DWORD *)this + 86) == 1 )
    --*(_DWORD *)(*((_QWORD *)this + 3) + 372LL);
  v7 = *((_QWORD *)this + 3);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(v7 + 96));
  CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::Remove(v7 + 608, this);
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL));
  v8 = (DirectComposition::CScratchSurfaceManager *)*((_QWORD *)this + 38);
  if ( v8 )
    DirectComposition::CScratchSurfaceManager::CollectScratchSurfaces(v8, 1);
  v9 = (DirectComposition::CSurfaceManager *)*((_QWORD *)this + 39);
  if ( v9 )
    DirectComposition::CSurfaceManager::Clear(v9);
  ReleaseInterface<DirectComposition::CSurfaceManager>((char *)this + 312);
  ReleaseInterface<DirectComposition::CScratchSurfaceManager>((char *)this + 304);
  DirectComposition::CDxDevice::Uninitialize(v1);
  DirectComposition::CDeviceLock::Leave((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL));
  if ( *((_BYTE *)this + 352) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
  DirectComposition::CDxDevice::~CDxDevice(v1);
}
