/*
 * XREFs of ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x18038010C
 * Callers:
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037E25C (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x18037E8B0 (-OnApplicationActivatedForLaunch@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExp.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18037C3CC (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRef.c)
 */

struct wil::details::IFailureCallback *__fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread(
        __int64 a1,
        struct wil::details::IFailureCallback *a2)
{
  wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1,
    **(_DWORD **)(a1 + 48) == 1);
  *(_QWORD *)a2 = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
  return a2;
}
