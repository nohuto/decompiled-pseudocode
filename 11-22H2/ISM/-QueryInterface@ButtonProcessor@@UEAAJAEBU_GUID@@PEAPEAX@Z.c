/*
 * XREFs of ?QueryInterface@ButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E6230
 * Callers:
 *     ?QueryInterface@ButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E970 (-QueryInterface@ButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonProcessor::QueryInterface(ButtonProcessor *this, struct _GUID *a2, void **a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      (*(void (__fastcall **)(ButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
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
      (void *)0x75,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
