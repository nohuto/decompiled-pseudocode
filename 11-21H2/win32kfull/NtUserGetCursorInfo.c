/*
 * XREFs of NtUserGetCursorInfo @ 0x1C009E790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x1C009E8B8 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  ULONG64 v8; // rcx
  _BYTE *v9; // rdx
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v2 = EnterSharedCrit();
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2u) && ((v5 = *(_QWORD *)(v2 + 456)) == 0 || v5 == grpdeskRitInput) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v11);
    if ( PsGetCurrentProcessWow64Process(v6) )
      v7 = 0LL;
    else
      v7 = 3LL;
    if ( (v7 & a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = MmUserProbeAddress;
    v9 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[23] = v9[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v11;
      *(_QWORD *)(a1 + 16) = v12;
      v4 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v9);
    }
  }
  else
  {
    UserSetLastError(5LL, v3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
