/*
 * XREFs of ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002B90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002C70 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800031F0 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x180003280 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18000C420 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@Z @ 0x18000C5C0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800114A0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800158D0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@CA.c)
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001D11C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18001D690 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001DCC0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x18001E080 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x180020230 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800202D0 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180020ED0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180021690 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180040030 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DE_ea_180040030.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x180040160 (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 *     ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x1800417A0 (-RuntimeClassInitialize@ForegroundManager@@UEAAJXZ.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180049930 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x180049A30 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004E150 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x18004E96C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18004EB60 (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004F540 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy@@@Z @ 0x180050290 (-CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy.c)
 *     ?SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1800534D0 (-SetDockRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Rout.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800B33F0 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1800B421C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z @ 0x1800B560C (-SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z.c)
 *     ?UnregisterActivationController@ForegroundManagerServer@InputTraceLogging@@SAX_KAEBU_LUID@@00@Z @ 0x1800B61D0 (-UnregisterActivationController@ForegroundManagerServer@InputTraceLogging@@SAX_KAEBU_LUID@@00@Z.c)
 *     ?HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z @ 0x1800B7174 (-HandleActivationChange@ActivationWatcherBamoPrincipal@@QEAAJAEBU_LUID@@0@Z.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800D9954 (--0InputProcess@@AEAA@XZ.c)
 *     ?OnStubDisconnected@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800DA290 (-OnStubDisconnected@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@.c)
 *     ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800DA780 (-StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z.c)
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x1800DB420 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z @ 0x1800DB5F0 (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x1800E4820 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 *     ?DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z @ 0x1800F0F8C (-DockDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockDeviceInfo@@@Z.c)
 *     ?DockDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z @ 0x1800F10AC (-DockDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z.c)
 *     ?DockableDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockableDeviceInfo@@@Z @ 0x1800F23A4 (-DockableDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockableDeviceInfo@@@Z.c)
 *     ?DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z @ 0x1800F24D4 (-DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x180108348 (-DropMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1801083C4 (-DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x180109634 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1801096C4 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x18010976C (-ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1801097E8 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMET.c)
 *     ?UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z @ 0x18010C9FC (-UpdateCursorOrientationForInputType@Cursor@InputTraceLogging@@SAXW4InputType@@N@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18010EE68 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x180113424 (-AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z.c)
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z @ 0x18011367C (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z.c)
 *     ?CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z @ 0x180113894 (-CreateCursorForDevice@Cursor@InputTraceLogging@@SAX_KPEBX@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z @ 0x180114EE0 (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z.c)
 *     ?SetCursorVisibility@Cursor@InputTraceLogging@@SAX_N@Z @ 0x180115214 (-SetCursorVisibility@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@@Z @ 0x18015398C (-ServerConnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N1AEBUVirtualTouchpadSize@Input@Inte.c)
 *     ?ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180153ACC (-ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180153B70 (-ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180153C14 (-ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z @ 0x180153CB8 (-ServerIsActiveChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBX_N@Z.c)
 *     ?ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUtagRECT@@@Z @ 0x180153D90 (-ServerSizeChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUVirtualTouchpadSize@Input@Inter.c)
 *     ?ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z @ 0x180153E98 (-ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagVIRTUAL_PTP_CONFIG@@AEBUVirtualTouchpadSize@Input@Internal@UI@Windows@@AEBUPhysicalClickZone@789Windows@@4@Z @ 0x180154A68 (-VirtualTouchpadController@VirtualTouchpad@InputTraceLogging@@SAXUVPTP_ID@@AEBUtagRECT@@AEBUtagV.c)
 *     ?DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x180156E74 (-DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservat.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180166AAC (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ @ 0x180166E3C (-CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ.c)
 *     ?CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z @ 0x180166EB4 (-CursorProcessorGenerateMouseLeave@Cursor@InputTraceLogging@@SAXKK@Z.c)
 *     ?CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z @ 0x180166F24 (-CursorProcessorTargetUpdated@Cursor@InputTraceLogging@@SAXPEBUIInputTarget@@0KKKK@Z.c)
 *     ?CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z @ 0x180166FF0 (-CursorProcessorUpdateCursorOwner@Cursor@InputTraceLogging@@SAXUCursorId@@KK@Z.c)
 *     ?TriggerUpdateInputTarget@CursorProcessor@@SAXXZ @ 0x180167790 (-TriggerUpdateInputTarget@CursorProcessor@@SAXXZ.c)
 *     ?UpdateMouseCursorPosition@CursorProcessor@@AEAAXPEBUtagPOINT@@@Z @ 0x1801678F8 (-UpdateMouseCursorPosition@CursorProcessor@@AEAAXPEBUtagPOINT@@@Z.c)
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J0000@Z @ 0x18017B85C (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J0000@Z.c)
 *     ?PossibleTouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@0@Z @ 0x18017DA50 (-PossibleTouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGest.c)
 *     ?TouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesRecognizer@@@Z @ 0x18017DCE4 (-TouchGestureDetected@ShellGestures@InputTraceLogging@@SAXAEBURecognitionState@ShellGesturesReco.c)
 *     ?DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z @ 0x18017EAE4 (-DeliverToInputService@Keyboard@InputTraceLogging@@SAXHK@Z.c)
 *     ?RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x1801ABCA0 (-RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@U.c)
 *     ?ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z @ 0x1801AC48C (-ServerReceiveInput@DeviceDock@InputTraceLogging@@SAXAEBUDockInputInfo@@@Z.c)
 *     ?UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z @ 0x1801ACD38 (-UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x1801B8034 (-WriteOutput@Haptics@InputTraceLogging@@SAXXZ.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@@Z @ 0x1801BD0F0 (-OnPenEventsClientProxyDisconnected@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientPr.c)
 *     ?OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x1801BD24C (-OnPenEventsKernelMessage@PenEvents@InputTraceLogging@@SAXAEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 *     ?SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4RoutingPolicy@Input@Devices@Internal@Windows@@@Z @ 0x1801BDB80 (-SetButtonRoutingPolicy@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@W4Ro.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x1801C1264 (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x1801C1DA0 (-ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 *     ?RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801C21E8 (-RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x1801C2440 (-UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801CB800 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     ?Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorState@@W4ContextualProcessorDecision@@2_NPEBUIInputTarget@@4444@Z @ 0x1801CDA7C (-Decision@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKW4ContextualProcessorSt.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x1801CF2C4 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 *     ?HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z @ 0x1801DB698 (-HitTestClient@Magnifier@InputTraceLogging@@SAX_N0@Z.c)
 *     ?RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ @ 0x1801DBCA8 (-RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ.c)
 *     ?SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801DCA64 (-SendPan@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEB.c)
 *     ?SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801DCB18 (-SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAEBUPoint@Foundation@7@@Z @ 0x1801DCB8C (-SendZoom@Magnifier@InputTraceLogging@@SAXW4MagnifierGestureState@Input@Internal@UI@Windows@@IAE.c)
 *     ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801FBAA0 (-UpdateClientOwner@DWMCursor@@UEAAJXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180055030 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056E08 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<InputTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  fPending = a1;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v4 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180277DA8;
    qword_180277DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DC0 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v4);
  }
  return Context;
}
