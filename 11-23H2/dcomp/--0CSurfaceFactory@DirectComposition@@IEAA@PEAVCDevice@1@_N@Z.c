/*
 * XREFs of ??0CSurfaceFactory@DirectComposition@@IEAA@PEAVCDevice@1@_N@Z @ 0x18001B5E8
 * Callers:
 *     ?Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z @ 0x18001B554 (-Create@CSurfaceFactory@DirectComposition@@SAJPEAVCDevice@2@PEAUIUnknown@@PEAV12@_NPEAPEAV12@@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?Add@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEAAXPEAVCSurfaceFactory@DirectComposition@@@Z @ 0x18009C270 (-Add@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEAAXPEAV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

DirectComposition::CSurfaceFactory *__fastcall DirectComposition::CSurfaceFactory::CSurfaceFactory(
        DirectComposition::CSurfaceFactory *this,
        struct DirectComposition::CDevice *a2,
        char a3)
{
  __int64 v4; // rbx

  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *(_QWORD *)this = &DirectComposition::CSurfaceFactory::`vftable'{for `IDCompositionSurfaceFactoryPartner3'};
  *((_QWORD *)this + 1) = &DirectComposition::CSurfaceFactory::`vftable'{for `DirectComposition::CDxDevice'};
  v4 = *((_QWORD *)this + 3);
  *((_BYTE *)this + 352) = a3;
  *((_DWORD *)this + 89) = 0;
  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(v4 + 96));
  CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::Add(v4 + 608, this);
  if ( *((_BYTE *)this + 352) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
  return this;
}
