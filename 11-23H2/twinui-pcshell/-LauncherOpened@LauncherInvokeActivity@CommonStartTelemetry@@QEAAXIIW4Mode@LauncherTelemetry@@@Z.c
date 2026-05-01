/*
 * XREFs of ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x18002CCAC
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18002CB84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18002CD64 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800BC6C8 (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 */

__int64 __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(__int64 a1, int a2, int a3, int a4)
{
  __int64 result; // rax
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF

  result = wil::details::static_lazy<LauncherTelemetryLogging>::get(
             a1,
             _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
  v9 = *(_DWORD **)(result + 8);
  if ( *v9 > 4u )
  {
    result = tlgKeywordOn(v9, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v15 = a4;
      v12 = a3;
      v13 = a2;
      v14 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v10,
               (unsigned int)&unk_18085B9BF,
               (int)v11 + 8,
               0,
               (__int64)&v14,
               (__int64)&v13,
               (__int64)&v12,
               (__int64)&v15);
    }
  }
  return result;
}
