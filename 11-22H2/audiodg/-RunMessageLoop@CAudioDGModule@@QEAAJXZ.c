/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400520F8
 * Callers:
 *     ?Run@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140052094 (-Run@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     atexit @ 0x140028478 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14004FAFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400504A4 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14005277C (McTemplateU0q_EtwEventWriteTransfer.c)
 *     WPP_SF_ @ 0x1400528A0 (WPP_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14007AAE0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this, __int64 a2)
{
  void *v3; // rcx
  DWORD v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v9; // rcx
  HANDLE CurrentProcess; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v15; // rcx
  HANDLE v16; // rax
  HANDLE Handles[2]; // [rsp+30h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+48h] [rbp-8h]
  WINBOOL fPending; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+98h] [rbp+48h] BYREF
  LPVOID Context; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, a2, *((unsigned int *)this + 38));
  do
  {
    while ( 1 )
    {
      v4 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
      if ( v4 != 1 )
        break;
      *((_BYTE *)this + 148) = 1;
      Context = 0LL;
      if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v19 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1400CF680;
        qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v20 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v19, v7, v8);
      }
      v9 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v9 > 2u
        && (*(_QWORD *)(v9 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v9 + 24) & 0x400000000000LL) == *(_QWORD *)(v9 + 24) )
      {
        v22 = *((_DWORD *)this + 36);
        v24 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v9,
          byte_1400B2F59,
          v5,
          v6,
          (__int64)&v24,
          (__int64)&v22);
      }
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v4 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_131b8c4e0fcd3ed8c88f07f30abb8f12_Traceguids);
  }
  if ( qword_1400CEB00 || (int)qword_1400CF7B0 > 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgs("AudioDg.exe", (unsigned int)qword_1400CEB00, (unsigned int)qword_1400CF7B0);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v19 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1400CF680;
      qword_1400CF680 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_1400CF698 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      v20 = 0;
      wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v19, v13, v14);
    }
    v15 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 4) != 0
      && (*(_QWORD *)(v15 + 24) & 4LL) == *(_QWORD *)(v15 + 24) )
    {
      v22 = qword_1400CF7B0;
      v24 = qword_1400CEB00;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v15,
        byte_1400B2CD9,
        v11,
        v12,
        (__int64)&v24,
        (__int64)&v22);
    }
  }
  v16 = GetCurrentProcess();
  TerminateProcess(v16, 0);
  return 0LL;
}
