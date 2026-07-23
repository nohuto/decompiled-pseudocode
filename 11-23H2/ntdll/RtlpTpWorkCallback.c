/*
 * XREFs of RtlpTpWorkCallback @ 0x18004CE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180026AE0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180028AE0 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrUnloadDll @ 0x18002D3E0 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EA60 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EE60 (RtlSetThreadSubProcessTag.c)
 *     TppCompleteThreadData @ 0x18004EF30 (TppCompleteThreadData.c)
 *     TpCallbackMayRunLong @ 0x18004F6E0 (TpCallbackMayRunLong.c)
 *     RtlpTpWorkUnposted @ 0x18004F940 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x1800500FC (TpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180050144 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpTpImpersonate @ 0x1800897D0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     RtlpTpWorkCallbackXfgThunk @ 0x1800A79C0 (RtlpTpWorkCallbackXfgThunk.c)
 *     RtlpTpETWCallbackStart @ 0x1801274E0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18012757C (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x180128368 (RtlTpETWCallbackDequeue.c)
 */

__int64 __fastcall RtlpTpWorkCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _ACTIVATION_CONTEXT *v10; // rsi
  void *v11; // r12
  void *v12; // r15
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-A0h]
  _QWORD ThreadInformation[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h] BYREF
  int v20; // [rsp+68h] [rbp-70h]
  __int128 v21; // [rsp+70h] [rbp-68h]
  __int128 v22; // [rsp+80h] [rbp-58h]
  __int128 v23; // [rsp+90h] [rbp-48h]
  __int64 v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+E8h] [rbp+10h]
  __int64 v26; // [rsp+F0h] [rbp+18h]

  v19 = 72LL;
  v20 = 1;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlTpETWCallbackDequeue(v8, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v15 = *(_QWORD *)(a2 + 32);
    if ( !v15 )
    {
      v15 = TpPoolReferenceExistingGlobalPool();
      v4 = v15;
      v17 = v15;
    }
    *((_QWORD *)Instance + 16) = v15;
    TpCallbackMayRunLong(Instance);
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    RtlpTpImpersonate(v9, v5, v6);
  v26 = *(_QWORD *)(a2 + 56);
  v25 = *(_QWORD *)(a2 + 64);
  v10 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v11 = *(void **)(a2 + 80);
  ThreadInformation[1] = v11;
  v12 = *(void **)(a2 + 96);
  ThreadInformation[2] = v12;
  if ( v12 )
    RtlSetThreadSubProcessTag(v12);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v11 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v19, (__int64)v10);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    RtlpTpETWCallbackStart(0, a2, v26, v25, (__int64)v12);
  TppStartThreadData(&v16, v26, v25, NtCurrentTeb()->SubProcessTag);
  RtlpTpWorkCallbackXfgThunk(v25, v26);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v19);
    RtlReleaseActivationContext(v10);
  }
  if ( v11 )
    LdrUnloadDll(v11);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation[0] = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v12 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, a2, v26, v25, (__int64)v12);
  return TppCompleteThreadData(v16);
}
