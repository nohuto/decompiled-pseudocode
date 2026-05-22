/*
 * XREFs of ?SetSharedSectionReferenceProperties@ProxyObject@Composition@UI@Windows@@IEAAXIIIPEAVCSharedAllocationBase@DirectComposition@@_K@Z @ 0x180040620
 * Callers:
 *     ?SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z @ 0x1800403B8 (-SetPath@CompositionPathGeometry@Composition@UI@Windows@@QEAAJPEAVCompositionPath@234@@Z.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 *     ?EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@@III0III0@Z @ 0x180185BDC (-EnableForVail@CompositionVailSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJAEBU_GUID@.c)
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 *     ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z @ 0x18019B838 (-RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVIn.c)
 * Callees:
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::SetSharedSectionReferenceProperties(
        Windows::UI::Composition::ProxyObject *this,
        int a2,
        int a3,
        int a4,
        struct DirectComposition::CSharedAllocationBase *a5,
        unsigned __int64 a6)
{
  struct DirectComposition::CSharedAllocationBase *v6; // r14
  int v8; // esi
  int v12; // r15d
  DirectComposition::CDevice *v13; // rbx
  struct DirectComposition::CSharedAllocationBase *v14; // rax
  void (__fastcall ***v15)(_QWORD); // rcx
  DirectComposition::CDevice *v16; // rbx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rbp
  struct DirectComposition::CSharedAllocationBase *v20; // rcx
  void (__fastcall ***v21)(_QWORD); // rcx
  int v22; // esi
  DirectComposition::CDevice *v23; // rbx
  struct DirectComposition::CSharedAllocationBase *v24; // rcx
  unsigned __int64 v25; // rax
  void (__fastcall ***v26)(_QWORD); // rcx

  v6 = a5;
  v8 = *((_DWORD *)this + 32);
  v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL) + 12LL);
  if ( v8 )
  {
    v13 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v13, 0x10u, (void **)&a5, 0);
    v14 = a5;
    *(_DWORD *)a5 = 13;
    *((_DWORD *)v14 + 1) = v8;
    *((_DWORD *)v14 + 2) = a2;
    *((_DWORD *)v14 + 3) = v12;
    v15 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v13 + 10);
    if ( v15 )
      (**v15)(v15);
  }
  v16 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
  v17 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedAllocationBase *))(*(_QWORD *)v6 + 40LL))(v6);
  v18 = *((_DWORD *)this + 32);
  v19 = v17;
  if ( v18 )
  {
    DirectComposition::CDevice::BeginKernelCommand(v16, 0x18u, (void **)&a5, 0);
    v20 = a5;
    *(_DWORD *)a5 = 8;
    *((_DWORD *)v20 + 1) = v18;
    *((_DWORD *)v20 + 2) = a3;
    *((_QWORD *)v20 + 2) = v19;
    v21 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v16 + 10);
    if ( v21 )
      (**v21)(v21);
  }
  v22 = *((_DWORD *)this + 32);
  if ( v22 )
  {
    v23 = *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL);
    DirectComposition::CDevice::BeginKernelCommand(v23, 0x18u, (void **)&a5, 0);
    v24 = a5;
    v25 = a6;
    *(_DWORD *)a5 = 8;
    *((_DWORD *)v24 + 1) = v22;
    *((_DWORD *)v24 + 2) = a4;
    *((_QWORD *)v24 + 2) = v25;
    v26 = (void (__fastcall ***)(_QWORD))*((_QWORD *)v23 + 10);
    if ( v26 )
      (**v26)(v26);
  }
}
