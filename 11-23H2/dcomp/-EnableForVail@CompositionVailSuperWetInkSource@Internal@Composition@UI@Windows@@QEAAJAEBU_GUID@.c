/*
 * XREFs of ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC
 * Callers:
 *     ?EnableForVail@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJU_GUID@@III0III0@Z @ 0x180185AC0 (-EnableForVail@Api@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620 (-SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllo.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38 (-AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1P.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ??$?4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@?$ComPtr@VCSharedAllocationBase@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@12@@Z @ 0x1800FC0B4 (--$-4VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@-$ComPtr@VCSharedAllocatio.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource::EnableForVail(
        Windows::UI::Composition::Internal::CompositionVailSuperWetInkSource *this,
        const struct _GUID *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        const struct _GUID *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        const struct _GUID *a10)
{
  __int64 *v10; // r14
  __int64 *v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  int v18; // eax
  unsigned int v19; // ebx
  struct DirectComposition::CSharedAllocationBase *v20; // rbx
  struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation **v21; // rbx
  struct DirectComposition::CSharedAllocationBase *v22; // rbx
  struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation **v24; // [rsp+28h] [rbp-18h]
  DirectComposition::CDevice *v25; // [rsp+30h] [rbp-10h]
  _QWORD *v26; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct DirectComposition::CSharedAllocationBase *v28; // [rsp+70h] [rbp+30h] BYREF

  v10 = (__int64 *)((char *)this + 184);
  if ( *((_QWORD *)this + 23) || (v15 = (__int64 *)((char *)this + 192), *((_QWORD *)this + 24)) )
  {
    v19 = -2147483635;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvailsuperwetinksource.cpp",
      (const char *)0x8000000DLL);
  }
  else
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      9,
      1LL);
    v16 = *((_QWORD *)this + 3);
    v28 = 0LL;
    v25 = *(DirectComposition::CDevice **)(v16 + 456);
    v26 = (_QWORD *)((char *)v25 + 96);
    DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)v25 + 96));
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v28);
    v17 = a4;
    v18 = DirectComposition::CDevice::AllocateCrossContainerHostReadOnlySharedMemory(
            v25,
            (struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation *)a4,
            a3,
            a10,
            a2,
            &v28);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = v28;
      Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(this, 1, 2, 3, v28, v17);
      if ( *((_DWORD *)v20 + 6) != 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v20 + 2) + 40LL))((__int64)v20 + 16, 3LL);
        *((_DWORD *)v20 + 6) = 3;
      }
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        4,
        a5);
      Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocationBase>::operator=<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>(
        v10,
        (__int64 *)&v28);
      Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v28);
      v21 = (struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation **)a8;
      DirectComposition::CDevice::AllocateCrossContainerHostReadOnlySharedMemory(
        v25,
        (struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation *)a8,
        a7,
        a10,
        a6,
        &v28);
      v24 = v21;
      v22 = v28;
      Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(
        this,
        5,
        6,
        7,
        v28,
        (unsigned __int64)v24);
      if ( *((_DWORD *)v22 + 6) != 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v22 + 2) + 40LL))((__int64)v22 + 16, 3LL);
        *((_DWORD *)v22 + 6) = 3;
      }
      DirectComposition::CDevice::ResourceSetIntegerProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        8,
        a9);
      Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocationBase>::operator=<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>(
        v15,
        (__int64 *)&v28);
      v19 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvailsuperwetinksource.cpp",
        (const char *)(unsigned int)v18);
    }
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v26);
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v28);
  }
  return v19;
}
