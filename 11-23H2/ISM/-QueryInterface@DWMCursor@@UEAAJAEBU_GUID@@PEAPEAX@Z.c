/*
 * XREFs of ?QueryInterface@DWMCursor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801EEB80
 * Callers:
 *     ?QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B610 (-QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B630 (-QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::QueryInterface(DWMCursor *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r9
  unsigned __int64 v7; // rax
  _QWORD *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 16;
LABEL_7:
    this = (DWMCursor *)(v7 & -(__int64)(this != 0LL));
LABEL_10:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b) )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 8;
    goto LABEL_7;
  }
  if ( IsEqualGUID(v8, &GUID_a906d320_9167_4955_a961_8a982929b899) )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_10;
  }
  return 2147500034LL;
}
