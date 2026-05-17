/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18001D420
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18003A630 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     DbgPrintEx @ 0x180005CC0 (DbgPrintEx.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18001D180 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x18001D81C (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18001FBD4 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A40F0 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A4E60 (ZwAlertThreadByThreadId.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 *     RtlpPossibleDeadlock @ 0x1800F3D74 (RtlpPossibleDeadlock.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  __int64 v6; // rdx
  unsigned int v8; // ebp
  LARGE_INTEGER *v9; // r14
  __int64 v10; // rcx
  int v11; // edi
  void *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  struct _TEB *v15; // rcx
  __int64 WaitOnAddressHashTable; // rbx
  __int64 v17; // rax
  signed __int64 v18; // rcx
  volatile signed __int64 *v19; // r9
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  signed __int64 v22; // rax
  struct _PEB *v23; // rax
  int v24; // r9d
  signed __int64 v25; // r8
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  char v29; // dl
  bool v30; // zf
  signed __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rbp
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  struct _TEB *v36; // rcx
  __int64 WowTebOffset; // rax
  __int64 v38; // rcx
  _DWORD *SharedData; // rcx
  __int64 v40; // rcx
  struct _TEB *v41; // rbx
  unsigned __int64 v42; // rdx
  int v43; // eax
  int v44; // ebx
  _DWORD *v45; // rcx
  __int64 v46; // rcx
  char v48; // [rsp+40h] [rbp-B8h]
  unsigned int v49; // [rsp+44h] [rbp-B4h]
  int v50; // [rsp+48h] [rbp-B0h]
  struct _TEB *v51; // [rsp+50h] [rbp-A8h]
  _QWORD v52[2]; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-90h]
  __int64 v54; // [rsp+70h] [rbp-88h]
  _QWORD *v55; // [rsp+78h] [rbp-80h]
  int v56; // [rsp+80h] [rbp-78h]
  _BYTE v57[6]; // [rsp+88h] [rbp-70h] BYREF
  __int16 v58; // [rsp+8Eh] [rbp-6Ah]
  int v59; // [rsp+A8h] [rbp-50h]
  int v60; // [rsp+ACh] [rbp-4Ch]
  __int64 v61; // [rsp+B0h] [rbp-48h]
  __int64 v62; // [rsp+B8h] [rbp-40h]

  v4 = NtCurrentTeb();
  v48 = 0;
  v6 = 0LL;
  v51 = v4;
  v49 = 0;
  v8 = 0;
  if ( (_UNKNOWN **)a1 == &LdrpLoaderLock )
  {
    v48 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( byte_18017A188 )
    goto LABEL_56;
  if ( UseWOW64 )
  {
    v36 = NtCurrentTeb();
    WowTebOffset = v36->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v36 = (struct _TEB *)((char *)v36 + WowTebOffset);
    }
    else
    {
      v36 = 0LL;
    }
    v38 = *(unsigned int *)(LODWORD(v36->NtTib.Self) + 0xCLL);
    if ( v38 )
    {
      if ( *(_BYTE *)(v38 + 40) )
LABEL_56:
        ZwTerminateProcess(-1LL, 3221225547LL);
    }
  }
  v9 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v10 = -1LL;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      v10 = *(_QWORD *)a1;
    }
  }
  v50 = 0;
  v11 = 0;
  if ( v10 != -1 )
    ++*(_DWORD *)(v10 + 36);
  v12 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v6, a3, a4) )
      v13 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v13 = 2147353474LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v62 = a1;
      v58 = 5922;
      v60 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v59 = *(_DWORD *)(a1 + 8);
      v61 = *(_QWORD *)(a1 + 16);
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v40 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v40 = 2147353474LL;
      NtTraceEvent(*(unsigned __int8 *)v40, 132098LL, 24LL, v57);
    }
    if ( v12 == (void *)-1LL )
    {
      v14 = a1 + 8;
      while ( 1 )
      {
        v54 = 0LL;
        v53 = 0LL;
        v55 = 0LL;
        v52[0] = a1 + 8;
        v56 = 1;
        v15 = NtCurrentTeb();
        v52[1] = v15->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v15->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v17 = (v14 >> 5) & 0x7F;
        v18 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v17);
        v19 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v17);
        while ( 1 )
        {
          v20 = v52;
          v21 = (unsigned __int64)v52 | v18 & 3;
          v53 = v18 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v20 = 0LL;
          v55 = v20;
          if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v21 |= 2uLL;
          v22 = _InterlockedCompareExchange64(v19, v21, v18);
          if ( v18 == v22 )
            break;
          v18 = v22;
        }
        if ( (((unsigned __int8)v18 ^ (unsigned __int8)v21) & 2) != 0 )
        {
          v25 = *v19;
          do
          {
            v26 = v25 & 0xFFFFFFFFFFFFFFFCuLL;
            v27 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v28 = v27;
                v27 = (_QWORD *)v27[2];
                v27[3] = v28;
              }
              while ( !v27[4] );
            }
            *(_QWORD *)(v26 + 32) = v27[4];
            v29 = v25 & 1;
            if ( (v25 & 1) != 0 )
              v26 = 0LL;
            v31 = _InterlockedCompareExchange64(v19, v26, v25);
            v30 = v25 == v31;
            v25 = v31;
          }
          while ( !v30 );
          if ( v29 )
          {
            v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (v31 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              do
              {
                v33 = *(_QWORD *)(v32 + 16);
                if ( !_InterlockedExchange((volatile __int32 *)(v32 + 40), 2) )
                  ZwAlertThreadByThreadId(*(_QWORD *)(v32 + 8));
                v32 = v33;
              }
              while ( v33 );
            }
          }
        }
        if ( *(_DWORD *)v14 == a2 )
        {
          LODWORD(v23) = RtlpWaitOnAddressWithTimeout(WaitOnAddressHashTable, v52, v9, 0LL);
          if ( (_DWORD)v23 == 258 )
          {
            v11 = v50;
            v8 = v49;
            goto LABEL_68;
          }
        }
        else
        {
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v52);
          LODWORD(v23) = 0;
        }
        a2 = *(_DWORD *)v14;
        if ( (*(_DWORD *)v14 & 2) == 0 )
          goto LABEL_28;
      }
    }
    LODWORD(v23) = NtWaitForSingleObject(v12, 0, v9);
    if ( (_DWORD)v23 != 258 )
      break;
