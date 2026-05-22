/*
 * XREFs of ?QueryInterface@InputRedirectionTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801DDD10
 * Callers:
 *     ?QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E7B0 (-QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E7D0 (-QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionTarget::QueryInterface(InputRedirectionTarget *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r9
  _QWORD *v7; // r9
  unsigned __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( IsEqualGUID(a2, &GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13) )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
LABEL_10:
    *a3 = this;
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631) )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)this + 8;
LABEL_9:
    this = (InputRedirectionTarget *)(v8 & -(__int64)(this != 0LL));
    goto LABEL_10;
  }
  if ( IsEqualGUID(v7, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)this + 16;
    goto LABEL_9;
  }
  return 2147500034LL;
}
