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

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, int a2)
{
  struct _TEB *v2; // rbx
  unsigned int v5; // ebp
  LARGE_INTEGER *v6; // r14
  __int64 v7; // rcx
  int v8; // edi
  void *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  struct _TEB *v12; // rcx
  __int64 WaitOnAddressHashTable; // rbx
  __int64 v14; // rax
  signed __int64 v15; // rcx
  volatile signed __int64 *v16; // r9
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  signed __int64 v19; // rax
  struct _PEB *v20; // rax
  int v21; // r9d
  signed __int64 v22; // r8
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  char v26; // dl
  bool v27; // zf
  signed __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rbp
  _DWORD *v31; // rcx
  __int64 v32; // rcx
  struct _TEB *v33; // rcx
  __int64 WowTebOffset; // rax
  __int64 v35; // rcx
  _DWORD *SharedData; // rcx
  __int64 v37; // rcx
  struct _TEB *v38; // rbx
  unsigned __int64 v39; // rdx
  int v40; // eax
  int v41; // ebx
  _DWORD *v42; // rcx
  __int64 v43; // rcx
  char v45; // [rsp+40h] [rbp-B8h]
  unsigned int v46; // [rsp+44h] [rbp-B4h]
  int v47; // [rsp+48h] [rbp-B0h]
  struct _TEB *v48; // [rsp+50h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-90h]
  __int64 v51; // [rsp+70h] [rbp-88h]
  _QWORD *v52; // [rsp+78h] [rbp-80h]
  int v53; // [rsp+80h] [rbp-78h]
  _BYTE Fields[6]; // [rsp+88h] [rbp-70h] BYREF
  __int16 v55; // [rsp+8Eh] [rbp-6Ah]
  int v56; // [rsp+A8h] [rbp-50h]
  int v57; // [rsp+ACh] [rbp-4Ch]
  __int64 v58; // [rsp+B0h] [rbp-48h]
  __int64 v59; // [rsp+B8h] [rbp-40h]

  v2 = NtCurrentTeb();
  v45 = 0;
  v48 = v2;
  v46 = 0;
  v5 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v45 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_18017A188 )
    goto LABEL_56;
  if ( UseWOW64 )
  {
    v33 = NtCurrentTeb();
    WowTebOffset = v33->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v33 = (struct _TEB *)((char *)v33 + WowTebOffset);
    }
    else
    {
      v33 = 0LL;
    }
    v35 = *(unsigned int *)(LODWORD(v33->NtTib.Self) + 0xCLL);
    if ( v35 )
    {
      if ( *(_BYTE *)(v35 + 40) )
LABEL_56:
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    }
  }
  v6 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  v7 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v7 = -1LL;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      v7 = *(_QWORD *)a1;
    }
  }
  v47 = 0;
  v8 = 0;
  if ( v7 != -1 )
    ++*(_DWORD *)(v7 + 36);
  v9 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v10 = 2147353474LL;
    if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v59 = a1;
      v55 = 5922;
      v57 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v56 = *(_DWORD *)(a1 + 8);
      v58 = *(_QWORD *)(a1 + 16);
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v37 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v37 = 2147353474LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v37, 0x20402u, 0x18u, Fields);
    }
    if ( v9 == (void *)-1LL )
    {
      v11 = a1 + 8;
      while ( 1 )
      {
        v51 = 0LL;
        v50 = 0LL;
        v52 = 0LL;
        v49[0] = a1 + 8;
        v53 = 1;
        v12 = NtCurrentTeb();
        v49[1] = v12->ClientId.UniqueThread;
        WaitOnAddressHashTable = (__int64)v12->ProcessEnvironmentBlock->WaitOnAddressHashTable;
        v14 = (v11 >> 5) & 0x7F;
        v15 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v14);
        v16 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v14);
        while ( 1 )
        {
          v17 = v49;
          v18 = (unsigned __int64)v49 | v15 & 3;
          v50 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v17 = 0LL;
          v52 = v17;
          if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            v18 |= 2uLL;
          v19 = _InterlockedCompareExchange64(v16, v18, v15);
          if ( v15 == v19 )
            break;
          v15 = v19;
        }
        if ( (((unsigned __int8)v15 ^ (unsigned __int8)v18) & 2) != 0 )
        {
          v22 = *v16;
          do
          {
            v23 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
            v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !*(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
            {
              do
              {
                v25 = v24;
                v24 = (_QWORD *)v24[2];
                v24[3] = v25;
              }
              while ( !v24[4] );
            }
            *(_QWORD *)(v23 + 32) = v24[4];
            v26 = v22 & 1;
            if ( (v22 & 1) != 0 )
              v23 = 0LL;
            v28 = _InterlockedCompareExchange64(v16, v23, v22);
            v27 = v22 == v28;
            v22 = v28;
          }
          while ( !v27 );
          if ( v26 )
          {
            v29 = v28 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (v28 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              do
              {
                v30 = *(_QWORD *)(v29 + 16);
                if ( !_InterlockedExchange((volatile __int32 *)(v29 + 40), 2) )
                  ZwAlertThreadByThreadId(*(HANDLE *)(v29 + 8));
                v29 = v30;
              }
              while ( v30 );
            }
          }
        }
        if ( *(_DWORD *)v11 == a2 )
        {
          LODWORD(v20) = RtlpWaitOnAddressWithTimeout(WaitOnAddressHashTable, v49, v6, 0LL);
          if ( (_DWORD)v20 == 258 )
          {
            v8 = v47;
            v5 = v46;
            goto LABEL_68;
          }
        }
        else
        {
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v49);
          LODWORD(v20) = 0;
        }
        a2 = *(_DWORD *)v11;
        if ( (*(_DWORD *)v11 & 2) == 0 )
          goto LABEL_28;
      }
    }
    LODWORD(v20) = NtWaitForSingleObject(v9, 0, v6);
    if ( (_DWORD)v20 != 258 )
      break;
