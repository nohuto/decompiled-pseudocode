/*
 * XREFs of ?QueryInterface@RawButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D3040
 * Callers:
 *     ?QueryInterface@RawButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006ADD0 (-QueryInterface@RawButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::QueryInterface(RawButtonProcessor *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( IsEqualGUID(a2, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b) )
  {
    (*(void (__fastcall **)(RawButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_7:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(RawButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
    this = (RawButtonProcessor *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    goto LABEL_7;
  }
  return 2147500034LL;
}
