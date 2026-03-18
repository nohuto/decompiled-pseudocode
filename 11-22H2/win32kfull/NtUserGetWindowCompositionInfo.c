/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C00B2360
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // sf
  ULONG v18; // eax
  _OWORD v19[4]; // [rsp+70h] [rbp-68h] BYREF

  v4 = 0LL;
  if ( PsGetCurrentProcessWow64Process() )
    v5 = 0LL;
  else
    v5 = 3LL;
  if ( (v5 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[63] = v6[63];
  v7 = 0;
  memset_0(v19, 0, sizeof(v19));
  EnterSharedCrit(v9, v8, v10);
  v11 = (const struct tagWND *)ValidateHwnd(a1);
  if ( v11 && (unsigned int)_GetWindowCompositionInfo(v11, (struct WINDOWCOMPOSITIONINFO *)v19) )
  {
    *(_OWORD *)a2 = v19[0];
    *(_OWORD *)(a2 + 16) = v19[1];
    *(_OWORD *)(a2 + 32) = v19[2];
    *(_OWORD *)(a2 + 48) = v19[3];
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  v16 = v7 < 0;
  if ( v7 < 0 )
  {
    v18 = RtlNtStatusToDosError(v7);
    UserSetLastError(v18);
    v16 = v7 < 0;
  }
  LOBYTE(v4) = !v16;
  return v4;
}
