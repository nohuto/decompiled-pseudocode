/*
 * XREFs of ?_GetIndexOfItem@CGridTelemetryController@@AEAAJPEAUISwitchItem@@PEA_K@Z @ 0x18058A660
 * Callers:
 *     ?CloseSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18058A210 (-CloseSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?ContextMenuInvoked@CGridTelemetryController@@UEAAXPEAUISwitchItem@@I@Z @ 0x18058A270 (-ContextMenuInvoked@CGridTelemetryController@@UEAAXPEAUISwitchItem@@I@Z.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18058A370 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGridTelemetryController::_GetIndexOfItem(
        CGridTelemetryController *this,
        struct ISwitchItem *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = *((_QWORD *)this + 3);
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  v7 = v6(v5, &GUID_25a5b310_421f_4a9e_be18_ac8ad18ba2a9, &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 185LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\gridtelemetry.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, struct ISwitchItem *, unsigned __int64 *))(*(_QWORD *)v12 + 24LL))(
         v12,
         a2,
         a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 186LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return v8;
}
