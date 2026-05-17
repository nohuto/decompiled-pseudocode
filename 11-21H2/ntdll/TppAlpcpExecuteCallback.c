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

struct _PEB *__fastcall TppAlpcpExecuteCallback(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v7; // rax
  int v8; // eax
  char v9; // r15
  signed __int64 v10; // rbx
  signed __int64 v11; // rdi
  signed __int64 v12; // rbx
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // rbx
  _DWORD *SharedData; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v24; // eax
  unsigned int v25; // eax
  _QWORD *v26; // r8
  struct _PEB *result; // rax
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  int v32; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp+18h]

  v33 = a3;
  v4 = *(_QWORD *)(a2 + 208);
  v5 = a2;
  if ( v4 )
  {
    result = (struct _PEB *)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 208));
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 72));
  if ( (*(_BYTE *)(v5 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 216);
      a3 = *(unsigned int *)(v5 + 284);
      if ( !v7 || (v8 = *(_DWORD *)(v7 + 440)) == 0 )
        v8 = MEMORY[0x7FFE03C0];
      a2 = (unsigned int)(v8 + *(_DWORD *)(*(_QWORD *)(v5 + 216) + 420LL));
      a4 = (unsigned int)(v8 + a2);
      if ( (int)a3 >= (int)a2 && (int)a3 <= v8 + (int)a4 )
        break;
      if ( (_DWORD)a3 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 284), a4, a3) )
      {
        v30 = *(_QWORD *)(v5 + 272);
        v32 = v8 + a2;
        NtAlpcSetInformation(v30, 8LL, &v32);
      }
    }
  }
  v9 = 0;
  _m_prefetchw((const void *)(v5 + 128));
  v10 = *(_QWORD *)(v5 + 128);
  do
  {
    if ( v9 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 136));
      v9 = 0;
    }
    v11 = v10;
    v12 = (v10 ^ (v10 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v10;
    if ( v11 < 0 && (v12 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v12 &= ~0x8000000000000000uLL;
      v9 = 1;
      RtlAcquireSRWLockExclusive(v5 + 136, a2, a3, a4);
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 128), v12, v11);
  }
  while ( v11 != v10 );
  v13 = v33;
  v14 = 0LL;
  if ( v9 )
  {
    v31 = *(_QWORD *)(v5 + 144);
    *(_QWORD *)(v5 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 136));
    TppIteWakeWaiters(v31);
  }
  if ( (unsigned __int64)(*(_QWORD *)(v5 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(v5 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = v5 + 72;
  if ( (*(_DWORD *)(v5 + 240) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v15 = *(_QWORD *)(v5 + 176);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 80) = v15;
    RtlSetThreadSubProcessTag();
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(v5 + 184);
  v16 = (_QWORD *)(v5 + 200);
  if ( v5 != -200LL
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v16
    && (int)NtSetInformationThread(-2LL, 44LL, v16, 8LL) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v16;
  }
  v17 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v19 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v19 = 2147353478LL;
  if ( *(_BYTE *)v19 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(v5 + 216),
      v5,
      *(_QWORD *)(v5 + 152),
      *(_QWORD *)(v5 + 160),
      *(_QWORD *)(v5 + 176));
  v20 = *(_QWORD *)(v5 + 176);
  v21 = *(_QWORD *)(v5 + 160);
  v22 = *(_QWORD *)(v5 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v24 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v25 = ((_BYTE)v24 - 1) & 1;
    ThreadPoolData[3] = v25;
    v26 = &ThreadPoolData[8 * v25];
    v14 = v26 + 4;
    v26[4] = v22;
    v26[5] = v21;
    v26[6] = v20;
    v26[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v22 = *(_QWORD *)(v5 + 152);
  }
  *(_QWORD *)(a1 + 88) = v22;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(v5 + 160);
  if ( (*(_BYTE *)(v5 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = v5;
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(v5 + 152))(
      a1,
      *(_QWORD *)(v5 + 160),
      v5,
      v13);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(v5 + 152))(a1, *(_QWORD *)(v5 + 160), v5, v20);
  }
  result = NtCurrentPeb();
  v28 = result->SharedData;
  if ( v28 && *v28 )
  {
    result = NtCurrentPeb();
    v17 = (__int64)result->SharedData + 556;
  }
  if ( *(_BYTE *)v17 )
    result = (struct _PEB *)RtlpTpETWCallbackStop(
                              *(_QWORD *)(v5 + 216),
                              v5,
                              *(_QWORD *)(v5 + 152),
                              *(_QWORD *)(v5 + 160),
                              *(_QWORD *)(v5 + 176));
  if ( v14 )
  {
    v29 = v14[3];
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v29 )
    {
      result = (struct _PEB *)((char *)result - v29);
      v14[3] = result;
    }
  }
  return result;
}
