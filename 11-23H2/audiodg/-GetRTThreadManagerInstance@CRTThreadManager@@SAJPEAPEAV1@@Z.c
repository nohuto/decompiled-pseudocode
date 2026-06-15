/*
 * XREFs of ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140023514
 * Callers:
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140023474 (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x14006F278 (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_a2a7c58af5182531a41a85456c7819e1_::operator() @ 0x140074940 (_lambda_a2a7c58af5182531a41a85456c7819e1_--operator().c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140075360 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRTThreadManager::GetRTThreadManagerInstance(struct CRTThreadManager **a1)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  const char *v4; // r9
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(&CreateRTThreadManagerInstance, 0, &fPending, 0LL) )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v2, v3, v4);
  if ( fPending )
  {
    v6 = &CreateRTThreadManagerInstance;
    lambda_a2a7c58af5182531a41a85456c7819e1_::operator()(retaddr);
    InitOnceComplete(&CreateRTThreadManagerInstance, 0, 0LL);
  }
  if ( gRTThreadManager )
  {
    *a1 = (struct CRTThreadManager *)gRTThreadManager;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)gRTThreadManager + 8LL))(gRTThreadManager);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)0x8007000ELL,
      (int)v6);
    return 2147942414LL;
  }
}
