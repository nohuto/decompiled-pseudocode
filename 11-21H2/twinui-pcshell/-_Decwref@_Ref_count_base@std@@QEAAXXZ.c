/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180171890
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18008ADC4 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180095EF0 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801608E4 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?_Destroy@?$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x180181A70 (-_Destroy@-$_Ref_count_obj2@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 *     _lambda_a8dc140887cec83d93fc1ab35d00b62d_::__lambda_a8dc140887cec83d93fc1ab35d00b62d_ @ 0x1801AF4B4 (_lambda_a8dc140887cec83d93fc1ab35d00b62d_--__lambda_a8dc140887cec83d93fc1ab35d00b62d_.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180463A5C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ??$?0VCAppThumbnailWindow@@$0A@@?$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailWindow@@@Z @ 0x1804952CC (--$-0VCAppThumbnailWindow@@$0A@@-$shared_ptr@VCAppThumbnailWindow@@@std@@QEAA@PEAVCAppThumbnailW.c)
 *     ??1CAppThumbnailWindow@@QEAA@XZ @ 0x180495CD0 (--1CAppThumbnailWindow@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
