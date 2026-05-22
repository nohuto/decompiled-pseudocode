/*
 * XREFs of ?OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ @ 0x1801EEADC
 * Callers:
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x1800490D0 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x1801EDC5C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall DWMCursor::OnRasterizationScaleChanged(DWMCursor *this)
{
  DWMCursorBroker *v1; // rdi
  int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+24h] [rbp-44h]
  int v9; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v11; // [rsp+70h] [rbp+8h] BYREF

  v1 = (DWMCursorBroker *)*((_QWORD *)this + 4);
  if ( !v1 )
    return 0LL;
  v2 = *((_DWORD *)this + 22);
  v3 = *(_QWORD *)this;
  LOBYTE(v7) = 9;
  v8 = *(_QWORD *)(*(__int64 (__fastcall **)(DWMCursor *, char *))(v3 + 48))(this, &v11);
  v9 = v2;
  v4 = DWMCursorBroker::SendAndVerifyEndpoints(v1, (struct CursorMessage *)&v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C6,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
    (const char *)(unsigned int)v4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C1,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)v5);
  return v5;
}
