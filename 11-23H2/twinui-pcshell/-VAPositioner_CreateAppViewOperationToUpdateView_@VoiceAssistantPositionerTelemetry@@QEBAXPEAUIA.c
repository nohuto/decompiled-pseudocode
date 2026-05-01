/*
 * XREFs of ?VAPositioner_CreateAppViewOperationToUpdateView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@_NUtagRECT@@HHUtagSIZE@@@Z @ 0x1805B15AC
 * Callers:
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x1805AA3CC (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 * Callees:
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x18003F90C (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@6666666@Z @ 0x1805AA990 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView_(
        VoiceAssistantPositionerTelemetry *this,
        struct IApplicationView *a2,
        char a3,
        struct tagRECT *a4,
        int a5,
        int a6,
        struct tagSIZE a7)
{
  _DWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+80h] [rbp-11h] BYREF
  LONG cy; // [rsp+84h] [rbp-Dh] BYREF
  LONG cx; // [rsp+88h] [rbp-9h] BYREF
  int v16; // [rsp+8Ch] [rbp-5h] BYREF
  int v17; // [rsp+90h] [rbp-1h] BYREF
  LONG bottom; // [rsp+94h] [rbp+3h] BYREF
  LONG right; // [rsp+98h] [rbp+7h] BYREF
  LONG top; // [rsp+9Ch] [rbp+Bh] BYREF
  LONG left; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 CensoredAumidFromView; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+1Fh] BYREF

  v10 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    (__int64)this,
                    (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 4u )
  {
    cy = a7.cy;
    cx = a7.cx;
    v16 = a6;
    v17 = a5;
    bottom = a4->bottom;
    right = a4->right;
    top = a4->top;
    left = a4->left;
    v13 = a3;
    CensoredAumidFromView = (__int64)VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    v23 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_180868877,
      v11,
      v12,
      (__int64)&v23,
      (const WCHAR **)&CensoredAumidFromView,
      (__int64)&v13,
      (__int64)&left,
      (__int64)&top,
      (__int64)&right,
      (__int64)&bottom,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&cx,
      (__int64)&cy);
  }
}
