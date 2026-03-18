/*
 * XREFs of xxxSetInformationThread @ 0x1C00699B0
 * Callers:
 *     NtUserSetInformationThread @ 0x1C0069890 (NtUserSetInformationThread.c)
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C004C8D0 (xxxBroadcastMessageEx.c)
 *     RtlInitLargeUnicodeString @ 0x1C0065A48 (RtlInitLargeUnicodeString.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00697C0 (xxxSetCsrssThreadDesktop.c)
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C0069B30 (xxxRestoreCsrssThreadDesktop.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C00B81DC (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C00B83C0 (-EndShutdown@@YAXJ@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     QueueShutdownData @ 0x1C01B3328 (QueueShutdownData.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z @ 0x1C020194C (-TraceLoggingBSDRRaceConditionEvent@@YAXHH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxSetInformationThread(void *a1, int a2, _QWORD *a3, int a4)
{
  unsigned __int64 v7; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *v9; // r12
  NTSTATUS v10; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  unsigned int v20; // r8d
  __int64 v21; // r9
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 i; // rax
  void *v26; // rcx
  NTSTATUS v27; // eax
  PVOID v28; // rdi
  __int64 v29; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // r8
  int v34; // edi
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-79h] BYREF
  PVOID v39[2]; // [rsp+48h] [rbp-71h] BYREF
  PVOID Object; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v41[4]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v42; // [rsp+70h] [rbp-49h]
  _BYTE v43[80]; // [rsp+80h] [rbp-39h] BYREF

  Object = 0LL;
  v7 = 1LL;
  result = ObReferenceObjectByHandle(a1, 0x20u, (POBJECT_TYPE)PsThreadType, 1, &Object, 0LL);
  v9 = (struct _KTHREAD *)Object;
  v10 = result;
  if ( result >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(Object);
    if ( a2 == 10 )
    {
      v22 = SetCsrApiPortHandle(*a3);
      goto LABEL_14;
    }
    if ( a2 > 10 )
    {
      if ( a2 == 12 )
      {
        v35 = ValidateHwnd(*a3);
        if ( !v35 )
          goto LABEL_35;
        v36 = *(_QWORD *)(v35 + 16);
        if ( !v36 || !*(_QWORD *)(v36 + 456) )
          goto LABEL_35;
        ghwndBlocking = *a3;
        PostWinlogonMessage(1031LL, 0LL);
        v37 = *(_QWORD *)(v36 + 456);
        if ( !*(_QWORD *)(*(_QWORD *)(v37 + 8) + 168LL) )
          v7 = *(_QWORD *)(v37 + 288) != 0LL;
        QueueShutdownData(0xFFFFLL, v7);
      }
      else
      {
        v31 = (unsigned int)(a2 - 13);
        switch ( a2 )
        {
          case 13:
            v10 = -1073741790;
            Interval.QuadPart = 0LL;
            v34 = 0;
            while ( !gspwndBSDR )
            {
              UserSessionSwitchLeaveCrit(v31, v12, v13, v14);
              Interval.QuadPart = -1000000LL;
              KeDelayExecutionThread(0, 0, &Interval);
              EnterCrit(1LL, 0LL);
              v34 += 100;
              if ( v34 >= 10000 )
                goto LABEL_74;
            }
            gptiShutdownWaiter = gptiCurrent;
            QueueShutdownData(*a3, 1uLL);
            v10 = 0;
            if ( v34 <= 0 )
              goto LABEL_15;
LABEL_74:
            TraceLoggingBSDRRaceConditionEvent(*(_DWORD *)*gpDispInfo, v34);
            goto LABEL_15;
          case 14:
            QueueShutdownData(*a3, 0LL);
            ghwndBlocking = 0LL;
            gptiShutdownWaiter = 0LL;
            break;
          case 15:
          case 16:
            v32 = *(_DWORD *)a3;
            Interval.QuadPart = 0LL;
            v42 = 0LL;
            *(_OWORD *)v39 = 0LL;
            if ( a2 == 15 )
            {
              if ( v32 )
                *(_DWORD *)(gpsi + 2236LL) |= 8u;
              else
                *(_DWORD *)(gpsi + 2236LL) &= ~8u;
              RtlLoadStringOrError(629LL, v43);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
              EtwTraceConvertibleState(*(unsigned int *)a3);
            }
            else
            {
              if ( v32 )
                *(_DWORD *)(gpsi + 2236LL) |= 0x10u;
              else
                *(_DWORD *)(gpsi + 2236LL) &= ~0x10u;
              RtlLoadStringOrError(630LL, v43);
              (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
              EtwTraceDockState(*(unsigned int *)a3);
            }
            RtlInitLargeUnicodeString((__int64)v39, (__int64)v43);
            v33 = *(unsigned int *)a3;
            *(_QWORD *)&v41[2] = &Interval;
            v41[0] = 0;
            v41[1] = 100;
            xxxBroadcastMessageEx(0LL, 0x1Au, v33, (__int128 *)v39, 6u, (union tagBROADCASTMSG *)v41, 1, 0);
            break;
          case 17:
            v42 = 0LL;
            *(_OWORD *)v41 = 0LL;
            v10 = xxxSetInformationThread(-2LL, 7LL, v41, 24LL);
            if ( v10 < 0 )
              goto LABEL_15;
            PostShellHookMessagesEx(0x37uLL, 0LL, 0LL);
            v22 = xxxSetInformationThread(-2LL, 9LL, v41, 24LL);
            goto LABEL_14;
          default:
            goto LABEL_57;
        }
      }
    }
    else
    {
      v15 = a2 - 1;
      if ( !v15 )
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
      v16 = v15 - 4;
      if ( !v16 )
      {
        v22 = InitiateShutdownW(v9, (unsigned int *)a3);
        goto LABEL_14;
      }
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v26 = (void *)*a3;
            v39[0] = 0LL;
            v27 = ObReferenceObjectByHandle(v26, 0x40u, (POBJECT_TYPE)PsThreadType, 1, v39, 0LL);
            v28 = v39[0];
            v10 = v27;
            if ( v27 >= 0 )
            {
              v29 = W32GetThreadWin32Thread(v39[0]);
              if ( v29 && (v30 = *(_DWORD **)(v29 + 456)) != 0LL )
                v10 = xxxSetCsrssThreadDesktop(v30, (PVOID *)a3 + 1);
              else
                v10 = -1073741816;
              ObfDereferenceObject(v28);
            }
            goto LABEL_15;
          }
          if ( v19 == 1 )
          {
            if ( a4 == 32 )
              v20 = *((_DWORD *)a3 + 6);
            else
              v20 = 0;
            v21 = a3[1];
            if ( !v21 )
            {
LABEL_13:
              v22 = xxxRestoreCsrssThreadDesktop(a3 + 1, v20);
LABEL_14:
              v10 = v22;
LABEL_15:
              ObfDereferenceObject(v9);
              return v10;
            }
            v23 = 0LL;
            v24 = grpWinStaList;
            if ( grpWinStaList )
            {
              while ( !v23 )
              {
                for ( i = *(_QWORD *)(v24 + 16); i; i = *(_QWORD *)(i + 32) )
                {
                  if ( i == v21 )
                  {
                    v23 = i;
                    break;
                  }
                }
                v24 = *(_QWORD *)(v24 + 8);
                if ( !v24 )
                {
                  if ( v23 )
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
LABEL_57:
          v10 = -1073741821;
          goto LABEL_15;
        }
        if ( grpdeskRitInput )
        {
          v22 = xxxSetCsrssThreadDesktop(grpdeskRitInput, (PVOID *)a3 + 1);
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
