/*
 * XREFs of ?QueryInterface@NonPointerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C0D40
 * Callers:
 *     ?QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007DB10 (-QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007DB30 (-QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A5250 (-QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::QueryInterface(NonPointerProcessor *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( IsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 16;
LABEL_7:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35) )
  {
    (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 8;
    goto LABEL_7;
  }
  return 2147500034LL;
}
