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

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // esi
  signed __int32 v9; // ecx
  bool v10; // zf
  signed __int32 v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rdx
  _QWORD *ThreadPoolData; // rcx
  unsigned int v23; // eax
  __int64 v24; // r9
  _QWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 result; // rax
  _QWORD v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2;
  v31[0] = 0LL;
  v6 = a2 - 200;
  v7 = *(_QWORD *)(a2 - 200 + 136);
  if ( v7 )
  {
    v8 = 1;
    LdrLockLoaderLock(0LL, 0LL, v31);
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
    if ( (int)LdrAddRefDll(0LL, v7) >= 0 )
    {
      *(_QWORD *)(a1 + 168) = v7;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
    else
    {
      v12 = 0;
    }
  }
  if ( v8 )
    LdrUnlockLoaderLock(0LL, v31[0]);
  if ( v12 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, v6);
    v17 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13, v15, v16) )
      v18 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v18 = 2147353478LL;
    if ( *(_BYTE *)v18 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v6 + 144),
        v4,
        *(_QWORD *)(v6 + 80),
        *(_QWORD *)(v6 + 88),
        *(_QWORD *)(v6 + 104));
    v19 = *(_QWORD *)(v6 + 104);
    v20 = *(_QWORD *)(v6 + 88);
    v21 = *(_QWORD *)(v6 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v23 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v23;
      v24 = 4LL * v23;
      v25 = &ThreadPoolData[v24 + 4];
      *v25 = v21;
      ThreadPoolData[v24 + 5] = v20;
      ThreadPoolData[v24 + 6] = v19;
      ThreadPoolData[v24 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v21 = *(_QWORD *)(v6 + 80);
    }
    else
    {
      v25 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v21;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v6 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v6 + 80))(a1, *(_QWORD *)(v6 + 88), a3, a4, v6);
    result = RtlGetCurrentServiceSessionId(v27, v26, v28, v29);
    if ( (_DWORD)result )
    {
      result = (__int64)NtCurrentPeb();
      v17 = *(_QWORD *)(result + 144) + 556LL;
    }
    if ( *(_BYTE *)v17 )
      result = RtlpTpETWCallbackStop(
                 *(_QWORD *)(v6 + 144),
                 v4,
                 *(_QWORD *)(v6 + 80),
                 *(_QWORD *)(v6 + 88),
                 *(_QWORD *)(v6 + 104));
    if ( v25 )
    {
      result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25[3] )
      {
        result -= v25[3];
        v25[3] = result;
      }
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v6 + 8))(v6);
  }
  return result;
}