LABEL_68:
    v41 = NtCurrentTeb();
    v42 = (__int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 23;
    DbgPrintEx(101, 1, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v42 + (v42 >> 63), v8);
    if ( *(_QWORD *)a1 == -1LL )
      v43 = 0;
    else
      v43 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      101,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v41->ClientId.UniqueProcess,
      v41->ClientId.UniqueThread,
      *(const void **)(a1 + 16),
      (const void *)a1,
      v43);
    v49 = ++v8;
    if ( *(_QWORD *)a1 == -1LL )
      v44 = 0;
    else
      v44 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v8 > 2 && (_UNKNOWN **)a1 != &LdrpLoaderLock && v44 == v11 )
      RtlpPossibleDeadlock(a1);
    v50 = v44;
    v11 = v44;
    DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
  }
LABEL_28:
  if ( (int)v23 < 0 )
  {
    RtlRaiseStatus((unsigned int)v23);
    JUMPOUT(0x1800B9602LL);
  }
  if ( v48 )
  {
    v51->WaitingOnLoaderLock = 0;
    v23 = NtCurrentPeb();
    v34 = v23->SharedData;
    if ( v34 && *v34 )
    {
      v23 = NtCurrentPeb();
      v35 = (__int64)v23->SharedData + 554;
    }
    else
    {
      v35 = 2147353476LL;
    }
    if ( *(_BYTE *)v35 )
    {
      v23 = NtCurrentPeb();
      if ( (v23->TracingFlags & 4) != 0 )
      {
        v23 = NtCurrentPeb();
        v45 = v23->SharedData;
        if ( v45 && *v45 )
        {
          v23 = NtCurrentPeb();
          v46 = (__int64)v23->SharedData + 555;
        }
        else
        {
          v46 = 2147353477LL;
        }
        if ( (*(_BYTE *)v46 & 0x20) != 0 )
        {
          LOBYTE(v24) = -1;
          LODWORD(v23) = LdrpLogEtwEvent(5251, -1, 255, v24, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v23;
}
