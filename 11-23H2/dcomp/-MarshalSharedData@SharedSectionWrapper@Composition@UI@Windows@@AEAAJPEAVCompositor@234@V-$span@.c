/*
 * XREFs of ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08
 * Callers:
 *     ?RuntimeClassInitialize@SharedSectionWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BF64 (-RuntimeClassInitialize@SharedSectionWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@V-$.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ @ 0x1800191D0 (-Destroy@SharedAllocationHolder@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620 (-SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllo.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ?Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition@@@Z @ 0x180176BD0 (-Set@SharedAllocationHolder@Composition@UI@Windows@@QEAAXPEAVCSharedAllocation@DirectComposition.c)
 *     ?size_bytes@?$span@E$0?0@gsl@@QEBA_KXZ @ 0x18018BFF8 (-size_bytes@-$span@E$0-0@gsl@@QEBA_KXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::SharedSectionWrapper::MarshalSharedData(
        DirectComposition::CDelayedDestructionObject **this,
        __int64 a2,
        __int64 a3)
{
  DirectComposition::CDevice *v5; // rbp
  unsigned __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  size_t v9; // rax
  unsigned __int64 v10; // rax
  DirectComposition::CDelayedDestructionObject *v11; // rbx
  struct DirectComposition::CSharedAllocation *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_QWORD *)a3 )
  {
    v5 = *(DirectComposition::CDevice **)(a2 + 456);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v13);
    v6 = gsl::span<unsigned char,-1>::size_bytes(a3);
    v7 = DirectComposition::CDevice::AllocateSharedMemory(v5, v6, &v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x42u);
      Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v13);
      Windows::UI::Composition::SharedAllocationHolder::Destroy(this + 17);
      return v8;
    }
    Windows::UI::Composition::SharedAllocationHolder::Set(this + 17, v13);
    this[19] = (DirectComposition::CDelayedDestructionObject *)gsl::span<unsigned char,-1>::size_bytes(a3);
    v9 = gsl::span<unsigned char,-1>::size_bytes(a3);
    memcpy_0((char *)this[17] + 56, *(const void **)(a3 + 8), v9);
    v10 = gsl::span<unsigned char,-1>::size_bytes(a3);
    Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(
      (Windows::UI::Composition::ProxyObject *)this,
      0,
      1,
      2,
      this[17],
      v10);
    v11 = this[17];
    if ( *((_DWORD *)v11 + 6) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v11 + 2) + 40LL))((__int64)v11 + 16, 3LL);
      *((_DWORD *)v11 + 6) = 3;
    }
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v5 + 2) + 288LL))((_QWORD *)v5 + 2);
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v13);
  }
  return 0;
}
