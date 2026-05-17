/*
 * XREFs of TppTimerQueueExpiration @ 0x180031510
 * Callers:
 *     <none>
 * Callees:
 *     TppSingleTimerExpiration @ 0x180030F5C (TppSingleTimerExpiration.c)
 *     TppPHDelete @ 0x180031784 (TppPHDelete.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 *     ZwAssociateWaitCompletionPacket @ 0x18009FFE0 (ZwAssociateWaitCompletionPacket.c)
 *     ZwSetTimer2 @ 0x1800A2580 (ZwSetTimer2.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 *     TppETWTimerExpirationBegin @ 0x18012652C (TppETWTimerExpirationBegin.c)
 *     TppETWTimerSetNtTimer @ 0x180126660 (TppETWTimerSetNtTimer.c)
 */

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r12
  __int64 v14; // r11
  _QWORD *v15; // r15
  __int64 v16; // r11
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v37; // [rsp+20h] [rbp-59h]
  int v38; // [rsp+28h] [rbp-51h]
  __int64 v39; // [rsp+30h] [rbp-49h]
  _QWORD *v40; // [rsp+40h] [rbp-39h] BYREF
  _QWORD **v41; // [rsp+48h] [rbp-31h]
  __int64 v42; // [rsp+50h] [rbp-29h] BYREF
  char v43[6]; // [rsp+58h] [rbp-21h] BYREF
  __int16 v44; // [rsp+5Eh] [rbp-1Bh]
  __int64 v45; // [rsp+78h] [rbp-1h]
  int v46; // [rsp+80h] [rbp+7h] BYREF
  __int64 v47; // [rsp+88h] [rbp+Fh]

  v4 = a3;
  v46 = 0;
  v47 = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 8LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = MEMORY[0x7FFE03B0];
    v6 = 128LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v8 = v6 + v4;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v41 = &v40;
  v40 = &v40;
  v9 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  if ( *(_BYTE *)v10 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive(v4);
  v13 = (_QWORD *)(v8 + 8);
  while ( *v13 && *(_QWORD *)(*v13 + 40LL) <= v7 )
  {
    TppPHDelete(v8 + 8, *v13);
    v15 = (_QWORD *)(v14 - 40);
    TppPHDelete(v8 + 16, v14 - 40);
    *(_BYTE *)(v16 + 64) = 0;
    v17 = v41;
    if ( *v41 != &v40 )
      __fastfail(3u);
    v15[1] = v41;
    *v15 = &v40;
    *v17 = v15;
    v41 = (_QWORD **)v15;
  }
  v18 = *(_QWORD *)(v8 + 16);
  if ( v18 )
  {
    v19 = *(_QWORD *)(*v13 + 32LL);
    v20 = v7 - v19;
    v21 = *(_QWORD *)(v18 + 32) - v19;
    *(_QWORD *)v8 = v19;
    v22 = (unsigned __int128)(v21 * (__int128)0x346DC5D63886594BLL) >> 64;
    v23 = v21 / 10000;
    v24 = 10000LL * (unsigned int)(v21 / 10000);
    *(_DWORD *)(v8 + 112) = v23;
    v47 = v24;
    if ( !v5 )
      v19 = v20;
    v42 = v19;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v24, v22, v11, v12) )
      v25 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v25 = 2147353478LL;
    if ( *(_BYTE *)v25 )
      TppETWTimerSetNtTimer(v8, v19, (unsigned int)v23);
    ZwSetTimer2(*(_QWORD *)(v8 + 24), &v42, 0LL, &v46, v37, v38, v39);
  }
  else
  {
    *(_QWORD *)v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v30 = v40;
  while ( v30 != &v40 )
  {
    v31 = (__int64)(v30 - 31);
    LOBYTE(v28) = v5;
    v30 = (_QWORD *)*v30;
    TppSingleTimerExpiration(v31, v4, v28, v29);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v26, v28, v29) )
    v35 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v35 = 2147353478LL;
  if ( *(_BYTE *)v35 )
  {
    v45 = v8;
    v44 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v35, v32, v33, v34) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v9, 1026LL, 8LL, v43);
  }
  return ZwAssociateWaitCompletionPacket(
           *(_QWORD *)(v8 + 32),
           *(_QWORD *)(v4 - 48),
           *(_QWORD *)(v8 + 24),
           v8 + 40,
           v4,
           0,
           v5,
           0LL);
}
