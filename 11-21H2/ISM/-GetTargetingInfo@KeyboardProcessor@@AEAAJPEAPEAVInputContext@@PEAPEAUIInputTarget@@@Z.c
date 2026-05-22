/*
 * XREFs of ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x180193390
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193890 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800DEF30 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall KeyboardProcessor::GetTargetingInfo(
        KeyboardProcessor *this,
        struct InputContext **a2,
        struct IInputTarget **a3)
{
  int v3; // edi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (int)a3;
  if ( !a2 )
  {
    v6 = 393LL;
LABEL_3:
    v7 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a3 )
  {
    v6 = 394LL;
    goto LABEL_3;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  if ( !v9 )
  {
    v7 = -2147418113;
    v6 = 397LL;
    goto LABEL_4;
  }
  v10 = InputContext::Create(a2);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v10,
      v12);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 64LL))(
          v9,
          *((_QWORD *)this + 4),
          *a2,
          0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x194,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v11,
      v3);
  return 0LL;
}
