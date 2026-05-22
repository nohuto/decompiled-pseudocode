/*
 * XREFs of ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801163A8
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180026810 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117AD4 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117E6C (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801182AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180118F6C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017ED70 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180180410 (-OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CE800 (-GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CE890 (-GetDelegateSourceProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CE920 (-GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CEAF0 (-GetProcessId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CEC10 (-GetThreadId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CECA0 (-GetViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z.c)
 *     ?GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z @ 0x1801CED30 (-GetWindowId@ContextualProcessorBuffer@@UEAAJPEA_K@Z.c)
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801DE4B0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F4CD0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputIn.c)
 *     ?MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801FB5C0 (-MITSetMPCCursorPosition@DWMCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
