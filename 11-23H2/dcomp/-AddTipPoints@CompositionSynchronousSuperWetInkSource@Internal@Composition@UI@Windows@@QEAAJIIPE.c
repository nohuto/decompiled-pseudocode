/*
 * XREFs of ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4
 * Callers:
 *     ?AddTipPoints@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJIIPEAE@Z @ 0x180184DF0 (-AddTipPoints@Api@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620 (-SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllo.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F22A4 (-InternalRelease@-$ComPtr@VCCrossContainerHostReadOnlySharedAllocation@DirectComposition@@@WRL@M.c)
 *     ??$?4U?$default_delete@VCSharedCircularQueue@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F856C (--$-4U-$default_delete@VCSharedCircularQueue@@@std@@$0A@@-$unique_ptr@VCSharedCircularQueue@@U-$.c)
 *     ??4?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F85A8 (--4-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1800F89E0 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource::AddTipPoints(
        Windows::UI::Composition::Internal::CompositionSynchronousSuperWetInkSource *this,
        unsigned int a2,
        __int64 a3,
        const unsigned __int8 *a4)
{
  DirectComposition::CDelayedDestructionObject **v4; // r12
  __int64 v5; // rsi
  __int64 **v6; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // r13
  int v12; // eax
  struct DirectComposition::CSharedAllocationBase *v13; // rbx
  char *v14; // r14
  gsl::details *v15; // rcx
  int v16; // r14d
  void *v17; // rcx
  __int64 v18; // r14
  int v19; // r15d
  __int64 *v20; // r12
  const unsigned __int8 *v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *v24; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v25; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  void **v28; // [rsp+60h] [rbp-20h]
  volatile __int32 **v29; // [rsp+68h] [rbp-18h] BYREF
  char v30; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct DirectComposition::CSharedAllocationBase *v32; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+D0h] [rbp+50h]
  const unsigned __int8 *v34; // [rsp+D8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v4 = (DirectComposition::CDelayedDestructionObject **)((char *)this + 184);
  v5 = a2;
  v6 = (__int64 **)((char *)this + 192);
  if ( *((_QWORD *)this + 23) && a2 != *((_DWORD *)*v6 + 2) )
  {
    v8 = -2147024809;
    v9 = 69LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
      (const char *)v8);
    return v8;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 3) + 456LL);
  if ( *v4 )
  {
    v18 = a2;
  }
  else
  {
    v32 = 0LL;
    v25 = (_QWORD *)(v11 + 96);
    DirectComposition::CDeviceLock::Enter((DirectComposition::CDeviceLock *)(v11 + 96));
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v32);
    v12 = DirectComposition::CDevice::AllocateSharedMemory(
            (DirectComposition::CDevice *)v11,
            (unsigned int)(((_DWORD)v5 << 7) + 8),
            &v32);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
        (const char *)(unsigned int)v12);
LABEL_19:
      CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v25);
      Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v32);
      return v8;
    }
    v13 = v32;
    v24 = 0LL;
    v29 = 0LL;
    v28 = &v24;
    v14 = (char *)v32 + 56;
    v30 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v27, (unsigned int)(((_DWORD)v5 << 7) + 8));
    if ( v27 == -1 || !v14 && v27 )
    {
      gsl::details::terminate(v15);
      __debugbreak();
    }
    v26[0] = v27;
    v26[1] = v14;
    v16 = CSharedCircularQueue::Create((unsigned int *)v26, v5, &v29);
    if ( v30 )
    {
      v17 = *v28;
      *v28 = v29;
      if ( v17 )
        operator delete(v17);
    }
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsynchronoussuperwetinksource.cpp",
        (const char *)(unsigned int)v16);
      if ( v24 )
        operator delete(v24);
      v8 = v16;
      goto LABEL_19;
    }
    Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(
      this,
      1,
      2,
      3,
      v13,
      (unsigned int)(((_DWORD)v5 << 7) + 8));
    if ( *((_DWORD *)v13 + 6) != 3 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 2) + 40LL))((__int64)v13 + 16, 3LL);
      *((_DWORD *)v13 + 6) = 3;
    }
    v18 = v5;
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      4,
      v5);
    Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>::operator=(v4, &v32);
    v6 = (__int64 **)((char *)this + 192);
    std::unique_ptr<CSharedCircularQueue>::operator=<std::default_delete<CSharedCircularQueue>,0>(
      (void **)this + 24,
      &v24);
    if ( v24 )
      operator delete(v24);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v25);
    Microsoft::WRL::ComPtr<DirectComposition::CCrossContainerHostReadOnlySharedAllocation>::InternalRelease(&v32);
    a4 = v34;
  }
  v19 = 0;
  if ( v33 )
  {
    while ( 1 )
    {
      v20 = *v6;
      v21 = &a4[(unsigned int)(v5 * v19)];
      if ( !v21 && v18 )
      {
        gsl::details::terminate(this);
        __debugbreak();
      }
      memcpy_0(
        (void *)(*v20
               + *((_DWORD *)v20 + 2)
               * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)*v20, 1u) % *((_DWORD *)v20 + 3))
               + 8LL),
        v21,
        *((unsigned int *)v20 + 2));
      _InterlockedIncrement((volatile signed __int32 *)(*v20 + 4));
      if ( ++v19 >= v33 )
        break;
      a4 = v34;
    }
  }
  v22 = **v6;
  v23 = *(unsigned int *)(v22 + 4);
  if ( (unsigned int)(*(_DWORD *)(v22 + 4) - *((_DWORD *)this + 56)) >= 3 )
  {
    *((_DWORD *)this + 56) = v23;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, const unsigned __int8 *))(**(_QWORD **)(v11 + 160) + 144LL))(
           *(_QWORD *)(v11 + 160),
           v23,
           a3,
           a4);
    if ( (v8 & 0x80000000) != 0 )
    {
      v9 = 123LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
