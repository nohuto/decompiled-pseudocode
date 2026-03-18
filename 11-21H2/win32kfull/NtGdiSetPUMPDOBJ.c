/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C0127D20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0128098 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C012AEF4 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C012B08C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285520 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02B04A4 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  int v11; // ecx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  PEPROCESS Process[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+68h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v25 = v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_53;
  }
  else if ( !a3 )
  {
    goto LABEL_53;
  }
  if ( gUMPDSecurityLevel != 1
    || !v8
    || (Process[0] = 0LL,
        PsLookupProcessByProcessId((HANDLE)*(int *)(v8 + 408), Process),
        !(unsigned int)bIsProcessLocalSystem(Process[0]))
    || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v22, v21),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
  {
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( v9 )
    {
      if ( v6 )
      {
        Process[2] = 0LL;
        v11 = *(_DWORD *)(v8 + 424);
        v26 = v11;
        if ( a4 )
        {
          if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a4 = v11;
        }
        if ( v11 )
        {
          if ( !(unsigned int)bSandboxedCurrentProcess()
            && *(_DWORD *)(v8 + 408) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
            && *(_QWORD *)(v9 + 40) == v9 + 40 )
          {
            v17 = Win32AllocPoolZInit(16LL, 1684631623LL);
            Process[1] = (PEPROCESS)v17;
            if ( v17 )
            {
              if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
                *(_BYTE *)MmUserProbeAddress = 0;
              *a3 = 0LL;
              if ( UMPDOBJ::bTryAcquireExclussiveAccess((UMPDOBJ *)v8) )
              {
                *(_QWORD *)v17 = *(_QWORD *)(v8 + 400);
                *(_DWORD *)(v17 + 8) = *(_DWORD *)(v8 + 408);
                *(_QWORD *)(v9 + 72) = v17;
                v18 = (_QWORD *)(v8 + 40);
                v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 40;
                v20 = *(_QWORD *)v19;
                if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
                  __fastfail(3u);
                *v18 = v20;
                v18[1] = v19;
                *(_QWORD *)(v20 + 8) = v18;
                *(_QWORD *)v19 = v18;
                return 1LL;
              }
              Win32FreePool(v17);
            }
          }
        }
        else if ( (struct UMPDOBJ *)v8 == UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v9) )
        {
          if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = 0LL;
          goto LABEL_22;
        }
      }
      else
      {
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v13 = *a3;
        v14 = *(_QWORD *)(v9 + 40);
        if ( v14 == v9 + 40 )
          v15 = 0LL;
        else
          v15 = v14 - 40;
        if ( v15 && v13 == *(_QWORD *)v15 )
        {
          if ( !*(_DWORD *)(v15 + 424) )
          {
LABEL_22:
            if ( v8 )
            {
              DEC_SHARE_REF_CNT(v8);
              if ( (unsigned int)UMPDOBJ::bCleanupWorker((UMPDOBJ *)v8) )
                Win32FreePool(v8);
            }
            return 1LL;
          }
          if ( *(_QWORD *)(v15 + 24) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            *(_BYTE *)(v15 + 32) |= 2u;
            UMPDOBJ::vRelease((struct UMPDOBJ *)v15, 1);
            v16 = *(_QWORD *)(v9 + 72);
            if ( v16 )
            {
              Win32FreePool(v16);
              *(_QWORD *)(v9 + 72) = 0LL;
            }
            goto LABEL_22;
          }
        }
      }
    }
  }
LABEL_53:
  UMPDREF::~UMPDREF((UMPDREF *)&v25);
  return 0LL;
}