LABEL_68:
    v38 = NtCurrentTeb();
    v39 = (__int64)(((unsigned __int128)(v6->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v6->QuadPart) >> 23;
    DbgPrintEx(0x65u, 1u, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v39 + (v39 >> 63), v5);
    if ( *(_QWORD *)a1 == -1LL )
      v40 = 0;
    else
      v40 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      0x65u,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v38->ClientId.UniqueProcess,
      v38->ClientId.UniqueThread,
      *(const void **)(a1 + 16),
      (const void *)a1,
      v40);
    v46 = ++v5;
    if ( *(_QWORD *)a1 == -1LL )
      v41 = 0;
    else
      v41 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v5 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && v41 == v8 )
      RtlpPossibleDeadlock(a1);
    v47 = v41;
    v8 = v41;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
LABEL_28:
  if ( (int)v20 < 0 )
    RtlRaiseStatus((NTSTATUS)v20);
  if ( v45 )
  {
    v48->WaitingOnLoaderLock = 0;
    v20 = NtCurrentPeb();
    v31 = v20->SharedData;
    if ( v31 && *v31 )
    {
      v20 = NtCurrentPeb();
      v32 = (__int64)v20->SharedData + 554;
    }
    else
    {
      v32 = 2147353476LL;
    }
    if ( *(_BYTE *)v32 )
    {
      v20 = NtCurrentPeb();
      if ( (v20->TracingFlags & 4) != 0 )
      {
        v20 = NtCurrentPeb();
        v42 = v20->SharedData;
        if ( v42 && *v42 )
        {
          v20 = NtCurrentPeb();
          v43 = (__int64)v20->SharedData + 555;
        }
        else
        {
          v43 = 2147353477LL;
        }
        if ( (*(_BYTE *)v43 & 0x20) != 0 )
        {
          LOBYTE(v21) = -1;
          LODWORD(v20) = LdrpLogEtwEvent(5251, -1, 255, v21, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v20;
}
