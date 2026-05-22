/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800F9EA8
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800FBCE0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x180002F48 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18004E230 (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800FB01C (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 */

char __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, __int64 a3)
{
  Win32kInterop *v4; // rbx
  __int64 v5; // r9
  unsigned int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = Win32kInterop::s_pInterop;
  InputETW::Win32kInterop::ReceivedCursorPosMessage(*(_DWORD *)(a3 + 8));
  InputTraceLogging::ISM::ReceiveCursorPos(*(_QWORD *)(a3 + 16), (const struct tagPOINT *)a3);
  v6 = *(_DWORD *)(a3 + 8);
  if ( !v6 || (LOBYTE(v7) = Win32kInterop::IsDeviceAttached(v4, v6, 1), (_BYTE)v7) )
  {
    v8 = *(unsigned int *)(a3 + 8);
    LOBYTE(v5) = (_DWORD)v8 == 0;
    v10 = *(_DWORD *)a3;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**((_QWORD **)v4 + 54) + 80LL))(
           *((_QWORD *)v4 + 54),
           v8,
           1LL,
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x41C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  return v7;
}
