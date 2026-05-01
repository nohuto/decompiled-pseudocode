/*
 * XREFs of ?UpdateScreenEdges@CoverWindowAcc@@UEAAXXZ @ 0x180527360
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CoverWindowAcc::UpdateScreenEdges(HWND *this)
{
  HMONITOR v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h] BYREF

  v2 = MonitorFromWindow(this[9], 0);
  if ( v2 )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v2, &mi) )
    {
      v3 = (__int64 *)this[3];
      v4 = *v3;
      DWORD2(v10) = mi.rcMonitor.left + 1;
      HIDWORD(v10) = mi.rcMonitor.bottom;
      *(_QWORD *)&v10 = *(_QWORD *)&mi.rcMonitor.left;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v4 + 40))(v3, &v10);
      v5 = (__int64 *)this[4];
      v6 = *v5;
      LODWORD(v10) = mi.rcMonitor.left;
      HIDWORD(v10) = mi.rcMonitor.top + 1;
      *(_QWORD *)((char *)&v10 + 4) = *(_QWORD *)&mi.rcMonitor.top;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v6 + 40))(v5, &v10);
      v7 = (__int64 *)this[5];
      v8 = *v7;
      LODWORD(v10) = mi.rcMonitor.right - 1;
      DWORD1(v10) = mi.rcMonitor.top;
      *((_QWORD *)&v10 + 1) = *(_QWORD *)&mi.rcMonitor.right;
      (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 40))(v7, &v10);
    }
  }
}
