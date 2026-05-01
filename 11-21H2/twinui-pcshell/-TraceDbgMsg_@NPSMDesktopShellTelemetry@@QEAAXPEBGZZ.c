/*
 * XREFs of ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x18012BB50
 * Callers:
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x18012B894 (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VNPSMDesktopShellLogging@@@details@wil@@QEAAPEAVNPSMDesktopShellLogging@@P6AXXZ@Z @ 0x18012BCC8 (-get@-$static_lazy@VNPSMDesktopShellLogging@@@details@wil@@QEAAPEAVNPSMDesktopShellLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _vsnwprintf @ 0x180188F78 (_vsnwprintf.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 */

void NPSMDesktopShellTelemetry::TraceDbgMsg_(NPSMDesktopShellTelemetry *this, const unsigned __int16 *a2, ...)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int16 *v7; // rax
  REGHANDLE v8; // rcx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B8h] BYREF
  void *v11; // [rsp+60h] [rbp-A8h]
  __int64 v12; // [rsp+68h] [rbp-A0h]
  wchar_t *v13; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+78h] [rbp-90h]
  int v15; // [rsp+7Ch] [rbp-8Ch]
  wchar_t Buffer[2048]; // [rsp+88h] [rbp-80h] BYREF
  va_list Args; // [rsp+10C8h] [rbp+FC0h] BYREF

  va_start(Args, a2);
  memset_0(Buffer, 0, sizeof(Buffer));
  v3 = vsnwprintf(Buffer, 0x7FFuLL, a2, Args);
  if ( v3 < 0 || (unsigned __int64)v3 > 0x7FE )
    Buffer[2047] = 0;
  v5 = *(_QWORD *)(wil::details::static_lazy<NPSMDesktopShellLogging>::get(
                     v4,
                     _lambda_a200443fcc2186113617defd521f394c_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( Buffer[v6] );
    v15 = 0;
    v14 = 2 * v6 + 2;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v7 = *(unsigned __int16 **)(v5 + 8);
    v8 = *(_QWORD *)(v5 + 32);
    UserData.Ptr = (ULONGLONG)v7;
    v13 = Buffer;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v7;
    v11 = &unk_1806CD80A;
    UserData.Reserved = 2;
    v12 = 0x10000001CLL;
    EventWriteTransfer(v8, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
