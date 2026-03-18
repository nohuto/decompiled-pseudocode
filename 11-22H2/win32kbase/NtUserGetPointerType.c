/*
 * XREFs of NtUserGetPointerType @ 0x1C01455E0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E4550 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // rax
  unsigned int v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = (_DWORD *)a2;
  v5 = a1;
  v14 = 0;
  v9 = PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  if ( v5 && (v10 = HIWORD(v5), !HIWORD(v5)) && v4 )
  {
    v11 = 1;
    if ( v5 == 1 )
    {
      v14 = 4;
    }
    else
    {
      v12 = SGDGetUserSessionState(v7, v6, v10, v8);
      if ( !CTouchProcessor::GetThreadPointerData(
              *(CTouchProcessor **)(v12 + 3424),
              (struct tagTHREADINPUTPOINTERLIST *)(v9 + 1128),
              v5,
              &v14,
              0LL,
              0LL) )
      {
        UserSetLastError(87);
        v11 = 0;
      }
    }
    if ( v11 )
    {
      v7 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v14;
    }
  }
  else
  {
    v11 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v10, v8);
  return v11;
}
