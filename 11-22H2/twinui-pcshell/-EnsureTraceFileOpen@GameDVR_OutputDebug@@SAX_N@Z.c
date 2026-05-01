/*
 * XREFs of ?EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z @ 0x1803DD328
 * Callers:
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800A7798 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?OutputString@GameDVR_OutputDebug@@QEAAXXZ @ 0x1801498AC (-OutputString@GameDVR_OutputDebug@@QEAAXXZ.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall GameDVR_OutputDebug::EnsureTraceFileOpen(char a1)
{
  PCWSTR StringRawBuffer; // rax
  HANDLE FileW; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  DWORD dwFlagsAndAttributes; // [rsp+28h] [rbp-D8h]
  int hTemplateFile; // [rsp+30h] [rbp-D0h]
  int wMinute; // [rsp+38h] [rbp-C8h]
  int wSecond; // [rsp+40h] [rbp-C0h]
  __int16 Buffer; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR FileName[520]; // [rsp+70h] [rbp-90h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, &GameDVR_OutputDebug::s_csLock);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &GameDVR_OutputDebug::s_hTraceOutputFile,
    0LL);
  if ( !WindowsIsStringEmpty(GameDVR_OutputDebug::s_TraceOutputFilePath) )
  {
    if ( a1 )
    {
      GetLocalTime(&SystemTime);
      StringRawBuffer = WindowsGetStringRawBuffer(GameDVR_OutputDebug::s_TraceOutputFilePath, 0LL);
      wSecond = SystemTime.wSecond;
      wMinute = SystemTime.wMinute;
      hTemplateFile = SystemTime.wHour;
      dwFlagsAndAttributes = SystemTime.wDay;
      dwCreationDisposition = SystemTime.wMonth;
      if ( StringCchPrintfW(
             FileName,
             0x208uLL,
             (size_t *)L"%s\\ShellTraces_%02d%02d%02d%02d%02d.txt",
             StringRawBuffer,
             dwCreationDisposition,
             dwFlagsAndAttributes,
             hTemplateFile,
             wMinute,
             wSecond) >= 0 )
      {
        FileW = CreateFileW(FileName, 0x40000000u, 1u, 0LL, 2u, 0x80u, 0LL);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          &GameDVR_OutputDebug::s_hTraceOutputFile,
          FileW);
        if ( GameDVR_OutputDebug::s_hTraceOutputFile != (HANDLE)-1LL )
        {
          Buffer = -257;
          WriteFile(GameDVR_OutputDebug::s_hTraceOutputFile, &Buffer, 2u, 0LL, 0LL);
        }
        GameDVR_OutputDebug::s_dwBytesWritten = 2;
      }
    }
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
