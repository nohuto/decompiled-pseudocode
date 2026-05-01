/*
 * XREFs of ?GetTaskbarSearchButtonRect@TaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x1801A6B30
 * Callers:
 *     <none>
 * Callees:
 *     ?UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA?AURect@Foundation@Windows@winrt@@AEBU2345@H@Z @ 0x180147D6C (-UnscaleByMonitorDPI@SearchAppSizeHelpers@@YA-AURect@Foundation@Windows@winrt@@AEBU2345@H@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskbarSearchAppPositioner::GetTaskbarSearchButtonRect(__int64 a1, __int64 a2)
{
  __int128 v4; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v5[56]; // [rsp+30h] [rbp-78h] BYREF
  int v6; // [rsp+68h] [rbp-40h]
  int v7; // [rsp+6Ch] [rbp-3Ch]
  int v8; // [rsp+74h] [rbp-34h]
  int v9; // [rsp+78h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8), v5);
  *(float *)&v4 = (float)v7;
  *((float *)&v4 + 1) = (float)v9;
  *((float *)&v4 + 2) = (float)(v8 - v7);
  HIDWORD(v4) = 0;
  SearchAppSizeHelpers::UnscaleByMonitorDPI(a2, &v4, v6);
  return a2;
}
