/*
 * XREFs of TppAlpcpExecuteCallback @ 0x18004F3F0
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x18002D410 (LdrAddRefDll.c)
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18004F5E4 (TppFastAlpcAdjustConcurrencyCount.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004F67C (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180068030 (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180126060 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801260FC (RtlpTpETWCallbackStop.c)
 */

int __fastcall TppAlpcpExecuteCallback(_DWORD *Instance, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  _DWORD *ThreadPoolData; // rcx
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  _QWORD *v17; // r14
  struct _PEB *v18; // rax
  _DWORD *v19; // rcx

  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    LODWORD(v18) = LdrAddRefDll(0, *(PVOID *)(a2 + 208));
    if ( (int)v18 < 0 )
      return (int)v18;
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  TppFastAlpcAdjustConcurrencyCount(a2);
  TppBarrierAdjust(a2 + 128, 1LL, 0LL);
  TppCleanupGroupMemberCallbackProlog((PTP_CALLBACK_INSTANCE)Instance);
  v7 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 216),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v10 = *(_QWORD *)(a2 + 176);
  v11 = *(_QWORD *)(a2 + 160);
  v12 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v14 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v15 = ((_BYTE)v14 - 1) & 1;
    ThreadPoolData[3] = v15;
    v16 = 8LL * v15;
    v17 = &ThreadPoolData[v16 + 8];
    *(_QWORD *)&ThreadPoolData[v16 + 10] = v11;
    *v17 = v12;
    *(_QWORD *)&ThreadPoolData[v16 + 12] = v10;
    *(_QWORD *)&ThreadPoolData[v16 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v17 = 0LL;
  }
  *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 152);
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, a3);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2);
  }
  v18 = NtCurrentPeb();
  v19 = v18->SharedData;
  if ( v19 && *v19 )
  {
    v18 = NtCurrentPeb();
    v7 = (__int64)v18->SharedData + 556;
  }
  if ( *(_BYTE *)v7 )
    LODWORD(v18) = RtlpTpETWCallbackStop(
                     *(_QWORD *)(a2 + 216),
                     a2,
                     *(_QWORD *)(a2 + 152),
                     *(_QWORD *)(a2 + 160),
                     *(_QWORD *)(a2 + 176));
  if ( v17 )
  {
    v18 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v17[3] )
    {
      v18 = (struct _PEB *)((char *)v18 - v17[3]);
      v17[3] = v18;
    }
  }
  return (int)v18;
}
