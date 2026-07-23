/*
 * XREFs of TppTimerQueueExpiration @ 0x18001CE00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x18001D074 (TppPHDelete.c)
 *     TppSingleTimerExpiration @ 0x18001EEBC (TppSingleTimerExpiration.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x1800A5260 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A7780 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x180124AEC (TppETWTimerExpirationBegin.c)
 *     TppETWTimerSetNtTimer @ 0x180124C20 (TppETWTimerSetNtTimer.c)
 */

NTSTATUS __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, _RTL_SRWLOCK *a3, __int64 a4)
{
  _RTL_SRWLOCK *ApcContext; // r14
  unsigned __int8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  _RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  LARGE_INTEGER **v11; // r12
  __int64 v12; // r11
  _QWORD *v13; // r15
  __int64 v14; // r11
  _QWORD *v15; // rax
  unsigned __int64 Value; // rcx
  LARGE_INTEGER v17; // r12
  LARGE_INTEGER v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rsi
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  _QWORD *v27; // [rsp+40h] [rbp-39h] BYREF
  _QWORD **v28; // [rsp+48h] [rbp-31h]
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp-29h] BYREF
  char Fields[6]; // [rsp+58h] [rbp-21h] BYREF
  __int16 v31; // [rsp+5Eh] [rbp-1Bh]
  _RTL_SRWLOCK *v32; // [rsp+78h] [rbp-1h]
  _T2_SET_PARAMETERS_V0 Parameters; // [rsp+80h] [rbp+7h] BYREF

  ApcContext = a3;
  Parameters.Version = 0;
  Parameters.NoWakeTolerance = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a2 = RtlpFreezeTimeBias;
    a3 = (_RTL_SRWLOCK *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v8 = &ApcContext[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v28 = &v27;
  v27 = &v27;
  v9 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(ApcContext);
  v11 = (LARGE_INTEGER **)&v8[1];
  while ( *v11 && (*v11)[5].QuadPart <= v7 )
  {
    TppPHDelete(&v8[1], *v11);
    v13 = (_QWORD *)(v12 - 40);
    TppPHDelete(&v8[2], v12 - 40);
    *(_BYTE *)(v14 + 64) = 0;
    v15 = v28;
    if ( *v28 != &v27 )
      __fastfail(3u);
    v13[1] = v28;
    *v13 = &v27;
    *v15 = v13;
    v28 = (_QWORD **)v13;
  }
  Value = v8[2].Value;
  if ( Value )
  {
    v17 = (*v11)[4];
    v18.QuadPart = v7 - v17.QuadPart;
    v19 = *(_QWORD *)(Value + 32) - v17.QuadPart;
    v8->0 = ($2F38BEDF952D5DA5F266621B11247D04)v17;
    v20 = v19 / 10000;
    *(_DWORD *)&v8[14].0 = v19 / 10000;
    Parameters.NoWakeTolerance = 10000LL * (unsigned int)(v19 / 10000);
    if ( !v5 )
      v17 = v18;
    DueTime = v17;
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v21 = 2147353478LL;
    if ( *(_BYTE *)v21 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))TppETWTimerSetNtTimer)(
        v8,
        (LARGE_INTEGER)v17.QuadPart,
        (unsigned int)v20);
    ZwSetTimer2(v8[3].Ptr, &DueTime, 0LL, &Parameters);
  }
  else
  {
    v8->Value = 0LL;
  }
  RtlReleaseSRWLockExclusive(ApcContext);
  v23 = v27;
  while ( v23 != &v27 )
  {
    v24 = v23 - 31;
    LOBYTE(v22) = v5;
    v23 = (_QWORD *)*v23;
    TppSingleTimerExpiration(v24, ApcContext, v22);
  }
  if ( RtlGetCurrentServiceSessionId() )
    v25 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v25 = 2147353478LL;
  if ( *(_BYTE *)v25 )
  {
    v32 = v8;
    v31 = 7215;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x402u, 8u, Fields);
  }
  return ZwAssociateWaitCompletionPacket(v8[4].Ptr, ApcContext[-6].Ptr, v8[3].Ptr, &v8[5], ApcContext, 0, v5, 0LL);
}
