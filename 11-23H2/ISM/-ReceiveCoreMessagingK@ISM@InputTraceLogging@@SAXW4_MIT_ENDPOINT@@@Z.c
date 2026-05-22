/*
 * XREFs of ?ReceiveCoreMessagingK@ISM@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x180019D64
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800027C0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800028A0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004D8F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x18004ECA0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800D3A90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800FBDB0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FBE80 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FBF50 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FC030 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800FC110 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x180149140 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x180173D90 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801B0790 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801BA7B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800542B4 (--1Completer@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1800A0520 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x1800A2520 (-MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z.c)
 */

__int64 __fastcall InputTraceLogging::ISM::ReceiveCoreMessagingK(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // r10
  int v4; // r10d
  union _RTL_RUN_ONCE *v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  WINBOOL v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &v7, (LPVOID *)&v8) && v7 )
  {
    v5 = &`InputTraceLogging::Instance'::`2'::wrapper;
    v8 = &qword_180268B08;
    qword_180268B08 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B20 = (__int64)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    v6 = 0;
    wil::details::static_lazy<InputTraceLogging>::Completer::~Completer(&v5);
  }
  result = (__int64)v8;
  v3 = v8[1];
  if ( *(_DWORD *)v3 > 4u )
  {
    result = *(unsigned int *)(v3 + 16);
    if ( (result & 0x200) != 0 )
    {
      result = *(_QWORD *)(v3 + 24) & 0x200LL;
      if ( result == *(_QWORD *)(v3 + 24) )
      {
        v9 = InputTraceLogging::MitEndpointToString(a1);
        return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                 v4,
                 (__int64)&v9);
      }
    }
  }
  return result;
}
