/*
 * XREFs of ?EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18065695C
 * Callers:
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180220060 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall TouchEdgeGripperHost::EnsureXamlHostThreadStarted(__int64 a1)
{
  int v1; // eax
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  const char *v4; // r9
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *pData; // [rsp+48h] [rbp+10h]

  LOBYTE(v1) = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 1;
  if ( !(_BYTE)v1 )
  {
    pData = 0LL;
    if ( a1 )
    {
      pData = (void *)a1;
      v2 = *(_QWORD *)(a1 + 8);
      while ( v2 >= 0 )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v2 + 1, v2);
        if ( v3 == v2 )
          goto LABEL_8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
    }
LABEL_8:
    v1 = SHCreateThreadWithHandle(
           (LPTHREAD_START_ROUTINE)lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl_,
           pData,
           0xC000u,
           (LPTHREAD_START_ROUTINE)lambda_0ced3948e50d96c4a590f48e25a32e04_::_lambda_invoker_cdecl_,
           (HANDLE *)(a1 + 40));
    try
    {
      if ( !v1 )
        wil::details::in1diag3::_Throw_GetLastError(
          retaddr,
          (void *)0x8E,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
          v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x95,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperhost.cpp",
        v4);
      *(_BYTE *)(a1 + 24) = 0;
      LOBYTE(v1) = MicrosoftTelemetryAssertTriggeredNoArgs(a1, v5);
    }
  }
  return v1;
}
