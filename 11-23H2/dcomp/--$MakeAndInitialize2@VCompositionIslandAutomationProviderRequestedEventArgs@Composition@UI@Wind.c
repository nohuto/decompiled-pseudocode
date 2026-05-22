/*
 * XREFs of ??$MakeAndInitialize2@VCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@V1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandAutomationProviderRequestedEventArgs@Composition@UI@Windows@@@Z @ 0x1801114B4
 * Callers:
 *     ?GetAutomationProvider_Callback@CompositionIsland@Composition@UI@Windows@@QEAAJPEAPEAUIInspectable@@@Z @ 0x180112650 (-GetAutomationProvider_Callback@CompositionIsland@Composition@UI@Windows@@QEAAJPEAPEAUIInspectab.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs,Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs>(
        _QWORD *a1)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  _OWORD *v5; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v6; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v6 = 0LL;
  v5 = DefaultHeap::Alloc(0x38uLL);
  v2 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass((Microsoft::WRL2::NestableRuntimeClass *)v2);
    *(_QWORD *)v2 = &Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::`vftable';
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 3) = &Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::Api::`vftable';
    *((_QWORD *)v2 + 1) = &Windows::UI::Composition::CompositionIslandAutomationProviderRequestedEventArgs::s_InterfaceType;
    v4 = *((_QWORD *)v2 + 5);
    if ( v4 )
    {
      *((_QWORD *)v2 + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_BYTE *)v2 + 48) = 0;
    result = 0LL;
    *a1 = v2;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>((void **)&v5);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v6);
    return 2147942414LL;
  }
  return result;
}
