/*
 * XREFs of ??1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x180488788
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18047C270 (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAp.c)
 *     ?RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1804872D4 (-RuntimeClassInitialize@CortanaDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVICortanaExp.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1804887F0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU.c)
 *     ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x180488FF0 (-UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ.c)
 */

void __fastcall TwinUI::Cortana::CCortanaWNFService::~CCortanaWNFService(TwinUI::Cortana::CCortanaWNFService *this)
{
  PTP_TIMER *v2; // rdi

  *(_QWORD *)this = &TwinUI::Cortana::CCortanaWNFService::`vftable';
  TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(this);
  v2 = (PTP_TIMER *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
  {
    std::wstring::_Tidy_deallocate((__int64)(v2 + 3));
    if ( *v2 )
      wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(*v2);
    operator delete(v2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
}
