/*
 * XREFs of ?GetTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180147C90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x180147D6C (-UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA-AURect@Foundation@Windows@winrt@@AEBU2345@H@Z.c)
 *     ?CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x180147DE0 (-CalculateTaskbarSearchBoxRect@TaskbarSearchAppPositioner@@AEAA-AURect@Foundation@Windows@winrt@.c)
 *     ?CorrectRectsForAutoHide@TaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x180147E40 (-CorrectRectsForAutoHide@TaskbarSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskbarSearchAppPositioner::GetTaskbarSearchBoxRect(__int64 a1, __int64 a2)
{
  TaskbarSearchAppPositioner *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  _OWORD v8[5]; // [rsp+20h] [rbp-99h] BYREF
  int v9; // [rsp+70h] [rbp-49h]
  _BYTE v10[16]; // [rsp+80h] [rbp-39h] BYREF
  _OWORD v11[3]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v12; // [rsp+C0h] [rbp+7h]
  __int128 v13; // [rsp+D0h] [rbp+17h]
  int v14; // [rsp+E0h] [rbp+27h]

  (*(void (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), v11);
  TaskbarSearchAppPositioner::CorrectRectsForAutoHide(v4, (struct MonitorInfo *)v11);
  LOBYTE(v5) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  v8[0] = v11[0];
  v8[2] = v11[2];
  v8[1] = v11[1];
  v9 = v14;
  v8[4] = v13;
  v8[3] = v12;
  v6 = ((__int64 (__fastcall *)(__int64, _BYTE *, _OWORD *, __int64))TaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect)(
         a1,
         v10,
         v8,
         v5);
  SearchAppSizeHelpers::UnscaleByMonitorDPI(a2, v6, DWORD2(v12));
  return a2;
}
