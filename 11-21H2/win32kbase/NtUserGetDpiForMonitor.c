/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C002FE40
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C00A705C (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserSetLastStatus @ 0x1C00D5824 (UserSetLastStatus.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // r12d
  __int64 v14; // r8
  _DWORD *v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // r9
  _DWORD *v18; // rdx
  INT v20; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  INT v32; // edx
  INT v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  INT v38; // edx
  INT v39; // ebx
  INT v40; // eax
  INT v41[28]; // [rsp+30h] [rbp-98h] BYREF

  v6 = 0;
  v7 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v8 = HMValidateSharedHandle(a1);
  v11 = v8;
  if ( !v8 || (v12 = *(_QWORD *)(v8 + 80)) == 0 )
  {
    v13 = 0;
    UserSetLastError(6LL, v9, v10);
    goto LABEL_12;
  }
  if ( a2 )
  {
    v20 = 96;
    memset(v41, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v12, v41);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v13 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v13 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = v41[10];
        v7 = v41[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v32 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v29, v28, v30, v31) + 284);
          v20 = v32;
        }
        else
        {
          v32 = 96;
        }
        v33 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 60LL);
        v6 = EngMulDiv(v41[10], v32, v33);
        v7 = EngMulDiv(v41[11], v20, v33);
      }
      if ( (v41[23] & 1) != 0 || (v41[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL, v22, v23);
        v13 = 0;
      }
      goto LABEL_21;
    }
    if ( a2 == 1 )
    {
      if ( !v41[14] || (v41[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v41[14], 96, 100);
        v7 = EngMulDiv(v41[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v38 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v35, v34, v36, v37) + 284);
        v20 = v38;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_21;
        v38 = 96;
      }
      v39 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 60LL);
      v6 = EngMulDiv(v6, v38, v39);
      v7 = EngMulDiv(v7, v20, v39);
    }
LABEL_21:
    if ( SLOBYTE(v41[23]) < 0 )
    {
      v40 = v7;
      v7 = v6;
      v6 = v40;
    }
    goto LABEL_7;
  }
  v13 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v6 = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 60LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v6 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v25, v24, v26, v27) + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_7:
  v14 = (__int64)a3;
  v15 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = *v15;
  v16 = MmUserProbeAddress;
  v17 = (__int64)a4;
  v18 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = *v18;
  *a3 = v6;
  *a4 = v7;
LABEL_12:
  UserSessionSwitchLeaveCrit(v16, (__int64)v18, v14, v17);
  return v13;
}
