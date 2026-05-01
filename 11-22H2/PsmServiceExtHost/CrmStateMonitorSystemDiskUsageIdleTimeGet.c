/*
 * XREFs of CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x180009F64
 * Callers:
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x180009DF0 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x180047650 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000A088 (StringCbPrintfW.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageIdleTimeGet(__int64 a1, _QWORD *a2)
{
  HANDLE FileW; // rdi
  unsigned int LastError; // ebx
  unsigned int v6; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD InBuffer[2]; // [rsp+48h] [rbp-B8h] BYREF
  char OutBuffer[56]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+B0h] [rbp-50h] BYREF
  UUID *v11; // [rsp+D0h] [rbp-30h]
  int v12; // [rsp+D8h] [rbp-28h]
  int v13; // [rsp+DCh] [rbp-24h]
  unsigned int *v14; // [rsp+E0h] [rbp-20h]
  int v15; // [rsp+E8h] [rbp-18h]
  int v16; // [rsp+ECh] [rbp-14h]
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\PhysicalDrive%u", *(unsigned int *)(a1 + 96));
  FileW = CreateFileW(pszDest, 0, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW != (HANDLE)-1LL )
  {
    InBuffer[1] = 0;
    InBuffer[0] = 8;
    if ( DeviceIoControl(FileW, 0x70224u, InBuffer, 8u, OutBuffer, 0x58u, 0LL, 0LL) )
    {
      *a2 = v9;
      LastError = 0;
LABEL_4:
      CloseHandle(FileW);
      return LastError;
    }
  }
  if ( (int)GetLastError() > 0 )
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  else
    LastError = GetLastError();
  if ( (LastError & 0x80000000) != 0 && (unsigned int)dword_1800DB250 > 5 )
  {
    v13 = 0;
    v16 = 0;
    v11 = &Uuid;
    v15 = 4;
    v14 = &v6;
    v12 = 16;
    v6 = LastError;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BEE00, 0, 0, 4u, &v10);
  }
  if ( FileW != (HANDLE)-1LL )
    goto LABEL_4;
  return LastError;
}
