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
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  _UNKNOWN **v6; // rcx
  int v7; // r15d
  LARGE_INTEGER *v8; // r14
  int v9; // r13d
  void *v10; // r12
  const void **v11; // rsi
  const void **i; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r12
  struct _TEB *v16; // rcx
  __int64 WaitOnAddressHashTable; // r13
  volatile signed __int64 *v18; // r8
  signed __int64 k; // rcx
  _QWORD *v20; // rax
  signed __int64 v21; // rbx
  signed __int64 v22; // rax
  __int32 *v23; // rax
  int v25; // ebx
  signed __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  char v30; // dl
  bool v31; // zf
  signed __int64 v32; // rax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  struct _TEB *v37; // rcx
  __int64 WowTebOffset; // rax
  _DWORD *SharedData; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  struct _TEB *v44; // rbx
  int v45; // eax
  unsigned int v46; // ecx
  int v47; // ebx
  _DWORD *v48; // rcx
  __int64 v49; // rcx
  char v51; // [rsp+40h] [rbp-69h]
  int v52; // [rsp+44h] [rbp-65h]
  int v53; // [rsp+48h] [rbp-61h]
  const void **v54; // [rsp+50h] [rbp-59h]
  _QWORD v55[2]; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp-41h]
  __int64 v57; // [rsp+70h] [rbp-39h]
  _QWORD *v58; // [rsp+78h] [rbp-31h]
  __int32 v59; // [rsp+80h] [rbp-29h] BYREF
  _QWORD *j; // [rsp+88h] [rbp-21h]
  void *v61; // [rsp+90h] [rbp-19h]
  struct _TEB *v62; // [rsp+98h] [rbp-11h]
  char v63[6]; // [rsp+A0h] [rbp-9h] BYREF
  __int16 v64; // [rsp+A6h] [rbp-3h]
  int v65; // [rsp+C0h] [rbp+17h]
  int v66; // [rsp+C4h] [rbp+1Bh]
  const void *v67; // [rsp+C8h] [rbp+1Fh]
  __int64 v68; // [rsp+D0h] [rbp+27h]

  v4 = NtCurrentTeb();
  v51 = 0;
  v6 = &LdrpLoaderLock;
  v62 = v4;
  v52 = 0;
  v7 = a2;
  if ( (_UNKNOWN **)a1 == &LdrpLoaderLock )
  {
    v51 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( byte_180187488 )
    goto LABEL_63;
  if ( UseWOW64 )
  {
    v37 = NtCurrentTeb();
    WowTebOffset = v37->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v37 = (struct _TEB *)((char *)v37 + WowTebOffset);
    }
    else
    {
      v37 = 0LL;
    }
    v6 = (_UNKNOWN **)*(unsigned int *)(LODWORD(v37->NtTib.Self) + 0xCLL);
    if ( v6 )
    {
      if ( *((_BYTE *)v6 + 40) )
LABEL_63:
        ZwTerminateProcess(-1LL, 3221225547LL);
    }
  }
  v8 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v8 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1);
  v9 = 0;
  v53 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v10 = *(void **)(a1 + 24);
  v11 = (const void **)(a1 + 16);
  v61 = v10;
  for ( i = (const void **)(a1 + 16); ; i = v54 )
  {
    v54 = i;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2, a3, a4) )
    {
      v13 = (__int64)NtCurrentPeb()->SharedData + 552;
    }
    else
    {
      i = v11;
      v13 = 2147353474LL;
      v54 = v11;
    }
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v68 = a1;
      v64 = 5922;
      v66 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v65 = *(_DWORD *)(a1 + 8);
      v67 = *i;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v40 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v40 = 2147353474LL;
      NtTraceEvent(*(unsigned __int8 *)v40, 132098LL, 24LL, v63);
    }
    if ( v10 == (void *)-1LL )
    {
      v14 = (unsigned __int64)v55;
      v15 = a1 + 8;
      for ( j = v55; ; v14 = (unsigned __int64)j )
      {
        v55[0] = a1 + 8;
        v59 = 1;
        v57 = 0LL;
        v56 = 0LL;
        v58 = 0LL;
        v16 = NtCurrentTeb();
        v55[1] = v16->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v16->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v18 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * ((v15 >> 5) & 0x7F));
        for ( k = *v18; ; k = v22 )
        {
          v20 = v55;
          v21 = v14 | k & 3;
          v56 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (k & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v20 = 0LL;
          v58 = v20;
          if ( (k & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v21 |= 2uLL;
          v22 = _InterlockedCompareExchange64(v18, v21, k);
          if ( k == v22 )
            break;
        }
        if ( (((unsigned __int8)k ^ (unsigned __int8)v21) & 2) != 0 )
        {
          v26 = *v18;
          do
          {
            v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
            v28 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v29 = v28;
                v28 = (_QWORD *)v28[2];
                v28[3] = v29;
              }
              while ( !v28[4] );
            }
            *(_QWORD *)(v27 + 32) = v28[4];
            v30 = v26 & 1;
            if ( (v26 & 1) != 0 )
              v27 = 0LL;
            v32 = _InterlockedCompareExchange64(v18, v27, v26);
            v31 = v26 == v32;
            v26 = v32;
          }
          while ( !v31 );
          if ( v30 )
          {
            v33 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (v32 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              do
              {
                v34 = *(_QWORD *)(v33 + 16);
                if ( !_InterlockedExchange((volatile __int32 *)(v33 + 40), 2) )
                  ZwAlertThreadByThreadId(*(_QWORD *)(v33 + 8));
                v33 = v34;
              }
              while ( v34 );
            }
          }
        }
        if ( *(_DWORD *)v15 != v7 )
        {
          LODWORD(v23) = RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v55);
          v25 = 0;
          goto LABEL_33;
        }
        if ( MEMORY[0x7FFE036A] > 1u && MEMORY[0x7FFE0297] )
        {
          v41 = __rdtsc();
          v14 = v41;
          while ( 1 )
          {
            __asm { monitorx rax, rcx, rdx }
            if ( (v59 & 1) == 0 )
              break;
            v42 = v41;
            v43 = __rdtsc();
            v41 = v43;
            if ( v43 <= v42 || v43 >= v14 )
              break;
            __asm { mwaitx  rax, rcx, rbx }
          }
        }
        v23 = &v59;
        if ( !_interlockedbittestandreset(&v59, 0) )
          goto LABEL_31;
        LODWORD(v23) = NtWaitForAlertByThreadId(v55[0], v8);
        v25 = (int)v23;
        if ( (_DWORD)v23 != 258 )
          goto LABEL_30;
        if ( _InterlockedExchange(&v59, 4) == 2 )
          break;
        LODWORD(v23) = RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v55);
