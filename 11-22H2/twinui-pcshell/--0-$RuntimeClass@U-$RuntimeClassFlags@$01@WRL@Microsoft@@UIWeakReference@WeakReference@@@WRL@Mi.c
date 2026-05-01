/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAA@XZ @ 0x180560C6C
 * Callers:
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemElement@@@WeakReference@@V12@AEAPEAVCSwitchItemElement@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemElement@@@WeakReference@@AEAPEAVCSwitchItemElement@@@Z @ 0x1802E2AB8 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemElement@@@WeakReference@@V12@AEAPEAVCSwitchIt.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCAltTabViewHost@@@WeakReference@@V12@AEAPEAVCAltTabViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCAltTabViewHost@@@WeakReference@@AEAPEAVCAltTabViewHost@@@Z @ 0x1805608D4 (--$MakeAndInitialize@V-$CWeakReference@VCAltTabViewHost@@@WeakReference@@V12@AEAPEAVCAltTabViewH.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpViewHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@AEAPEAVCPPIAllUpViewHost@@@Z @ 0x180562A64 (--$MakeAndInitialize@V-$CWeakReference@VCPPIAllUpViewHost@@@WeakReference@@V12@AEAPEAVCPPIAllUpV.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEAVSwitchItemFilteredCollection@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@AEAPEAVSwitchItemFilteredCollection@@@Z @ 0x180566BE4 (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEA.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCMultitaskingViewElementBase@@@WeakReference@@V12@AEAPEAVCMultitaskingViewElementBase@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCMultitaskingViewElementBase@@@WeakReference@@AEAPEAVCMultitaskingViewElementBase@@@Z @ 0x180573A5C (--$MakeAndInitialize@V-$CWeakReference@VCMultitaskingViewElementBase@@@WeakReference@@V12@AEAPEA.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x1805784A4 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCScrollViewerHost@@@WeakReference@@V12@AEAPEAVCScrollViewerHost@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCScrollViewerHost@@@WeakReference@@AEAPEAVCScrollViewerHost@@@Z @ 0x18057ADC4 (--$MakeAndInitialize@V-$CWeakReference@VCScrollViewerHost@@@WeakReference@@V12@AEAPEAVCScrollVie.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCVirtualDesktopBarElement@@@WeakReference@@V12@AEAPEAVCVirtualDesktopBarElement@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCVirtualDesktopBarElement@@@WeakReference@@AEAPEAVCVirtualDesktopBarElement@@@Z @ 0x180580FC8 (--$MakeAndInitialize@V-$CWeakReference@VCVirtualDesktopBarElement@@@WeakReference@@V12@AEAPEAVCV.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemThumbnailElement@@@WeakReference@@V12@AEAPEAVSwitchItemThumbnailElement@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemThumbnailElement@@@WeakReference@@AEAPEAVSwitchItemThumbnailElement@@@Z @ 0x180586414 (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemThumbnailElement@@@WeakReference@@V12@AEAPEAVS.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCScrollButtonContainer@@@WeakReference@@V12@AEAPEAVCScrollButtonContainer@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCScrollButtonContainer@@@WeakReference@@AEAPEAVCScrollButtonContainer@@@Z @ 0x18058B0CC (--$MakeAndInitialize@V-$CWeakReference@VCScrollButtonContainer@@@WeakReference@@V12@AEAPEAVCScro.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WeakReference::IWeakReference>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
