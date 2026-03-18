/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C00D2278
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0013084 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserDeferWindowDpiChanges @ 0x1C0013650 (NtUserDeferWindowDpiChanges.c)
 *     xxxNotifyMonitorChanged @ 0x1C008E76C (xxxNotifyMonitorChanged.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00D27A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(struct tagWND *a1, int a2, int a3)
{
  __int64 v4; // rcx
  struct tagBWL *v7; // rax
  struct tagBWL *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rax
  _DWORD *v21; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rcx
  __int16 v25; // [rsp+60h] [rbp+8h]

  v4 = *((_QWORD *)a1 + 5);
  if ( a2 == (*(_WORD *)(v4 + 286) != 0) || (*((_DWORD *)a1 + 80) & 0x40) != 0 && !a3 )
    return 0LL;
  if ( a2 )
    v25 = *(_WORD *)(v4 + 284);
  else
    v25 = 0;
  v7 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v7 = (struct tagBWL *)Win32AllocPoolZInit(296LL, 1819767637LL);
    if ( !v7 )
      return 0LL;
    *((_QWORD *)v7 + 2) = (char *)v7 + 280;
  }
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 1) = (char *)v7 + 32;
  v8 = InternalBuildHwndList(v7, a1, 1u);
  v9 = (_QWORD *)*((_QWORD *)v8 + 1);
  if ( (unsigned __int64)v9 >= *((_QWORD *)v8 + 2) )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  *v9 = 1LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  v12 = (_QWORD *)((char *)v8 + 32);
  *((_QWORD *)v8 + 3) = v10;
  *((_QWORD *)v8 + 3) = gptiCurrent;
  *(_QWORD *)v8 = gpbwlList;
  gpbwlList = v8;
  v13 = *((_QWORD *)v8 + 4);
  if ( v13 != 1 )
  {
    do
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
      {
        v14 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v13;
        v18 = (__int64 *)HMPkheFromPhe(v14);
        LOWORD(v13) = WORD1(v13) & 0x7FFF;
        if ( ((WORD1(v13) & 0x7FFF) == *(_WORD *)(v14 + 26)
           || (_WORD)v13 == 0x7FFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(v16, v15, v17))
          && (*(_BYTE *)(v14 + 25) & 1) == 0
          && *(_BYTE *)(v14 + 24) == 1 )
        {
          v19 = *v18;
          if ( *v18 )
          {
            if ( (*(_DWORD *)(v19 + 320) & 0x40) == 0 || a3 || a2 )
            {
              *(_WORD *)(*(_QWORD *)(v19 + 40) + 286LL) = v25;
              v20 = *(_QWORD *)(v19 + 296);
              if ( a2 )
              {
                if ( v20 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2778LL);
                v21 = (_DWORD *)*((_QWORD *)a1 + 36);
                *(_QWORD *)(v19 + 296) = v21;
                ++*v21;
              }
              else
              {
                if ( !v20 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2782LL);
                v23 = *(_DWORD **)(v19 + 296);
                if ( v23 )
                {
                  --*v23;
                  v24 = *(_DWORD **)(v19 + 296);
                  if ( !*v24 )
                    Win32FreePool(v24);
                  *(_QWORD *)(v19 + 296) = 0LL;
                }
              }
            }
          }
        }
      }
      v13 = *++v12;
    }
    while ( *v12 != 1LL );
  }
  if ( a3 && a2 )
    *((_DWORD *)a1 + 80) |= 0x40u;
  else
    *((_DWORD *)a1 + 80) &= ~0x40u;
  FreeHwndList(v8);
  return 1LL;
}
