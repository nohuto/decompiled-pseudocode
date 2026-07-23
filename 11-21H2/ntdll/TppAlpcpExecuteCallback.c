/*
 * XREFs of TppAlpcpExecuteCallback @ 0x180021EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180022550 (RtlSetThreadSubProcessTag.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     TppIteWakeWaiters @ 0x18006BC6C (TppIteWakeWaiters.c)
 *     TpCallbackMayRunLong @ 0x1800712E0 (TpCallbackMayRunLong.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     NtAlpcSetInformation @ 0x1800A5200 (NtAlpcSetInformation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

int __fastcall TppAlpcpExecuteCallback(_DWORD *Instance, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  signed __int32 v7; // r8d
  int v8; // eax
  signed __int32 v9; // edx
  signed __int32 v10; // r9d
  char v11; // r15
  signed __int64 v12; // rbx
  signed __int64 v13; // rdi
  signed __int64 v14; // rbx
  __int64 v15; // r13
  _QWORD *v16; // rdi
  void *v17; // rcx
  _QWORD *v18; // rbp
  __int64 v19; // rbx
  _DWORD *SharedData; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v26; // eax
  unsigned int v27; // eax
  _QWORD *v28; // r8
  struct _PEB *v29; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rcx
  void *v32; // rcx
  __int64 v33; // rbx
  int PortInformation; // [rsp+88h] [rbp+10h] BYREF
  __int64 v36; // [rsp+90h] [rbp+18h]

  v36 = a3;
  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    LODWORD(v29) = LdrAddRefDll(0, *(PVOID *)(a2 + 208));
    if ( (int)v29 < 0 )
      return (int)v29;
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(a2 + 216);
      v7 = *(_DWORD *)(a2 + 284);
      if ( !v6 || (v8 = *(_DWORD *)(v6 + 440)) == 0 )
        v8 = MEMORY[0x7FFE03C0];
      v9 = v8 + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v10 = v8 + v9;
      if ( v7 >= v9 && v7 <= v8 + v10 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v10, v7) )
      {
        v32 = *(void **)(a2 + 272);
        PortInformation = v8 + v9;
        NtAlpcSetInformation(v32, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  v11 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v12 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v11 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
      v11 = 0;
    }
    v13 = v12;
    v14 = (v12 ^ (v12 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v12;
    if ( v13 < 0 && (v14 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v14 &= ~0x8000000000000000uLL;
      v11 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v14, v13);
  }
  while ( v13 != v12 );
  v15 = v36;
  v16 = 0LL;
  if ( v11 )
  {
    v33 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    TppIteWakeWaiters(v33);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast(Instance, *(_QWORD *)(a2 + 168));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v17 = *(void **)(a2 + 176);
  if ( v17 )
  {
    *((_QWORD *)Instance + 10) = v17;
    RtlSetThreadSubProcessTag(v17);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  v18 = (_QWORD *)(a2 + 200);
  if ( a2 != -200
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v18
    && NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v18, 8u) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v18;
  }
  v19 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v21 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v21 = 2147353478LL;
  if ( *(_BYTE *)v21 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 216),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v22 = *(_QWORD *)(a2 + 176);
  v23 = *(_QWORD *)(a2 + 160);
  v24 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v26 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v27 = ((_BYTE)v26 - 1) & 1;
    ThreadPoolData[3] = v27;
    v28 = &ThreadPoolData[8 * v27];
    v16 = v28 + 4;
    v28[4] = v24;
    v28[5] = v23;
    v28[6] = v22;
    v28[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v24 = *(_QWORD *)(a2 + 152);
  }
  *((_QWORD *)Instance + 11) = v24;
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, v15);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, v22);
  }
  v29 = NtCurrentPeb();
  v30 = v29->SharedData;
  if ( v30 && *v30 )
  {
    v29 = NtCurrentPeb();
    v19 = (__int64)v29->SharedData + 556;
  }
  if ( *(_BYTE *)v19 )
    LODWORD(v29) = RtlpTpETWCallbackStop(
                     *(_QWORD *)(a2 + 216),
                     a2,
                     *(_QWORD *)(a2 + 152),
                     *(_QWORD *)(a2 + 160),
                     *(_QWORD *)(a2 + 176));
  if ( v16 )
  {
    v31 = v16[3];
    v29 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v31 )
    {
      v29 = (struct _PEB *)((char *)v29 - v31);
      v16[3] = v29;
    }
  }
  return (int)v29;
}
