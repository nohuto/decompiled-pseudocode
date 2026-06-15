/*
 * XREFs of _lambda_a2a7c58af5182531a41a85456c7819e1_::operator() @ 0x140074940
 * Callers:
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140023514 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x140074378 (--$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager.c)
 */

// Hidden C++ exception states: #wind=1
__int64 lambda_a2a7c58af5182531a41a85456c7819e1_::operator()()
{
  __int64 v0; // rcx
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = gRTThreadManager;
  gRTThreadManager = 0LL;
  if ( v0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  v1 = Microsoft::WRL::Details::MakeAndInitialize<CRTThreadManager,CRTThreadManager,>((CRTThreadManager **)&gRTThreadManager);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
