/*
 * XREFs of ??$As@UIInputSiteTransformClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180052608
 * Callers:
 *     ?OnVirtualTouchpadControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000C920 (-OnVirtualTouchpadControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CA70 (-OnUIAHitTestInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CC50 (-OnResizeControllerClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnResizeAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CDA0 (-OnResizeAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnManualResizeAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000CEF0 (-OnManualResizeAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnManualDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D040 (-OnManualDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D190 (-OnMagnifierControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D2E0 (-OnMPCInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnLightDismissClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D430 (-OnLightDismissClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputInjectionClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D580 (-OnInputInjectionClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D6D0 (-OnInputForwardTargetInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D820 (-OnInputForwardAreaInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnEdgyNotificationSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000D970 (-OnEdgyNotificationSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnEdgyDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DAC0 (-OnEdgyDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DC10 (-OnDragSourceClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DD60 (-OnDragAreaClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000DEB0 (-OnCursorSuppressionPolicyObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E000 (-OnContainerInfoInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnComponentSiteInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E150 (-OnComponentSiteInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnCUIHostInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E2A0 (-OnCUIHostInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnCUIComponentInputObjectChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E3F0 (-OnCUIComponentInputObjectChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E540 (-OnAttachableInputObjectSampleChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18000E690 (-OnActuationClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnAnimationTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001EF20 (-OnAnimationTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001F810 (-OnShellGesturesClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 *     ?OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18001FA90 (-OnSystemButtonEventControllerChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteTransformClientPrivate>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v5; // rcx

  v3 = *a1;
  v4 = ***a1;
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4(v3, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5, a2);
}
