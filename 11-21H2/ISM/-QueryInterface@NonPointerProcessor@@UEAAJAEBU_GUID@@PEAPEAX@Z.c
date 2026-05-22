/*
 * XREFs of ?QueryInterface@NonPointerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180194E30
 * Callers:
 *     ?QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052E20 (-QueryInterface@NonPointerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052E40 (-QueryInterface@NonPointerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180177EE0 (-QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::QueryInterface(NonPointerProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = 16LL;
LABEL_11:
    *a3 = (char *)this + v7;
    return 0LL;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
  if ( !v8 )
  {
    (*(void (__fastcall **)(NonPointerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = 8LL;
    goto LABEL_11;
  }
  return 2147500034LL;
}
