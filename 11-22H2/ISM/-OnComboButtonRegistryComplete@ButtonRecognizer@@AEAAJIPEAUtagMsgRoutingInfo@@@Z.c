/*
 * XREFs of ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x1801D3B24
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801D3D94 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::OnComboButtonRegistryComplete(
        ButtonRecognizer *this,
        __int64 a2,
        struct tagMsgRoutingInfo *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct tagMsgRoutingInfo *, __int64 *))(**((_QWORD **)this + 20) + 120LL))(
         *((_QWORD *)this + 20),
         a3,
         &v9);
  if ( v4 < 0 )
  {
    v5 = 342LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *((_QWORD *)this + 24);
  v10 = v9;
  v4 = CoreUICallSend(v7, &v10, 1LL, 1LL);
  if ( v4 < 0 )
  {
    v5 = 347LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 168LL))(*((_QWORD *)this + 20), v9);
  return 0LL;
}
