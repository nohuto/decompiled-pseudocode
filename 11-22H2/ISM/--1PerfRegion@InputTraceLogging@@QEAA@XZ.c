/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180020420
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002B90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x180002C70 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800031F0 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18001DCC0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x180020230 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 *     std::_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800202D0 (std--_Func_impl_no_alloc__lambda_94fff237e78348d233dedf47fc0a83da__void__MIT_MOUSE_INPUT_MESSAGE.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x180021690 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180040030 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DE_ea_180040030.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004E150 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004F540 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18007F1E0 (_KernelInputConnection__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_--s_OnKernelInputEventStatic_--_1_-.c)
 *     _KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18007F6F0 (_KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x180081262 (_std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$0 @ 0x1800815B0 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$0 @ 0x180081700 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$7 @ 0x1800817A0 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$7.c)
 *     _std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18008244D (_std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFIC.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800E29D0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     _KernelInputConnection__MIT_INVALIDATE_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800E2A8C (_KernelInputConnection__MIT_INVALIDATE_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x18010710C (_lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator().c)
 *     __lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator()_::_1_::dtor$0 @ 0x1801071B0 (__lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator()_--_1_--dtor$0.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180109324 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$0 @ 0x18010941D (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$1 @ 0x180109429 (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$1.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$2 @ 0x180109435 (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$2.c)
 *     std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x18010A070 (std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOA_ea_18010A070.c)
 *     _std::_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18010A0D7 (_std--_Func_impl_no_alloc__lambda_0b43dcba005307e576499f17bf900980__void__MIT_KEYBOARD_OVERRIDER.c)
 *     std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18010A140 (std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT__ea_18010A140.c)
 *     _std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18010A1A7 (_std--_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESS.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x18010A1C0 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_18010A1C0.c)
 *     _std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18010A21C (_std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATIO.c)
 *     std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18010A230 (std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT__ea_18010A230.c)
 *     _std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x18010A297 (_std--_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESS.c)
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x18010A3B0 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_18010A3B0.c)
 *     _std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call_::_1_::dtor$0 @ 0x18010A417 (_std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIME.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18010A770 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$0 @ 0x18010A815 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$1 @ 0x18010A821 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$1.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x18010A840 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_ACCESSIBILITY_TIMER_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18010A8FC (_KernelInputConnection__MIT_ACCESSIBILITY_TIMER_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x18010A910 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@CAJPEAX.c)
 *     _KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18010A9CC (_KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x18010A9E0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_INPUT_INTEROP_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18010AA9F (_KernelInputConnection__MIT_INPUT_INTEROP_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18010AAC0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     _KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18010AB7F (_KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_-.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x18010ABA0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_VPTP_INTEROP_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18010AC5C (_KernelInputConnection__MIT_VPTP_INTEROP_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x180157420 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801574DC (_KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x180181BA0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection_tagQMSGINPUTREPORT_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180181C5C (_KernelInputConnection_tagQMSGINPUTREPORT_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801BE770 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_PEN_EVENT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801BE82C (_KernelInputConnection__MIT_PEN_EVENT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801C8050 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1801C810C (_KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1801CB800 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$0 @ 0x1801CBB79 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$5 @ 0x1801CBBA9 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$5.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801CDC10 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x180055030 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800B2AB4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
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
    Context = &qword_180277DA8;
    qword_180277DA8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180277DC0 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
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
