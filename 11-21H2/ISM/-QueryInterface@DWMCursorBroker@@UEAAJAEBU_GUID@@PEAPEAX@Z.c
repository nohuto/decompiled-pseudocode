/*
 * XREFs of ?QueryInterface@DWMCursorBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037EB0
 * Callers:
 *     ?QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054360 (-QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054380 (-QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800543A0 (-QueryInterface@DWMCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::QueryInterface(DWMCursorBroker *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
      if ( v6 )
        return 2147500034LL;
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v8 = 24LL;
    }
    else
    {
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v8 = 8LL;
    }
    *a3 = (char *)this + v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL,
      v9);
    return 2147942487LL;
  }
}
