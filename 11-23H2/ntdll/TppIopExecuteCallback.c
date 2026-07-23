/*
 * XREFs of TppIopExecuteCallback @ 0x18004EF70
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x18002D240 (LdrAddRefDll.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004F51C (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrUnlockLoaderLock @ 0x180050F30 (LdrUnlockLoaderLock.c)
 *     LdrLockLoaderLock @ 0x180051030 (LdrLockLoaderLock.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801274E0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18012757C (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppIopExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v6; // rbx
  void *v7; // r14
  int v8; // esi
  signed __int32 v9; // ecx
  bool v10; // zf
  signed __int32 v11; // eax
  int v12; // edi
  _DWORD *SharedData; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10
  _QWORD *ThreadPoolData; // rcx
  unsigned int v20; // eax
  __int64 v21; // r9
  _QWORD *v22; // rsi
  __int64 result; // rax
  _DWORD *v24; // rcx
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
    TppCleanupGroupMemberCallbackProlog((PTP_CALLBACK_INSTANCE)Instance);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
    {
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
      v14 = 2147353478LL;
    }
    else
    {
      v14 = 2147353478LL;
      v15 = 2147353478LL;
    }
    if ( *(_BYTE *)v15 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v6 + 144),
        v4,
        *(_QWORD *)(v6 + 80),
        *(_QWORD *)(v6 + 88),
        *(_QWORD *)(v6 + 104));
    v16 = *(_QWORD *)(v6 + 104);
    v17 = *(_QWORD *)(v6 + 88);
    v18 = *(_QWORD *)(v6 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v20 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v20;
      v21 = 4LL * v20;
      v22 = &ThreadPoolData[v21 + 4];
      *v22 = v18;
      ThreadPoolData[v21 + 5] = v17;
      ThreadPoolData[v21 + 6] = v16;
      ThreadPoolData[v21 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v22 = 0LL;
    }
    Instance[11] = *(_QWORD *)(v6 + 80);
    Instance[12] = *(_QWORD *)(v6 + 88);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64))(v6 + 80))(
      Instance,
      *(_QWORD *)(v6 + 88),
      a3,
      a4,
      v6);
    result = (__int64)NtCurrentPeb();
    v24 = *(_DWORD **)(result + 144);
    if ( v24 && *v24 )
    {
      result = (__int64)NtCurrentPeb();
      v14 = *(_QWORD *)(result + 144) + 556LL;
    }
    if ( *(_BYTE *)v14 )
      result = RtlpTpETWCallbackStop(
                 *(_QWORD *)(v6 + 144),
                 v4,
                 *(_QWORD *)(v6 + 80),
                 *(_QWORD *)(v6 + 88),
                 *(_QWORD *)(v6 + 104));
    if ( v22 )
    {
      result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v22[3] )
      {
        result -= v22[3];
        v22[3] = result;
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
