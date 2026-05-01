/*
 * XREFs of ?SendConsolidated@CTaskWindow@@UEAAXW4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x18003D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qL @ 0x180309FCC (WPP_SF_qL.c)
 */

void __fastcall CTaskWindow::SendConsolidated(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 120) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_qL(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_57aa434970eb334441637f8eaa75da73_Traceguids, v6, a2);
    }
    *(_BYTE *)(a1 + 92) = 1;
    *(_DWORD *)(a1 + 96) = a2;
  }
  else
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      WPP_SF_qL(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_57aa434970eb334441637f8eaa75da73_Traceguids, v5, a2);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 472LL))(
           *(_QWORD *)(a1 + 48),
           (a2 & 1u) + 1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FB,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
        (const char *)(unsigned int)v4,
        v7);
  }
}
