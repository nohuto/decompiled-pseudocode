/*
 * XREFs of NtUserMsgWaitForMultipleObjectsEx @ 0x1C00A52B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxGetInputEvent @ 0x1C00A5800 (xxxGetInputEvent.c)
 *     xxxHandleHealthyThread @ 0x1C0144560 (xxxHandleHealthyThread.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0159E74 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     _CancelQueueEventCompletionPacket @ 0x1C01D9E38 (_CancelQueueEventCompletionPacket.c)
 *     _ReassociateQueueEventCompletionPacket @ 0x1C01D9EA8 (_ReassociateQueueEventCompletionPacket.c)
 *     _SetWaitForQueueAttach @ 0x1C01D9F04 (_SetWaitForQueueAttach.c)
 */

__int64 __fastcall NtUserMsgWaitForMultipleObjectsEx(unsigned int a1, volatile void *a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  volatile void *v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 CurrentProcess; // rax
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int64 v19; // rdx
  char *v20; // rax
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 CurrentProcessWow64Process; // rax
  ULONG v24; // r8d
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rdi
  int *v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 *v37; // rax
  unsigned __int64 v38; // rdi
  __int64 *v39; // rax
  int v41; // [rsp+30h] [rbp-908h]
  void *v42; // [rsp+40h] [rbp-8F8h]
  __int64 v43; // [rsp+48h] [rbp-8F0h]
  __int64 v44; // [rsp+50h] [rbp-8E8h] BYREF
  void *v45; // [rsp+58h] [rbp-8E0h]
  void (__fastcall *v46)(void *); // [rsp+60h] [rbp-8D8h]
  __int64 InputEvent; // [rsp+68h] [rbp-8D0h]
  __int64 ProcessPeb; // [rsp+70h] [rbp-8C8h]
  char v49; // [rsp+80h] [rbp-8B8h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-898h]
  __int64 v51; // [rsp+A8h] [rbp-890h]
  __int64 v52; // [rsp+B0h] [rbp-888h]
  _BYTE v53[1144]; // [rsp+4C0h] [rbp-478h] BYREF

  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = -1;
  v41 = -1;
  EnterCrit(0LL, 0LL);
  v10 = 0LL;
  if ( (a5 & 0xFFFFFFE0) != 0 || (unsigned int)v7 > 0x3F )
  {
    UserSetLastError(87LL, v9);
    goto LABEL_56;
  }
  v11 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v11 && ((a5 & 1) == 0 || !(_DWORD)v7) )
  {
    v12 = (a5 & 4) != 0 ? *(unsigned __int16 *)(v11 + 8) : 0LL;
    if ( ((unsigned __int16)(v12 | *(_WORD *)(v11 + 4)) & v5) != 0 )
    {
      v8 = v7;
      goto LABEL_56;
    }
  }
  InputEvent = xxxGetInputEvent(v5 | ((unsigned __int16)a5 << 16));
  if ( InputEvent )
  {
    if ( (a5 & 1) != 0 )
    {
      v43 = 0LL;
      CancelQueueEventCompletionPacket();
    }
    else
    {
      v13 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
      v43 = *(_QWORD *)(v13 + 1432);
      if ( !v43 )
        goto LABEL_55;
      v6 = a2;
    }
    CurrentProcess = PsGetCurrentProcess(v12, v15);
    ProcessPeb = PsGetProcessPeb(CurrentProcess);
    v17 = *(_OWORD **)(ProcessPeb + 32);
    if ( v17 + 68 < v17 || (unsigned __int64)(v17 + 68) > MmUserProbeAddress )
      v17 = (_OWORD *)MmUserProbeAddress;
    v18 = v53;
    v19 = 8LL;
    do
    {
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      v18[4] = v17[4];
      v18[5] = v17[5];
      v18[6] = v17[6];
      v18 += 8;
      *(v18 - 1) = v17[7];
      v17 += 8;
      --v19;
    }
    while ( v19 );
    *v18 = *v17;
    v18[1] = v17[1];
    v18[2] = v17[2];
    v18[3] = v17[3];
    v20 = &v49;
    v21 = v53;
    v22 = 8LL;
    do
    {
      *(_OWORD *)v20 = *v21;
      *((_OWORD *)v20 + 1) = v21[1];
      *((_OWORD *)v20 + 2) = v21[2];
      *((_OWORD *)v20 + 3) = v21[3];
      *((_OWORD *)v20 + 4) = v21[4];
      *((_OWORD *)v20 + 5) = v21[5];
      *((_OWORD *)v20 + 6) = v21[6];
      v20 += 128;
      *((_OWORD *)v20 - 1) = v21[7];
      v21 += 8;
      --v22;
    }
    while ( v22 );
    *(_OWORD *)v20 = *v21;
    *((_OWORD *)v20 + 1) = v21[1];
    *((_OWORD *)v20 + 2) = v21[2];
    *((_OWORD *)v20 + 3) = v21[3];
    if ( (_DWORD)v7 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21);
      v24 = 4;
      if ( CurrentProcessWow64Process )
        v24 = 1;
      v25 = v7;
      ProbeForRead(v6, 8 * v7, v24);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = (_QWORD *)Win32AllocPoolWithQuotaZInit(8LL * (unsigned int)(v7 + 1), 2037609301LL);
    v28 = v26;
    v42 = v26;
    if ( v26 )
    {
      memmove(v26, (const void *)a2, 8 * v25);
      v30 = 0;
      v31 = v52;
      v32 = v51;
      v33 = v50;
      while ( v30 < (unsigned int)v7 )
      {
        v29 = (int *)&v28[v30];
        v34 = *v29;
        if ( (unsigned int)*v29 >= 0xFFFFFFF4 )
        {
          switch ( v34 )
          {
            case -12:
              *(_QWORD *)v29 = v31;
              break;
            case -11:
              *(_QWORD *)v29 = v32;
              break;
            case -10:
              *(_QWORD *)v29 = v33;
              break;
          }
        }
        ++v30;
      }
      if ( (a5 & 8) != 0 )
        SetWaitForQueueAttach(1LL, v29, v31, v32);
      if ( (a5 & 1) != 0 )
        v35 = InputEvent;
      else
        v35 = v43;
      v28[v7] = v35;
      v36 = 0LL;
      v37 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v37 )
        v36 = *v37;
      v44 = *(_QWORD *)(v36 + 16);
      *(_QWORD *)(v36 + 16) = &v44;
      v45 = v42;
      v46 = (void (__fastcall *)(void *))Win32FreePool;
      v41 = xxxMsgWaitForMultipleObjectsEx(v7, (_DWORD)v42, a3, a4, a5);
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( !*(_DWORD *)(gptiCurrent + 1200LL) )
      {
        v38 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !(_DWORD)v38 )
          LODWORD(v38) = -1;
        EtwTraceMessageCheckDelay(gptiCurrent);
        *(_DWORD *)(gptiCurrent + 1200LL) = v38;
        if ( *(int *)(gptiCurrent + 488LL) < 0 )
          xxxHandleHealthyThread(gptiCurrent);
        *(_QWORD *)(gptiCurrent + 1256LL) &= ~0x200000000uLL;
        EtwTraceProcessWindowInfo(gptiCurrent);
      }
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), 0);
      *(_DWORD *)(gptiCurrent + 1256LL) &= ~0x400u;
      v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v39 )
        v10 = *v39;
      *(_QWORD *)(v10 + 16) = v44;
      v46(v45);
      if ( (a5 & 1) != 0 )
        ReassociateQueueEventCompletionPacket();
LABEL_55:
      v8 = v41;
      goto LABEL_56;
    }
    UserSetLastError(8LL, v27);
  }
LABEL_56:
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
