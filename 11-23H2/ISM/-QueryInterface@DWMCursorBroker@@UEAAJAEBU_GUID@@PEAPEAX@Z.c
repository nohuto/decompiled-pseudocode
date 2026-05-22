/*
 * XREFs of ?QueryInterface@DWMCursorBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039330
 * Callers:
 *     ?QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B590 (-QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B5B0 (-QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006B5D0 (-QueryInterface@DWMCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::QueryInterface(DWMCursorBroker *this, struct _GUID *a2, void **a3)
{
  _QWORD *v5; // r8
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a) )
    {
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)this + 8;
LABEL_4:
      *a3 = (void *)(v6 & -(__int64)(this != 0LL));
      return 0LL;
    }
    if ( IsEqualGUID(v5, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v6 = (unsigned __int64)this + 24;
      goto LABEL_4;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
