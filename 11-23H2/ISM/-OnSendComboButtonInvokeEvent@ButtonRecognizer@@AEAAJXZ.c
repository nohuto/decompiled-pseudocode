/*
 * XREFs of ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x1801C63A8
 * Callers:
 *     _lambda_f1854fe2ac21130f928d03576a8a1bbe_::_lambda_invoker_cdecl_ @ 0x1801C49F0 (_lambda_f1854fe2ac21130f928d03576a8a1bbe_--_lambda_invoker_cdecl_.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x1801C58F4 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::OnSendComboButtonInvokeEvent(ButtonRecognizer *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 20);
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v2 + 120LL))(v2, (char *)this + 112, &v8);
  if ( v3 < 0 )
  {
    v4 = 315LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = *((_QWORD *)this + 24);
  v9 = v8;
  v3 = CoreUICallSend(v6, &v9, 1LL, 1LL);
  if ( v3 < 0 )
  {
    v4 = 320LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 168LL))(*((_QWORD *)this + 20), v8);
  return 0LL;
}
