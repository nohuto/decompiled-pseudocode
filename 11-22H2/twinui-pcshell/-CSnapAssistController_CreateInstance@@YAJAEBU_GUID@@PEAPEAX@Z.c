/*
 * XREFs of ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AFD0
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18010AC10 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistController@@@Z @ 0x18010B0DC (--$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssist.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistController_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistController,CSnapAssistController,>(&v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 1312LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v3,
      v7);
    goto LABEL_3;
  }
  v3 = (**v9)(v9, &GUID_91adc416_4c36_457e_9bab_7e545e723826, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 1313LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return v4;
}
