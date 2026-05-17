/*
 * XREFs of RtlpTpWorkCallback @ 0x18004CF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026C30 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrUnloadDll @ 0x18002D5B0 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EBC0 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EFC0 (RtlSetThreadSubProcessTag.c)
 *     TppCompleteThreadData @ 0x18004F090 (TppCompleteThreadData.c)
 *     TpCallbackMayRunLong @ 0x18004F840 (TpCallbackMayRunLong.c)
 *     RtlpTpWorkUnposted @ 0x18004FAA0 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x18005025C (TpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800502A4 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpTpImpersonate @ 0x180088FD0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     RtlpTpWorkCallbackXfgThunk @ 0x1800A5910 (RtlpTpWorkCallbackXfgThunk.c)
 *     RtlpTpETWCallbackStart @ 0x180126060 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801260FC (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x180126EE8 (RtlTpETWCallbackDequeue.c)
 */

__int64 __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-A0h]
  _QWORD v15[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16; // [rsp+60h] [rbp-78h] BYREF
  int v17; // [rsp+68h] [rbp-70h]
  __int128 v18; // [rsp+70h] [rbp-68h]
  __int128 v19; // [rsp+80h] [rbp-58h]
  __int128 v20; // [rsp+90h] [rbp-48h]
  __int64 v21; // [rsp+A0h] [rbp-38h]
  __int64 v22; // [rsp+E8h] [rbp+10h]
  __int64 v23; // [rsp+F0h] [rbp+18h]

  v16 = 72LL;
  v17 = 1;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    RtlTpETWCallbackDequeue(v6, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v12 = *(_QWORD *)(a2 + 32);
    if ( !v12 )
    {
      v12 = TpPoolReferenceExistingGlobalPool();
      v4 = v12;
      v14 = v12;
    }
    *(_QWORD *)(a1 + 128) = v12;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v23 = *(_QWORD *)(a2 + 56);
  v22 = *(_QWORD *)(a2 + 64);
  v7 = *(volatile signed __int32 **)(a2 + 72);
  v8 = *(_QWORD *)(a2 + 80);
  v15[1] = v8;
  v9 = *(_QWORD *)(a2 + 96);
  v15[2] = v9;
  if ( v9 )
    RtlSetThreadSubProcessTag(v9);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v7 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v8 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v7 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v16, (__int64)v7);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  if ( *(_BYTE *)v10 )
    RtlpTpETWCallbackStart(0, a2, v23, v22, v9);
  TppStartThreadData(&v13, v23, v22, NtCurrentTeb()->SubProcessTag);
  RtlpTpWorkCallbackXfgThunk(v22, v23);
  if ( v7 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
    RtlReleaseActivationContext(v7);
  }
  if ( v8 )
    LdrUnloadDll(v8);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v15[0] = 0LL;
    NtSetInformationThread(-2LL, 5LL, v15);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v9 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(0, a2, v23, v22, v9);
  return TppCompleteThreadData(v13);
}
