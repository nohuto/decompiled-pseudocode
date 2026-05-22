/*
 * XREFs of ?QueryInterface@PrivateMessageSession@RawButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D2F80
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::PrivateMessageSession::QueryInterface(
        RawButtonProcessor::PrivateMessageSession *this,
        struct _GUID *a2,
        void **a3)
{
  _QWORD *v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_f0f77e2a_b6ed_480b_8c7f_0def1d1889a3)
      || IsEqualGUID(v6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(RawButtonProcessor::PrivateMessageSession *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
