/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x180033F90
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180021B80 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004FF64 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     DbgPrintEx @ 0x1800538D0 (DbgPrintEx.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18005CB50 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x1800A1A60 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x1800A1CA0 (ZwAlertThreadByThreadId.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 *     RtlpPossibleDeadlock @ 0x1800F4EB4 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, int a2)
{
  struct _TEB *v2; // rax
  LARGE_INTEGER *v5; // r14
  int v6; // r13d
  void *v7; // r12
  const void **v8; // rsi
  const void **i; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r12
  struct _TEB *v13; // rcx
  __int64 WaitOnAddressHashTable; // r13
  volatile signed __int64 *v15; // r8
  signed __int64 k; // rcx
  PVOID *v17; // rax
  signed __int64 v18; // rbx
  signed __int64 v19; // rax
  __int32 *v20; // rax
  NTSTATUS v22; // ebx
  signed __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  char v27; // dl
  bool v28; // zf
  signed __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  struct _TEB *v34; // rcx
  __int64 WowTebOffset; // rax
  __int64 v36; // rcx
  _DWORD *SharedData; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  struct _TEB *v42; // rbx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // ebx
  _DWORD *v46; // rcx
  __int64 v47; // rcx
  char v49; // [rsp+40h] [rbp-69h]
  int v50; // [rsp+44h] [rbp-65h]
  int v51; // [rsp+48h] [rbp-61h]
  const void **v52; // [rsp+50h] [rbp-59h]
  PVOID Address[2]; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-41h]
  __int64 v55; // [rsp+70h] [rbp-39h]
  PVOID *v56; // [rsp+78h] [rbp-31h]
  __int32 v57; // [rsp+80h] [rbp-29h] BYREF
  PVOID *j; // [rsp+88h] [rbp-21h]
  void *v59; // [rsp+90h] [rbp-19h]
  struct _TEB *v60; // [rsp+98h] [rbp-11h]
  char Fields[6]; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v62; // [rsp+A6h] [rbp-3h]
  int v63; // [rsp+C0h] [rbp+17h]
  int v64; // [rsp+C4h] [rbp+1Bh]
  const void *v65; // [rsp+C8h] [rbp+1Fh]
  __int64 v66; // [rsp+D0h] [rbp+27h]

  v2 = NtCurrentTeb();
  v49 = 0;
  v60 = v2;
  v50 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v49 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_180187488 )
    goto LABEL_63;
  if ( UseWOW64 )
  {
    v34 = NtCurrentTeb();
    WowTebOffset = v34->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v34 = (struct _TEB *)((char *)v34 + WowTebOffset);
    }
    else
    {
      v34 = 0LL;
    }
    v36 = *(unsigned int *)(LODWORD(v34->NtTib.Self) + 0xCLL);
    if ( v36 )
    {
      if ( *(_BYTE *)(v36 + 40) )
LABEL_63:
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    }
  }
  v5 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1);
  v6 = 0;
  v51 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v7 = *(void **)(a1 + 24);
  v8 = (const void **)(a1 + 16);
  v59 = v7;
  for ( i = (const void **)(a1 + 16); ; i = v52 )
  {
    v52 = i;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v10 = (__int64)NtCurrentPeb()->SharedData + 552;
    }
    else
    {
      i = v8;
      v10 = 2147353474LL;
      v52 = v8;
    }
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v66 = a1;
      v62 = 5922;
      v64 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v63 = *(_DWORD *)(a1 + 8);
      v65 = *i;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v38 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v38 = 2147353474LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v38, 0x20402u, 0x18u, Fields);
    }
    if ( v7 == (void *)-1LL )
    {
      v11 = (unsigned __int64)Address;
      v12 = a1 + 8;
      for ( j = Address; ; v11 = (unsigned __int64)j )
      {
        Address[0] = (PVOID)(a1 + 8);
        v57 = 1;
        v55 = 0LL;
        v54 = 0LL;
        v56 = 0LL;
        v13 = NtCurrentTeb();
        Address[1] = v13->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v13->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v15 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * ((v12 >> 5) & 0x7F));
        for ( k = *v15; ; k = v19 )
        {
          v17 = Address;
          v18 = v11 | k & 3;
          v54 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (k & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v17 = 0LL;
          v56 = v17;
          if ( (k & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v18 |= 2uLL;
          v19 = _InterlockedCompareExchange64(v15, v18, k);
          if ( k == v19 )
            break;
        }
        if ( (((unsigned __int8)k ^ (unsigned __int8)v18) & 2) != 0 )
        {
          v23 = *v15;
          do
          {
            v24 = v23 & 0xFFFFFFFFFFFFFFFCuLL;
            v25 = (_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v26 = v25;
                v25 = (_QWORD *)v25[2];
                v25[3] = v26;
              }
              while ( !v25[4] );
            }
            *(_QWORD *)(v24 + 32) = v25[4];
            v27 = v23 & 1;
            if ( (v23 & 1) != 0 )
              v24 = 0LL;
            v29 = _InterlockedCompareExchange64(v15, v24, v23);
            v28 = v23 == v29;
            v23 = v29;
          }
          while ( !v28 );
          if ( v27 )
          {
            v30 = v29 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (v29 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              do
              {
                v31 = *(_QWORD *)(v30 + 16);
                if ( !_InterlockedExchange((volatile __int32 *)(v30 + 40), 2) )
                  ZwAlertThreadByThreadId(*(HANDLE *)(v30 + 8));
                v30 = v31;
              }
              while ( v31 );
            }
          }
        }
        if ( *(_DWORD *)v12 != a2 )
        {
          LODWORD(v20) = RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, Address);
          v22 = 0;
          goto LABEL_33;
        }
        if ( MEMORY[0x7FFE036A] > 1u && MEMORY[0x7FFE0297] )
        {
          v39 = __rdtsc();
          v11 = v39;
          while ( 1 )
          {
            __asm { monitorx rax, rcx, rdx }
            if ( (v57 & 1) == 0 )
              break;
            v40 = v39;
            v41 = __rdtsc();
            v39 = v41;
            if ( v41 <= v40 || v41 >= v11 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        v20 = &v57;
        if ( !_interlockedbittestandreset(&v57, 0) )
          goto LABEL_31;
        LODWORD(v20) = NtWaitForAlertByThreadId(Address[0], v5);
        v22 = (int)v20;
        if ( (_DWORD)v20 != 258 )
          goto LABEL_30;
        if ( _InterlockedExchange(&v57, 4) == 2 )
          break;
        LODWORD(v20) = RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, Address);
LABEL_32:
        if ( v22 == 258 )
        {
          v7 = v59;
          v8 = (const void **)(a1 + 16);
          v6 = v51;
          goto LABEL_83;
        }
LABEL_33:
        a2 = *(_DWORD *)v12;
        if ( (*(_DWORD *)v12 & 2) == 0 )
          goto LABEL_34;
      }
      LODWORD(v20) = NtWaitForAlertByThreadId(Address[0], 0LL);
      v22 = (int)v20;
LABEL_30:
      if ( v22 != 257 )
        goto LABEL_32;
LABEL_31:
      v22 = 0;
      goto LABEL_32;
    }
    LODWORD(v20) = NtWaitForSingleObject(v7, 0, v5);
    v22 = (int)v20;
    if ( (_DWORD)v20 != 258 )
      break;
LABEL_83:
    v42 = NtCurrentTeb();
    DbgPrintEx(
      0x65u,
      1u,
      "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n",
      ((__int64)(((unsigned __int128)(v5->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v5->QuadPart) >> 23)
    + ((unsigned __int64)(((unsigned __int128)(v5->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v5->QuadPart) >> 63),
      v50);
    if ( *(_QWORD *)a1 == -1LL )
      v43 = 0;
    else
      v43 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      0x65u,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v42->ClientId.UniqueProcess,
      v42->ClientId.UniqueThread,
      *v52,
      (const void *)a1,
      v43);
    v44 = ++v50;
    if ( *(_QWORD *)a1 == -1LL )
      v45 = 0;
    else
      v45 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v44 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && v45 == v6 )
      RtlpPossibleDeadlock(a1);
    v51 = v45;
    v6 = v45;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
LABEL_34:
  if ( v22 < 0 )
    RtlRaiseStatus(v22);
  if ( v49 )
  {
    v60->WaitingOnLoaderLock = 0;
    v20 = (__int32 *)NtCurrentPeb();
    v32 = (_DWORD *)*((_QWORD *)v20 + 18);
    if ( v32 && *v32 )
    {
      v20 = (__int32 *)NtCurrentPeb();
      v33 = *((_QWORD *)v20 + 18) + 554LL;
    }
    else
    {
      v33 = 2147353476LL;
    }
    if ( *(_BYTE *)v33 )
    {
      v20 = (__int32 *)NtCurrentPeb();
      if ( (v20[222] & 4) != 0 )
      {
        v20 = (__int32 *)NtCurrentPeb();
        v46 = (_DWORD *)*((_QWORD *)v20 + 18);
        if ( v46 && *v46 )
        {
          v20 = (__int32 *)NtCurrentPeb();
          v47 = *((_QWORD *)v20 + 18) + 555LL;
        }
        else
        {
          v47 = 2147353477LL;
        }
        if ( (*(_BYTE *)v47 & 0x20) != 0 )
        {
          LOBYTE(v11) = -1;
          LODWORD(v20) = LdrpLogEtwEvent(5251, -1, 255, v11, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v20;
}
