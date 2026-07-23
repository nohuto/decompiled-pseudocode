/*
 * XREFs of TppIopExecuteCallback @ 0x180024270
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberCallbackProlog @ 0x180022458 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     LdrLockLoaderLock @ 0x1800844D0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180085240 (LdrUnlockLoaderLock.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

int __fastcall TppIopExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v6; // rbx
  void *v7; // r15
  int v8; // esi
  signed __int32 v9; // ecx
  bool v10; // zf
  signed __int32 v11; // eax
  int v12; // edi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // rdx
  _QWORD *ThreadPoolData; // rcx
  unsigned int v19; // eax
  __int64 v20; // r9
  _QWORD *v21; // rsi
  struct _PEB *v22; // rax
  PVOID Cookie; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  Cookie = 0LL;
  v6 = a2 - 200;
  v7 = *(void **)(a2 - 200 + 136);
  if ( v7 )
  {
    v8 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
  }
  else
  {
    v8 = 0;
  }
  _m_prefetchw((const void *)(v6 + 280));
  v9 = *(_DWORD *)(v6 + 280);
  while ( v9 > 0 )
  {
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 280), v9 - 1, v9);
    v10 = v9 == v11;
    v9 = v11;
    if ( v10 )
    {
      v12 = 1;
      goto LABEL_7;
    }
  }
  v12 = 0;
LABEL_7:
  if ( v8 && v12 )
  {
    if ( LdrAddRefDll(0, v7) >= 0 )
    {
      Instance[21] = v7;
      *((_DWORD *)Instance + 36) |= 0x100u;
    }
    else
    {
      v12 = 0;
    }
  }
  if ( v8 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v12 )
  {
    TppCleanupGroupMemberCallbackProlog(Instance, v6);
    v13 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v6 + 144),
        v4,
        *(_QWORD *)(v6 + 80),
        *(_QWORD *)(v6 + 88),
        *(_QWORD *)(v6 + 104));
    v15 = *(_QWORD *)(v6 + 104);
    v16 = *(_QWORD *)(v6 + 88);
    v17 = *(_QWORD *)(v6 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v19 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v19;
      v20 = 4LL * v19;
      v21 = &ThreadPoolData[v20 + 4];
      *v21 = v17;
      ThreadPoolData[v20 + 5] = v16;
      ThreadPoolData[v20 + 6] = v15;
      ThreadPoolData[v20 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v17 = *(_QWORD *)(v6 + 80);
    }
    else
    {
      v21 = 0LL;
    }
    Instance[11] = v17;
    Instance[12] = *(_QWORD *)(v6 + 88);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64))(v6 + 80))(
      Instance,
      *(_QWORD *)(v6 + 88),
      a3,
      a4,
      v6);
    LODWORD(v22) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v22 )
    {
      v22 = NtCurrentPeb();
      v13 = (__int64)v22->SharedData + 556;
    }
    if ( *(_BYTE *)v13 )
      LODWORD(v22) = RtlpTpETWCallbackStop(
                       *(_QWORD *)(v6 + 144),
                       v4,
                       *(_QWORD *)(v6 + 80),
                       *(_QWORD *)(v6 + 88),
                       *(_QWORD *)(v6 + 104));
    if ( v21 )
    {
      v22 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v21[3] )
      {
        v22 = (struct _PEB *)((char *)v22 - v21[3]);
        v21[3] = v22;
      }
    }
  }
  else
  {
    LODWORD(v22) = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF);
    if ( (_DWORD)v22 == 1 )
      LODWORD(v22) = (**(__int64 (__fastcall ***)(__int64))(v6 + 8))(v6);
  }
  return (int)v22;
}
