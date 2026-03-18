/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C00C71F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetScrollBarInfo @ 0x1C00C73CC (xxxGetScrollBarInfo.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG_PTR v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _BYTE *v14; // rdx
  int ScrollBarInfo; // ebx
  __int64 v16; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v22; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+50h] [rbp-78h]
  __int128 v24; // [rsp+68h] [rbp-60h] BYREF
  __int128 v25; // [rsp+78h] [rbp-50h]
  __int128 v26; // [rsp+88h] [rbp-40h]
  __int64 v27; // [rsp+98h] [rbp-30h]
  int v28; // [rsp+A0h] [rbp-28h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v22 = 0LL;
  v23 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v22;
    *((_QWORD *)&v22 + 1) = v7;
    HMLockObject(v7);
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12) )
      v13 = 0LL;
    else
      v13 = 3LL;
    if ( (v13 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[59] = v14[59];
    LODWORD(v24) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v7);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v16);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)&v24 + 4, (char *)&v24 + 4, 0LL, v7);
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v24;
      *(_OWORD *)(a3 + 16) = v25;
      *(_OWORD *)(a3 + 32) = v26;
      *(_QWORD *)(a3 + 48) = v27;
      *(_DWORD *)(a3 + 56) = v28;
    }
    ThreadUnlock1(v19, v18, v20);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return ScrollBarInfo;
}
