/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40731d9fb625dc64051a70a2bf4bfe30___::Run @ 0x180035DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40731d9fb625dc64051a70a2bf4bfe30___::Run(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 16));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x102E,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v5,
      a5);
}
