/*
 * XREFs of WPP_SF_ @ 0x18001F3BC
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006780 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007EE0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000CBB0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180026084 (-CastingStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x180026174 (-CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18002ADB0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?VoipCallStateChanged@CApplication@@QEAAXH@Z @ 0x18002AF04 (-VoipCallStateChanged@CApplication@@QEAAXH@Z.c)
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z @ 0x18002CA24 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJKK@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x18003C554 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_(TRACEHANDLE a1, USHORT a2, const GUID *a3)
{
  return TraceMessage(a1, 0x2Bu, a3, a2, 0LL);
}
