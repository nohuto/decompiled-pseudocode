/*
 * XREFs of ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140028E98
 * Callers:
 *     ?AttachToMMCSS@CAudioPump@@AEAAXXZ @ 0x140028D5C (-AttachToMMCSS@CAudioPump@@AEAAXXZ.c)
 *     ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x1400676F8 (-GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::init_once__lambda_a2a7c58af5182531a41a85456c7819e1___ @ 0x140028EE0 (wil--init_once__lambda_a2a7c58af5182531a41a85456c7819e1___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRTThreadManager::GetRTThreadManagerInstance(struct CRTThreadManager **a1)
{
  __int64 v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::init_once__lambda_a2a7c58af5182531a41a85456c7819e1___();
  v2 = gRTThreadManager;
  if ( gRTThreadManager )
  {
    *a1 = (struct CRTThreadManager *)gRTThreadManager;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
