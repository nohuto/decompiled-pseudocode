/*
 * XREFs of LibraryRegisterClient @ 0x1C00176A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C0017868 (RtlStringCchPrintfW.c)
 *     FxLibraryCommonRegisterClient @ 0x1C002C2B8 (FxLibraryCommonRegisterClient.c)
 *     LibraryLogEvent @ 0x1C002C8E8 (LibraryLogEvent.c)
 *     WdfBindClientHelper @ 0x1C0050178 (WdfBindClientHelper.c)
 */

int __fastcall LibraryRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO **Context)
{
  _CLIENT_INFO *v6; // rbp
  int v7; // edi
  int v8; // esi
  int result; // eax
  unsigned int RawDataBuf; // [rsp+20h] [rbp-F8h]
  unsigned int RawDataLen; // [rsp+28h] [rbp-F0h]
  unsigned int Minor; // [rsp+30h] [rbp-E8h]
  unsigned int rawData[4]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t insertString[72]; // [rsp+50h] [rbp-C8h] BYREF

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  v6 = *Context;
  *Context = 0LL;
  v7 = WdfBindClientHelper(Info, WdfLibraryInfo.Version.Major, WdfLibraryInfo.Version.Minor);
  if ( v7 >= 0 )
  {
    result = FxLibraryCommonRegisterClient(Info, WdfDriverGlobals, v6);
    if ( result >= 0 )
    {
      *Context = (_CLIENT_INFO *)&(*WdfDriverGlobals)[-8];
      *(_QWORD *)&(*WdfDriverGlobals)[-3].DriverName[8] = Info;
    }
  }
  else
  {
    Minor = WdfLibraryInfo.Version.Minor;
    RawDataLen = WdfLibraryInfo.Version.Major;
    RawDataBuf = Info->Version.Minor;
    v8 = RtlStringCchPrintfW(
           insertString,
           0x46uLL,
           L"Driver Version: %d.%d Kmdf Lib. Version: %d.%d",
           Info->Version.Major,
           RawDataBuf,
           RawDataLen,
           Minor);
    if ( v8 >= 0 )
    {
      rawData[0] = Info->Version.Major;
      rawData[1] = Info->Version.Minor;
      rawData[2] = WdfLibraryInfo.Version.Major;
      rawData[3] = WdfLibraryInfo.Version.Minor;
      LibraryLogEvent(
        (_DRIVER_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
        -2147024895,
        v7,
        insertString,
        rawData,
        0x10u);
    }
    else if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "ERROR: RtlStringCchPrintfW failed with Status 0x%x\n", v8);
    }
    return v7;
  }
  return result;
}
