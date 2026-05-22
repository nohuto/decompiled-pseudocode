/*
 * XREFs of ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC
 * Callers:
 *     ?SetPropertiesForPresentCount@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJIEIPEAE@Z @ 0x180185330 (-SetPropertiesForPresentCount@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620 (-SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllo.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memcpy_s_0 @ 0x18009FAA0 (memcpy_s_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x1800ED7E0 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ??$?4U?$default_delete@VCSharedCircularQueue@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F856C (--$-4U-$default_delete@VCSharedCircularQueue@@@std@@$0A@@-$unique_ptr@VCSharedCircularQueue@@U-$.c)
 *     ??4?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F85A8 (--4-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1800F89E0 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::SetPropertiesForPresentCount(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        const unsigned __int8 *Source)
{
  rsize_t v5; // r15
  DirectComposition::CDelayedDestructionObject **v6; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdx
  unsigned int v10; // ebx
  bool v12; // zf
  _QWORD *v13; // rbx
  int v14; // eax
  struct DirectComposition::CSharedAllocationBase *v15; // rbx
  char *v16; // rsi
  gsl::details *v17; // rcx
  int v18; // esi
  void *v19; // rcx
  __int64 *v20; // rsi
  LPVOID v21; // rax
  void *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // edx
  const unsigned __int8 *v26; // r8
  gsl::details *v27; // rcx
  const void *v28; // r10
  __int64 v29; // rbx
  __int64 v30; // rax
  void *v31; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-39h] BYREF
  _QWORD *v33; // [rsp+48h] [rbp-31h]
  _QWORD v34[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v35; // [rsp+68h] [rbp-11h] BYREF
  void **v36; // [rsp+78h] [rbp-1h]
  volatile __int32 **v37; // [rsp+80h] [rbp+7h] BYREF
  char v38; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  struct DirectComposition::CSharedAllocationBase *v40; // [rsp+D8h] [rbp+5Fh] BYREF
  unsigned int v41; // [rsp+E0h] [rbp+67h]
  char v42; // [rsp+E8h] [rbp+6Fh]

  v42 = a3;
  v41 = a2;
  v5 = a4;
  v6 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 200);
  v8 = a4 + 24;
  if ( *((_QWORD *)this + 25) && v8 != *(_DWORD *)(*((_QWORD *)this + 26) + 8LL) )
  {
    v9 = 144LL;
LABEL_4:
    v10 = -2147024809;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
      (const char *)v10);
    return v10;
  }
  v12 = *v6 == 0LL;
  v13 = *(_QWORD **)(*((_QWORD *)this + 3) + 456LL);
  v33 = v13;
  if ( v12 )
  {
    if ( a4 > 0xFFFFFFE7 )
    {
      v9 = 152LL;
      goto LABEL_4;
    }
    v40 = 0LL;
    v32 = v13 + 12;
    DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(v13 + 12));
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v40);
    v14 = DirectComposition::CDevice::AllocateSharedMemory((DirectComposition::CDevice *)v13, 32 * v8 + 8, &v40);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
        (const char *)(unsigned int)v14);
LABEL_25:
      CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v32);
      Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v40);
      return v10;
    }
    v15 = v40;
    v31 = 0LL;
    v37 = 0LL;
    v36 = &v31;
    v16 = (char *)v40 + 56;
    v38 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v35, 32 * v8 + 8);
    if ( v35 == -1 || !v16 && v35 )
    {
      gsl::details::terminate(v17);
      __debugbreak();
    }
    v34[0] = v35;
    v34[1] = v16;
    v18 = CSharedCircularQueue::Create((unsigned int *)v34, v8, &v37);
    if ( v38 )
    {
      v19 = *v36;
      *v36 = v37;
      if ( v19 )
        operator delete(v19);
    }
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
        (const char *)(unsigned int)v18);
      std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(&v31);
      v10 = v18;
      goto LABEL_25;
    }
    Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(this, 5, 6, 7, v15, 32 * v8 + 8);
    if ( *((_DWORD *)v15 + 6) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v15 + 2) + 40LL))((__int64)v15 + 16, 3LL);
      *((_DWORD *)v15 + 6) = 3;
    }
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      8,
      v8);
    Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>::operator=(v6, &v40);
    v20 = (__int64 *)((char *)this + 208);
    std::unique_ptr<CSharedCircularQueue>::operator=<std::default_delete<CSharedCircularQueue>,0>(
      (void **)this + 26,
      &v31);
    v21 = DefaultHeap::Alloc(v8);
    if ( !v21 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC2,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
        (const char *)0x8007000ELL);
      if ( v31 )
        operator delete(v31);
      goto LABEL_25;
    }
    v22 = (void *)*((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = v21;
    if ( v22 )
      operator delete(v22);
    if ( v31 )
      operator delete(v31);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v32);
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v40);
  }
  else
  {
    v20 = (__int64 *)((char *)this + 208);
  }
  v23 = *((_QWORD *)this + 27);
  *(_QWORD *)v23 = v41;
  *(_BYTE *)(v23 + 12) = v42;
  v24 = *((_QWORD *)this + 24);
  if ( v24 )
    v25 = *(_DWORD *)(*(_QWORD *)v24 + 4LL);
  else
    v25 = 0;
  v26 = Source;
  *(_DWORD *)(v23 + 8) = v25;
  *(_DWORD *)(v23 + 16) = v5;
  memcpy_s_0((void *const)(v23 + 20), v5, v26, v5);
  v28 = (const void *)*((_QWORD *)this + 27);
  v29 = *v20;
  if ( !v28 && v8 )
  {
    gsl::details::terminate(v27);
    __debugbreak();
  }
  memcpy_0(
    (void *)(*(_QWORD *)v29
           + *(_DWORD *)(v29 + 8)
           * ((unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)v29, 1u) % *(_DWORD *)(v29 + 12))
           + 8LL),
    v28,
    *(unsigned int *)(v29 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v29 + 4LL));
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33[20] + 144LL))(v33[20]);
  if ( (v10 & 0x80000000) != 0 )
  {
    v9 = 214LL;
    goto LABEL_5;
  }
  v30 = *((_QWORD *)this + 24);
  if ( v30 )
    *((_DWORD *)this + 56) = *(_DWORD *)(*(_QWORD *)v30 + 4LL);
  return 0LL;
}
