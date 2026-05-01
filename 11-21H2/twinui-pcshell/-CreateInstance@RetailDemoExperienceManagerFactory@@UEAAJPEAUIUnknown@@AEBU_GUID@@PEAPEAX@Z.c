/*
 * XREFs of ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CA990
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x1800CA8C4 (--$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800CAA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellCo.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VCImmersiveShellComponentWithGITSite@@UIWeakReferenceSource@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180382ADC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_180382ADC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall RetailDemoExperienceManagerFactory::CreateInstance(
        RetailDemoExperienceManagerFactory *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  RetailDemoExperienceManager *v7; // rbx
  int CanCastTo; // esi
  const struct _GUID *v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RetailDemoExperienceManager *v13; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x80040110LL,
      v11);
  v13 = 0LL;
  v6 = Microsoft::WRL::Details::MakeAndInitialize<RetailDemoExperienceManager,RetailDemoExperienceManager,>(&v13);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v11);
  *a4 = 0LL;
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(a3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v7 = v13;
    *a4 = v13;
    (*(void (__fastcall **)(RetailDemoExperienceManager *))(*(_QWORD *)v7 + 8LL))(v7);
    CanCastTo = 0;
  }
  else
  {
    v10 = a3;
    v7 = v13;
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,CImmersiveShellComponentWithGITSite,IWeakReferenceSource,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::CanCastTo(
                  v13,
                  v10,
                  a4);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
  }
  if ( CanCastTo < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)CanCastTo,
      v11);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(v7);
  return 0LL;
}
