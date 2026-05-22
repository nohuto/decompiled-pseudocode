/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001F3A0
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800027C0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800028A0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x180002D80 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001C2E0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x18001F1B0 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x18001F250 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180020610 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x18003E9D0 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DE_ea_18003E9D0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004D8F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004ECA0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18006B700 (_KernelInputConnection__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_--s_OnKernelInputEventStatic_--_1_-.c)
 *     _KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18006BC10 (_KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18006D122 (_std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$0 @ 0x18006D4F0 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$0 @ 0x18006D600 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$7 @ 0x18006D660 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$7.c)
 *     _std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18006EA61 (_std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFIC.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800D3A90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     _KernelInputConnection__MIT_INVALIDATE_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800D3B4C (_KernelInputConnection__MIT_INVALIDATE_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x1800F8680 (_lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator().c)
 *     __lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator()_::_1_::dtor$0 @ 0x1800F872F (__lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator()_--_1_--dtor$0.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800FA898 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$0 @ 0x1800FA991 (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$1 @ 0x1800FA99D (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$1.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$2 @ 0x1800FA9A9 (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$2.c)
 *     std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800FB5E0 (std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOA_ea_1800FB5E0.c)
 *     _std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800FB647 (_std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER.c)
 *     std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x1800FB6B0 (std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT__ea_1800FB6B0.c)
 *     _std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800FB717 (_std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESS.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800FB730 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800FB730.c)
 *     _std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800FB78C (_std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATIO.c)
 *     std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x1800FB7A0 (std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT__ea_1800FB7A0.c)
 *     _std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800FB807 (_std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESS.c)
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800FB920 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_1800FB920.c)
 *     _std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call_::_1_::dtor$0 @ 0x1800FB987 (_std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIME.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800FBCE0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$0 @ 0x1800FBD85 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$1 @ 0x1800FBD91 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$1.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800FBDB0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_ACCESSIBILITY_TIMER_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800FBE6C (_KernelInputConnection__MIT_ACCESSIBILITY_TIMER_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FBE80 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@CAJPEAX.c)
 *     _KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800FBF3C (_KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FBF50 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_INPUT_INTEROP_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800FC00F (_KernelInputConnection__MIT_INPUT_INTEROP_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FC030 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     _KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800FC0EF (_KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_-.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FC110 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_VPTP_INTEROP_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800FC1CC (_KernelInputConnection__MIT_VPTP_INTEROP_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x180149140 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801491FC (_KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x180173D90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection_tagQMSGINPUTREPORT_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180173E4C (_KernelInputConnection_tagQMSGINPUTREPORT_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801B0790 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_PEN_EVENT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801B084C (_KernelInputConnection__MIT_PEN_EVENT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801BA7B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801BA86C (_KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801BDF90 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$0 @ 0x1801BE309 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$5 @ 0x1801BE339 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$5.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801C03A0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800542B4 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800A0520 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  __int64 v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+38h] [rbp-10h]
  WINBOOL fPending; // [rsp+58h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v3 = &`InputTraceLogging::Instance'::`2'::wrapper;
    Context = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v3);
  }
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 6u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v7 = *(_QWORD *)this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v2,
      (__int64)&v7);
  }
}
