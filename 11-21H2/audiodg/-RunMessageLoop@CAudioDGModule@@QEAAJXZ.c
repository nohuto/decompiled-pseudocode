/*
 * XREFs of ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140001A9C
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140001A04 (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14005037C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1400517EC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14006E28C (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CAudioDGModule::RunMessageLoop(HANDLE *this, __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rcx
  DWORD v5; // edi
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  HANDLE CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  HANDLE v14; // rax
  HANDLE Handles[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  Handles[0] = this[15];
  Handles[1] = this[17];
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, a2, *((unsigned int *)this + 38));
  do
  {
    v5 = WaitForMultipleObjectsEx(2u, Handles, 0, 0xFFFFFFFF, 0);
    if ( v5 == 1 )
    {
      *((_BYTE *)this + 148) = 1;
      v6 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                         v4,
                         _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                     + 8);
      if ( *(_DWORD *)v6 > 2u
        && (*(_QWORD *)(v6 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v6 + 24) & 0x400000000000LL) == *(_QWORD *)(v6 + 24) )
      {
        v17 = *((_DWORD *)this + 36);
        v18 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v6,
          (unsigned int)&unk_1400A6489,
          v7,
          v8,
          (__int64)&v18,
          (__int64)&v17);
      }
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0x64u);
    }
  }
  while ( v5 );
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_7648ed4640253b865e503c6e3d6ace76_Traceguids);
  }
  if ( qword_1400C0980 || (int)qword_1400C1638 > 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgs("AudioDg.exe", (unsigned int)qword_1400C0980, (unsigned int)qword_1400C1638);
    v11 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                        v10,
                        _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v11 > 4u
      && (*(_BYTE *)(v11 + 16) & 4) != 0
      && (*(_QWORD *)(v11 + 24) & 4LL) == *(_QWORD *)(v11 + 24) )
    {
      v17 = qword_1400C1638;
      v18 = qword_1400C0980;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v11,
        (unsigned int)&unk_1400A6209,
        v12,
        v13,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
  v14 = GetCurrentProcess();
  TerminateProcess(v14, 0);
  return 0LL;
}
