/*
 * XREFs of ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180056B20
 * Callers:
 *     <none>
 * Callees:
 *     ReportStatusToSCMgr @ 0x1800555D8 (ReportStatusToSCMgr.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180056D74 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WppInitUm @ 0x180056DDC (WppInitUm.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  LPVOID v6; // rbx
  HANDLE v7; // rcx
  LPVOID v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // rax
  SIZE_T v12; // r15
  unsigned __int16 *v13; // rcx
  int v14; // edx
  LPVOID *v15; // r8
  unsigned int i; // edi

  if ( !a1 )
    return;
  qword_1801C2FB0 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_1801C2FA8 = 0LL;
  WPP_GLOBAL_Control = (CEndpointStoreCache *)&WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus = 32;
  dword_1801C25A0 = 0;
  if ( !ReportStatusToSCMgr(2, 0, 5000) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    dword_1801C25A0 = GetLastError();
    v5 = dword_1801C25A0;
LABEL_17:
    ReportStatusToSCMgr(1, v5, 0);
    return;
  }
  dword_1801C25A0 = (*((__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, void (__fastcall *)(void *, unsigned __int8), _QWORD, int))gpSvchostSharedGlobals
                     + 24))(
                      &hEventShutdownWait,
                      *a2,
                      hEventShutdown,
                      OnServiceShutdown,
                      0LL,
                      8);
  v4 = HeapAlloc(hHeap, 0, 0x18uLL);
  v5 = 8;
  v6 = v4;
  if ( !v4 )
  {
    dword_1801C25A0 = 8;
    goto LABEL_17;
  }
  v7 = hHeap;
  *(_QWORD *)v4 = sshStatusHandle;
  v4[2] = a1;
  v8 = HeapAlloc(v7, 8u, 8LL * a1);
  *((_QWORD *)v6 + 2) = v8;
  if ( v8 )
  {
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v10][v11] );
      v12 = (unsigned int)(2 * v11 + 2);
      *(_QWORD *)(v10 * 8 + *((_QWORD *)v6 + 2)) = HeapAlloc(hHeap, 8u, v12);
      v13 = *(unsigned __int16 **)(v10 * 8 + *((_QWORD *)v6 + 2));
      if ( !v13 || (int)StringCbCopyW(v13, (unsigned int)v12, a2[v10]) < 0 )
        break;
      ++v9;
      ++v10;
      if ( v9 >= a1 )
      {
        hServiceStartThread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)AudioSrvStartupThread, v6, 0, 0LL);
        if ( hServiceStartThread )
          return;
        dword_1801C25A0 = GetLastError();
        v14 = dword_1801C25A0;
        goto LABEL_20;
      }
    }
  }
  dword_1801C25A0 = 8;
  v14 = 8;
LABEL_20:
  ReportStatusToSCMgr(1, v14, 0);
  v15 = (LPVOID *)*((_QWORD *)v6 + 2);
  if ( v15 )
  {
    for ( i = 0; i < *((_DWORD *)v6 + 2); ++i )
    {
      v15 = (LPVOID *)*((_QWORD *)v6 + 2);
      if ( v15[i] )
      {
        HeapFree(hHeap, 0, v15[i]);
        v15 = (LPVOID *)*((_QWORD *)v6 + 2);
      }
    }
    HeapFree(hHeap, 0, v15);
  }
  HeapFree(hHeap, 0, v6);
}
