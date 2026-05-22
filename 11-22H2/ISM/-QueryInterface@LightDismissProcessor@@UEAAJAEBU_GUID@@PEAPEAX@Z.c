/*
 * XREFs of ?QueryInterface@LightDismissProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003B6A0
 * Callers:
 *     ?QueryInterface@LightDismissProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007BEF0 (-QueryInterface@LightDismissProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LightDismissProcessor::QueryInterface(LightDismissProcessor *this, struct _GUID *a2, void **a3)
{
  _QWORD *v5; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b) )
    {
      (*(void (__fastcall **)(LightDismissProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_4:
      *a3 = this;
      return 0LL;
    }
    if ( IsEqualGUID(v5, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(LightDismissProcessor *))(*(_QWORD *)this + 8LL))(this);
      this = (LightDismissProcessor *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      goto LABEL_4;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\processor\\ligh"
               "tdismissprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
