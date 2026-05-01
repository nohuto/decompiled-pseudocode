/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e563fd95344ca67be7b6f27f8cd95fa___::Run @ 0x1801B10B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1804793DC (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1e563fd95344ca67be7b6f27f8cd95fa___::Run(
        __int64 a1,
        __int64 a2)
{
  ULONGLONG TickCount64; // r8
  ULONGLONG v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown(a1, a2) )
  {
    TickCount64 = GetTickCount64();
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1184LL);
    if ( TickCount64 > v4 && TickCount64 - v4 >= 0x2710 )
    {
      _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 16) + 1184LL), TickCount64);
      v5 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 16) + 736LL));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x109F,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
  }
}
