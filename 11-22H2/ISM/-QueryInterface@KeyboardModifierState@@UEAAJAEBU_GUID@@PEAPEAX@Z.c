/*
 * XREFs of ?QueryInterface@KeyboardModifierState@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C0FB0
 * Callers:
 *     <none>
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardModifierState::QueryInterface(KeyboardModifierState *this, struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(KeyboardModifierState *))(*(_QWORD *)this + 8LL))(this);
      result = 0LL;
      *a3 = this;
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
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\utilities\\keyboardmodifierstate\\lib\\keyboar"
               "dmodifierstate.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
