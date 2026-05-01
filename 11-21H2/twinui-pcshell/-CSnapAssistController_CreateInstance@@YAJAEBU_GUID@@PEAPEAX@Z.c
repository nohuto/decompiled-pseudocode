/*
 * XREFs of ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18015948C
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x1800B0754 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistController@@@Z @ 0x180159510 (--$MakeAndInitialize@VCSnapAssistController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssist.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSnapAssistController_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v8)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistController,CSnapAssistController,>(&v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 897LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_3;
  }
  v3 = (**v8)(v8, &GUID_caeccf9d_10d6_4d55_9fc5_819ad14b2f33, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 898LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return v4;
}
