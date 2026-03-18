/*
 * XREFs of ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C005FDF8
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0028820 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C0052D18 (RtlStringCchPrintfW.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C005FD54 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@.c)
 *     LibraryLogEvent @ 0x1C00601B8 (LibraryLogEvent.c)
 */

void __fastcall ReportDdiFunctionCountMismatch(
        const _UNICODE_STRING *ServiceName,
        unsigned int ActualFunctionCount,
        unsigned int a3,
        unsigned __int8 a4)
{
  const _tlgProvider_t *v6; // rcx
  const _GUID *v7; // r8
  const _GUID *v8; // r9
  void *RawDataBuf; // [rsp+20h] [rbp-2C8h]
  unsigned __int16 RawDataLen[4]; // [rsp+28h] [rbp-2C0h]
  _tlgWrapperByVal<4> v11; // [rsp+40h] [rbp-2A8h] BYREF
  _tlgWrapperByVal<4> pEventMetadata; // [rsp+44h] [rbp-2A4h] BYREF
  _tlgWrapBuffer<_UNICODE_STRING> hProvider; // [rsp+48h] [rbp-2A0h] BYREF
  wchar_t insertString[320]; // [rsp+50h] [rbp-298h] BYREF

  memset(insertString, 0, 0x272uLL);
  DbgPrintEx(
    0x65u,
    0,
    "\n"
    "\n"
    "************************* \n"
    "* DDI function table mismatch detected in KMDF driver. The \n"
    "* driver will not load until it is re-compiled using a \n"
    "* newer version of the Windows Driver Kit (WDK). \n");
  DbgPrintEx(
    0x65u,
    0,
    "* Service name                 : %wZ\n"
    "* Actual function table count  : %d \n"
    "* Expected function table count: %d \n"
    "*************************** \n"
    "\n",
    ServiceName,
    ActualFunctionCount,
    458);
  *(_DWORD *)RawDataLen = 458;
  LODWORD(RawDataBuf) = ActualFunctionCount;
  if ( RtlStringCchPrintfW(
         insertString,
         0x139uLL,
         (wchar_t *)L"Service:%wZ Count:Actual %d Expected %d",
         ServiceName,
         RawDataBuf,
         *(_QWORD *)RawDataLen) >= 0 )
    LibraryLogEvent(FxLibraryGlobals.DriverObject, -2147024894, -1073741811, insertString, 0LL, 0);
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5
    && (Tlgg_TelemetryProviderProv.KeywordAny & 0x200000000000LL) != 0
    && (Tlgg_TelemetryProviderProv.KeywordAll & 0x200000000000LL) == Tlgg_TelemetryProviderProv.KeywordAll )
  {
    v11.Value = 458;
    pEventMetadata.Value = ActualFunctionCount;
    hProvider.Ptr = ServiceName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      &tlgEvent._tlgChannel,
      v7,
      v8,
      &hProvider,
      &pEventMetadata,
      &v11);
  }
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    DbgBreakPoint();
}
