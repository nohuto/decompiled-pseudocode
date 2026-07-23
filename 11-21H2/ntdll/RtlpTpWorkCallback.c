/*
 * XREFs of RtlpTpWorkCallback @ 0x180070EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     TppCompleteThreadData @ 0x1800212E8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180021410 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x180022550 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrUnloadDll @ 0x180038270 (LdrUnloadDll.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003F140 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpTpWorkUnposted @ 0x180071130 (RtlpTpWorkUnposted.c)
 *     TpDereferenceGlobalPool @ 0x180071288 (TpDereferenceGlobalPool.c)
 *     TpCallbackMayRunLong @ 0x1800712E0 (TpCallbackMayRunLong.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007144C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlpTpImpersonate @ 0x1800714A0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 *     RtlpTpWorkCallbackXfgThunk @ 0x1800AAB10 (RtlpTpWorkCallbackXfgThunk.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x180125488 (RtlTpETWCallbackDequeue.c)
 */

void __fastcall RtlpTpWorkCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
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
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-A0h]
  _QWORD ThreadInformation[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v18; // [rsp+60h] [rbp-78h] BYREF
  int v19; // [rsp+68h] [rbp-70h]
  __int128 v20; // [rsp+70h] [rbp-68h]
  __int128 v21; // [rsp+80h] [rbp-58h]
  __int128 v22; // [rsp+90h] [rbp-48h]
  __int64 v23; // [rsp+A0h] [rbp-38h]
  __int64 v24; // [rsp+E8h] [rbp+10h]
  __int64 v25; // [rsp+F0h] [rbp+18h]

  v18 = 72LL;
  v19 = 1;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlTpETWCallbackDequeue(v8, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( !v14 )
    {
      v14 = TpPoolReferenceExistingGlobalPool();
      v4 = v14;
      v16 = v14;
    }
    *((_QWORD *)Instance + 16) = v14;
    TpCallbackMayRunLong(Instance);
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    RtlpTpImpersonate(v9, v5, v6);
  v25 = *(_QWORD *)(a2 + 56);
  v24 = *(_QWORD *)(a2 + 64);
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
    RtlActivateActivationContextUnsafeFast((__int64)&v18, (__int64)v10);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    RtlpTpETWCallbackStart(0, a2, v25, v24, (__int64)v12);
  TppStartThreadData(&v15, v25, v24, (__int64)NtCurrentTeb()->SubProcessTag);
  RtlpTpWorkCallbackXfgThunk(v24, v25);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v18);
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
    RtlpTpETWCallbackStop(0, a2, v25, v24, (__int64)v12);
  TppCompleteThreadData(v15);
}
