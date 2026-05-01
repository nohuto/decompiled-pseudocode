/*
 * XREFs of ?GetTaskbarSearchBoxRect@MiniSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1803AEC40
 * Callers:
 *     <none>
 * Callees:
 *     ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x180147D6C (-UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA-AURect@Foundation@Windows@winrt@@AEBU2345@H@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x1803AE13C (-CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA-AURect@Foundation@Windows@winrt@@UM.c)
 *     ?CorrectRectsForAutoHide@MiniSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x1803AE2D0 (-CorrectRectsForAutoHide@MiniSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z.c)
 */

__int64 __fastcall MiniSearchAppPositioner::GetTaskbarSearchBoxRect(MiniSearchAppPositioner *a1, __int64 a2)
{
  MiniSearchAppPositioner *v4; // rcx
  char v5; // al
  _OWORD *v6; // rax
  _OWORD v8[5]; // [rsp+20h] [rbp-99h] BYREF
  int v9; // [rsp+70h] [rbp-49h]
  _BYTE v10[16]; // [rsp+80h] [rbp-39h] BYREF
  __m128i v11[3]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v12; // [rsp+C0h] [rbp+7h]
  __int128 v13; // [rsp+D0h] [rbp+17h]
  int v14; // [rsp+E0h] [rbp+27h]

  (*(void (__fastcall **)(_QWORD *, __m128i *))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD **)a1 + 1), v11);
  MiniSearchAppPositioner::CorrectRectsForAutoHide(v4, v11);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD **)a1 + 1));
  v8[0] = v11[0];
  v8[2] = v11[2];
  v8[1] = v11[1];
  v9 = v14;
  v8[4] = v13;
  v8[3] = v12;
  v6 = (_OWORD *)MiniSearchAppPositioner::CalculateTaskbarSearchBoxRect(a1, (__int64)v10, (__int64)v8, v5);
  SearchAppSizeHelpers::UnscaleByMonitorDPI(a2, v6, SDWORD2(v12));
  return a2;
}
