/*
 * XREFs of CsrClientCallServer @ 0x180074E30
 * Callers:
 *     CsrpClientConnectToServer @ 0x180074A9C (CsrpClientConnectToServer.c)
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x1800A2020 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CsrClientCallServer(char *SendMessageA, __int64 a2, int a3, int a4)
{
  unsigned int v7; // r8d
  int v8; // ecx
  __int64 v9; // r9
  char **v10; // r8
  int v11; // ecx
  char *v12; // rax
  char **v13; // rdx
  NTSTATUS v14; // r8d
  __int64 v15; // r9
  char **v16; // rdx
  int i; // ecx
  char *v18; // rax
  char **v19; // r10
  char *v20; // rax
  int v22; // eax
  ULONG_PTR BufferLength[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( LdrpIsSecureProcess )
    return 3221225659LL;
  v7 = a3 & 0xEFFFFFFF;
  v8 = a3 & 0x10000000;
  if ( a4 < 0 )
  {
    a4 = -a4;
    *((_WORD *)SendMessageA + 2) = 0;
  }
  else
  {
    *((_DWORD *)SendMessageA + 1) = 0;
  }
  *((_QWORD *)SendMessageA + 5) = 0LL;
  *((_DWORD *)SendMessageA + 12) = v7;
  *(_DWORD *)SendMessageA = (a4 | (a4 << 16)) + 4194328;
  if ( (NtCurrentPeb()->BitField & 2) != 0
    && ((v7 & 0xFFFF0000) == 0x20000 || v8 && (NtCurrentPeb()->BitField & 0x40) == 0) )
  {
    *((_DWORD *)SendMessageA + 13) = -1073741790;
    return 3221225506LL;
  }
  else
  {
    if ( CsrClientProcess )
    {
      if ( a2 )
      {
        v9 = CsrPortMemoryRemoteDelta;
        v10 = (char **)(a2 + 32);
        *((_QWORD *)SendMessageA + 5) = CsrPortMemoryRemoteDelta + a2;
        v11 = *(_DWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 24) = 0LL;
        while ( v11 )
        {
          v12 = *v10;
          v13 = v10++;
          --v11;
          if ( v12 )
          {
            *(_QWORD *)v12 += v9;
            *v13 = (char *)(v12 - SendMessageA);
          }
        }
      }
      BufferLength[0] = 952LL;
      v14 = ZwAlpcSendWaitReceivePort(
              CsrPortHandle,
              0x20000u,
              (PPORT_MESSAGE)SendMessageA,
              0LL,
              (PPORT_MESSAGE)SendMessageA,
              BufferLength,
              0LL,
              0LL);
      if ( a2 )
      {
        v15 = CsrPortMemoryRemoteDelta;
        v16 = (char **)(a2 + 32);
        *((_QWORD *)SendMessageA + 5) -= CsrPortMemoryRemoteDelta;
        for ( i = *(_DWORD *)(a2 + 16); i; --i )
        {
          v18 = *v16;
          v19 = v16++;
          if ( v18 )
          {
            v20 = &v18[(_QWORD)SendMessageA];
            *v19 = v20;
            *(_QWORD *)v20 -= v15;
          }
        }
      }
      if ( v14 < 0 )
        *((_DWORD *)SendMessageA + 13) = v14;
    }
    else
    {
      *(_CLIENT_ID *)(SendMessageA + 8) = NtCurrentTeb()->ClientId;
      v22 = ((__int64 (__fastcall *)(char *, char *))CsrServerApiRoutine)(SendMessageA, SendMessageA);
      if ( v22 < 0 )
        *((_DWORD *)SendMessageA + 13) = v22;
    }
    return *((unsigned int *)SendMessageA + 13);
  }
}
