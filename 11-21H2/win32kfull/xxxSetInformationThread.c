/*
 * XREFs of xxxSetInformationThread @ 0x1C00A6350
 * Callers:
 *     NtUserSetInformationThread @ 0x1C00A6240 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00A6350 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PostShellHookMessagesEx @ 0x1C00A6128 (PostShellHookMessagesEx.c)
 *     xxxSetInformationThread @ 0x1C00A6350 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00A64D0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00A65F0 (xxxSetCsrssThreadDesktop.c)
 *     xxxBroadcastMessageEx @ 0x1C00A9E58 (xxxBroadcastMessageEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C011BD28 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C011BF00 (-EndShutdown@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     QueueShutdownData @ 0x1C01D9D08 (QueueShutdownData.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C021E4D4 (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, __int64 *a3, int a4)
{
  unsigned __int64 v7; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  int v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  unsigned int v18; // r9d
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 i; // rax
  void *v24; // rcx
  NTSTATUS v25; // eax
  PVOID v26; // rdi
  __int64 v27; // rax
  void *v28; // rcx
  int v29; // eax
  int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  PVOID v34; // [rsp+40h] [rbp-79h] BYREF
  PVOID Object; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v36[4]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v37; // [rsp+60h] [rbp-59h]
  __int128 v38; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v39[80]; // [rsp+80h] [rbp-39h] BYREF

  Object = 0LL;
  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    v12 = ThreadWin32Thread;
    if ( a2 == 10 )
    {
      v20 = SetCsrApiPortHandle(*a3);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      switch ( a2 )
      {
        case 12:
          v31 = ValidateHwnd(*a3);
          if ( !v31 )
            goto LABEL_35;
          v32 = *(_QWORD *)(v31 + 16);
          if ( !v32 || !*(_QWORD *)(v32 + 456) )
            goto LABEL_35;
          ghwndBlocking = *a3;
          PostWinlogonMessage(1031LL, 0LL);
          v33 = *(_QWORD *)(v32 + 456);
          if ( !*(_QWORD *)(*(_QWORD *)(v33 + 8) + 168LL) )
            v7 = *(_QWORD *)(v33 + 280) != 0LL;
          QueueShutdownData(0xFFFFLL, v7);
          break;
        case 13:
          v10 = -1073741790;
          v34 = 0LL;
          v30 = 0;
          while ( !gspwndBSDR )
          {
            UserSessionSwitchLeaveCrit(v12);
            v34 = (PVOID)-1000000LL;
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&v34);
            EnterCrit(1LL, 0LL);
            v30 += 100;
            if ( v30 >= 10000 )
              goto LABEL_74;
          }
          gptiShutdownWaiter = gptiCurrent;
          QueueShutdownData(*a3, 1uLL);
          v10 = 0;
          if ( v30 <= 0 )
            goto LABEL_15;
LABEL_74:
          TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v30);
          goto LABEL_15;
        case 14:
          QueueShutdownData(*a3, 0LL);
          ghwndBlocking = 0LL;
          gptiShutdownWaiter = 0LL;
          break;
        default:
          if ( a2 <= 14 )
            goto LABEL_67;
          if ( a2 > 16 )
          {
            if ( a2 == 17 )
            {
              v37 = 0LL;
              *(_OWORD *)v36 = 0LL;
              v10 = xxxSetInformationThread(-2LL, 7LL, v36, 24LL);
              if ( v10 < 0 )
                goto LABEL_15;
              PostShellHookMessagesEx(0x37u, 0LL, 0LL);
              v20 = xxxSetInformationThread(-2LL, 9LL, v36, 24LL);
              goto LABEL_14;
            }
            goto LABEL_67;
          }
          v29 = *(_DWORD *)a3;
          v34 = 0LL;
          v37 = 0LL;
          v38 = 0LL;
          if ( a2 == 15 )
          {
            if ( v29 )
              *(_DWORD *)(gpsi + 2236LL) |= 8u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~8u;
            RtlLoadStringOrError(629LL, v39, 40LL, 0LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)qword_1C0335C70 + 8LL))(qword_1C0335C70);
            EtwTraceConvertibleState(*(unsigned int *)a3);
          }
          else
          {
            if ( v29 )
              *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
            else
              *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
            RtlLoadStringOrError(630LL, v39, 40LL, 0LL);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)qword_1C0335C70 + 8LL))(qword_1C0335C70);
            EtwTraceDockState(*(unsigned int *)a3);
          }
          RtlInitLargeUnicodeString(&v38, v39);
          *(_QWORD *)&v36[2] = &v34;
          v36[0] = 0;
          v36[1] = 100;
          xxxBroadcastMessageEx(0LL, 26LL);
          break;
      }
    }
    else
    {
      v13 = a2 - 1;
      if ( !v13 )
      {
        if ( ThreadWin32Thread )
        {
          if ( a4 == 8 && (*(_DWORD *)a3 & 0x20000) == *(_DWORD *)a3 )
          {
            if ( *(_DWORD *)a3 )
              *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20000u;
            else
              *(_DWORD *)(ThreadWin32Thread + 488) &= ~0x20000u;
          }
          else
          {
            v10 = -1073741811;
          }
          goto LABEL_15;
        }
        goto LABEL_21;
      }
      v14 = v13 - 4;
      if ( !v14 )
      {
        v20 = InitiateShutdownW(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( !v17 )
          {
            v24 = (void *)*a3;
            v34 = 0LL;
            v25 = ObReferenceObjectByHandle(v24, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v34, 0LL);
            v26 = v34;
            v10 = v25;
            if ( v25 >= 0 )
            {
              v27 = W32GetThreadWin32Thread((__int64)v34);
              if ( v27 && (v28 = *(void **)(v27 + 456)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v28);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v26);
            }
            goto LABEL_15;
          }
          if ( v17 == 1 )
          {
            if ( a4 == 32 )
              v18 = *((_DWORD *)a3 + 6);
            else
              v18 = 0;
            v19 = a3[1];
            if ( !v19 )
            {
LABEL_13:
              v20 = xxxRestoreCsrssThreadDesktop(a3 + 1, v18);
LABEL_14:
              v10 = v20;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v21 = 0LL;
            v22 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v21 )
              {
                for ( i = *(_QWORD *)(v22 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v19 )
                  {
                    v21 = i;
                    break;
                  }
                }
                v22 = *(_QWORD *)(v22 + 8);
                if ( !v22 )
                {
                  if ( v21 )
                    goto LABEL_13;
                  goto LABEL_35;
                }
              }
              goto LABEL_13;
            }
LABEL_35:
            v10 = -1073741823;
            goto LABEL_15;
          }
LABEL_67:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v20 = xxxSetCsrssThreadDesktop(grpdeskRitInput);
          goto LABEL_14;
        }
LABEL_21:
        v10 = -1073741816;
        goto LABEL_15;
      }
      EndShutdown(*(_DWORD *)a3);
    }
    v10 = 0;
    goto LABEL_15;
  }
  return result;
}
