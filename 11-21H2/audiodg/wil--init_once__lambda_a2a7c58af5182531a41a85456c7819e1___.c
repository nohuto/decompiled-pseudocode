/*
 * XREFs of wil::init_once__lambda_a2a7c58af5182531a41a85456c7819e1___ @ 0x140028EE0
 * Callers:
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140028E98 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x140028F84 (--$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14006C9F4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
char wil::init_once__lambda_a2a7c58af5182531a41a85456c7819e1___()
{
  void *v0; // rdx
  unsigned int v1; // r8d
  const char *v2; // r9
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = 0;
  if ( !InitOnceBeginInitialize(&CreateRTThreadManagerInstance, 0, &fPending, 0LL) )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v0, v1, v2);
  if ( !fPending )
    return 0;
  v4 = gRTThreadManager;
  gRTThreadManager = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CRTThreadManager,CRTThreadManager,>(&gRTThreadManager);
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v5);
  InitOnceComplete(&CreateRTThreadManagerInstance, 0, 0LL);
  return 1;
}
