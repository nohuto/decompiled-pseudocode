/*
 * XREFs of ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EE878
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180014600 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800F0254 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800F05D8 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800F0A1C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800F172C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180151D00 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A30A0 (-GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A3130 (-GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A31C0 (-GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A3390 (-GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A34B0 (-GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801A3540 (-GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z @ 0x1801A35D0 (-GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z.c)
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B2720 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8FA0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801CF940 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4(v3, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, a2);
}