LABEL_32:
        if ( v25 == 258 )
        {
          v10 = v61;
          v11 = (const void **)(a1 + 16);
          v9 = v53;
          goto LABEL_83;
        }
LABEL_33:
        v7 = *(_DWORD *)v15;
        if ( (*(_DWORD *)v15 & 2) == 0 )
          goto LABEL_34;
      }
      LODWORD(v23) = NtWaitForAlertByThreadId(v55[0], 0LL);
      v25 = (int)v23;
LABEL_30:
      if ( v25 != 257 )
        goto LABEL_32;
LABEL_31:
      v25 = 0;
      goto LABEL_32;
    }
    LODWORD(v23) = NtWaitForSingleObject(v10, 0, v8);
    v25 = (int)v23;
    if ( (_DWORD)v23 != 258 )
      break;
LABEL_83:
    v44 = NtCurrentTeb();
    DbgPrintEx(
      101LL,
      1LL,
      "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n",
      ((__int64)(((unsigned __int128)(v8->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v8->QuadPart) >> 23)
    + ((unsigned __int64)(((unsigned __int128)(v8->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v8->QuadPart) >> 63),
      v52);
    if ( *(_QWORD *)a1 == -1LL )
      v45 = 0;
    else
      v45 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      101LL,
      0LL,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v44->ClientId.UniqueProcess,
      v44->ClientId.UniqueThread,
      *v54,
      (const void *)a1,
      v45);
    v46 = ++v52;
    if ( *(_QWORD *)a1 == -1LL )
      v47 = 0;
    else
      v47 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v46 > 2 && (_UNKNOWN **)a1 != &LdrpLoaderLock && v47 == v9 )
      RtlpPossibleDeadlock(a1);
    v53 = v47;
    v9 = v47;
    DbgPrintEx(101LL, 0LL, "RTL: Re-Waiting\n");
  }
LABEL_34:
  if ( v25 < 0 )
    RtlRaiseStatus((unsigned int)v25);
  if ( v51 )
  {
    v62->WaitingOnLoaderLock = 0;
    v23 = (__int32 *)NtCurrentPeb();
    v35 = (_DWORD *)*((_QWORD *)v23 + 18);
    if ( v35 && *v35 )
    {
      v23 = (__int32 *)NtCurrentPeb();
      v36 = *((_QWORD *)v23 + 18) + 554LL;
    }
    else
    {
      v36 = 2147353476LL;
    }
    if ( *(_BYTE *)v36 )
    {
      v23 = (__int32 *)NtCurrentPeb();
      if ( (v23[222] & 4) != 0 )
      {
        v23 = (__int32 *)NtCurrentPeb();
        v48 = (_DWORD *)*((_QWORD *)v23 + 18);
        if ( v48 && *v48 )
        {
          v23 = (__int32 *)NtCurrentPeb();
          v49 = *((_QWORD *)v23 + 18) + 555LL;
        }
        else
        {
          v49 = 2147353477LL;
        }
        if ( (*(_BYTE *)v49 & 0x20) != 0 )
        {
          LOBYTE(v14) = -1;
          LODWORD(v23) = LdrpLogEtwEvent(5251, -1, 255, v14, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v23;
}
