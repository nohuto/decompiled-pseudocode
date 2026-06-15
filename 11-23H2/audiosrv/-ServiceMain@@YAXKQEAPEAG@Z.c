/*
 * XREFs of ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180057FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WppInitUm @ 0x180056E44 (WppInitUm.c)
 *     ReportStatusToSCMgr @ 0x180058CF4 (ReportStatusToSCMgr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v4; // r9
  _DWORD *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  LPVOID v8; // rbx
  HANDLE v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rax
  SIZE_T v15; // r15
  char *v16; // rcx
  __int64 v17; // rdx
  LPVOID *v18; // r8
  unsigned int i; // edi

  if ( !a1 )
    return;
  qword_1801D0280 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_1801D0278 = 0LL;
  WPP_GLOBAL_Control = (CAudioSessionManager *)&WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus = 32;
  dword_1801CFC10 = 0;
  if ( !(unsigned int)ReportStatusToSCMgr(2LL, 0LL, 5000LL, v4) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    dword_1801CFC10 = GetLastError();
    v7 = (unsigned int)dword_1801CFC10;
LABEL_17:
    ReportStatusToSCMgr(1LL, v7, 0LL, v6);
    return;
  }
  dword_1801CFC10 = (*((__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, void (__fastcall *)(void *, unsigned __int8), _QWORD, int))gpSvchostSharedGlobals
                     + 24))(
                      &hEventShutdownWait,
                      *a2,
                      hEventShutdown,
                      OnServiceShutdown,
                      0LL,
                      8);
  v5 = HeapAlloc(hHeap, 0, 0x18uLL);
  v7 = 8LL;
  v8 = v5;
  if ( !v5 )
  {
    dword_1801CFC10 = 8;
    goto LABEL_17;
  }
  v9 = hHeap;
  *(_QWORD *)v5 = sshStatusHandle;
  v5[2] = a1;
  v10 = HeapAlloc(v9, 8u, 8LL * a1);
  *((_QWORD *)v8 + 2) = v10;
  if ( v10 )
  {
    v12 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v13][v14] );
      v15 = (unsigned int)(2 * v14 + 2);
      *(_QWORD *)(v13 * 8 + *((_QWORD *)v8 + 2)) = HeapAlloc(hHeap, 8u, v15);
      v16 = *(char **)(v13 * 8 + *((_QWORD *)v8 + 2));
      if ( !v16 || (int)StringCbCopyW(v16, (unsigned int)v15, (char *)a2[v13]) < 0 )
        break;
      ++v12;
      ++v13;
      if ( v12 >= a1 )
      {
        hServiceStartThread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)AudioSrvStartupThread, v8, 0, 0LL);
        if ( hServiceStartThread )
          return;
        dword_1801CFC10 = GetLastError();
        v17 = (unsigned int)dword_1801CFC10;
        goto LABEL_20;
      }
    }
  }
  dword_1801CFC10 = 8;
  v17 = 8LL;
LABEL_20:
  ReportStatusToSCMgr(1LL, v17, 0LL, v11);
  v18 = (LPVOID *)*((_QWORD *)v8 + 2);
  if ( v18 )
  {
    for ( i = 0; i < *((_DWORD *)v8 + 2); ++i )
    {
      if ( v18[i] )
      {
        HeapFree(hHeap, 0, v18[i]);
        v18 = (LPVOID *)*((_QWORD *)v8 + 2);
      }
    }
    HeapFree(hHeap, 0, v18);
  }
  HeapFree(hHeap, 0, v8);
}
