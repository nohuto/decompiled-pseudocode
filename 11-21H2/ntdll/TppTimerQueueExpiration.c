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

__int64 __fastcall TppTimerQueueExpiration(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // r14
  unsigned __int8 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  volatile signed __int64 *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // r12
  __int64 v17; // r11
  _QWORD *v18; // r15
  __int64 v19; // r11
  _QWORD *v20; // rax
  __int64 v21; // rcx
  volatile signed __int64 v22; // r12
  volatile signed __int64 v23; // rsi
  signed __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rsi
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  _QWORD *v40; // [rsp+40h] [rbp-39h] BYREF
  _QWORD **v41; // [rsp+48h] [rbp-31h]
  volatile signed __int64 v42; // [rsp+50h] [rbp-29h] BYREF
  char v43[6]; // [rsp+58h] [rbp-21h] BYREF
  __int16 v44; // [rsp+5Eh] [rbp-1Bh]
  volatile signed __int64 *v45; // [rsp+78h] [rbp-1h]
  int v46; // [rsp+80h] [rbp+7h] BYREF
  __int64 v47; // [rsp+88h] [rbp+Fh]

  v4 = a3;
  v46 = 0;
  v47 = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
  {
    v5 = 1;
    v6 = 1LL;
    v7 = MEMORY[0x7FFE0014];
  }
  else
  {
    v5 = 0;
    a4 = 2147353520LL;
    a2 = RtlpFreezeTimeBias;
    a3 = (volatile signed __int64 *)MEMORY[0x7FFE03B0];
    v6 = 16LL;
    v7 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
  }
  v8 = &v4[v6];
  if ( !a1 || *(_DWORD *)(a1 + 72) )
    TppRaiseInvalidParameter(a1, a2, a3, a4);
  else
    *(_DWORD *)(a1 + 72) = 3;
  v41 = &v40;
  v40 = &v40;
  v12 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    TppETWTimerExpirationBegin(v8);
  RtlAcquireSRWLockExclusive((unsigned __int64)v4, v9, v10, v11);
  v16 = v8 + 1;
  while ( *v16 && *(_QWORD *)(*v16 + 40LL) <= v7 )
  {
    TppPHDelete(v8 + 1, *v16);
    v18 = (_QWORD *)(v17 - 40);
    TppPHDelete(v8 + 2, v17 - 40);
    *(_BYTE *)(v19 + 64) = 0;
    v20 = v41;
    if ( *v41 != &v40 )
      __fastfail(3u);
    v18[1] = v41;
    *v18 = &v40;
    *v20 = v18;
    v41 = (_QWORD **)v18;
  }
  v21 = *((_QWORD *)v8 + 2);
  if ( v21 )
  {
    v22 = *(_QWORD *)(*v16 + 32LL);
    v23 = v7 - v22;
    v24 = *(_QWORD *)(v21 + 32) - v22;
    *v8 = v22;
    v25 = (unsigned __int128)(v24 * (__int128)0x346DC5D63886594BLL) >> 64;
    v26 = v24 / 10000;
    v27 = 10000LL * (unsigned int)(v24 / 10000);
    *((_DWORD *)v8 + 28) = v26;
    v47 = v27;
    if ( !v5 )
      v22 = v23;
    v42 = v22;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v25, v14, v15) )
      v28 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v28 = 2147353478LL;
    if ( *(_BYTE *)v28 )
      TppETWTimerSetNtTimer(v8, v22, (unsigned int)v26);
    ZwSetTimer2(*((_QWORD *)v8 + 3), &v42, 0LL, &v46);
  }
  else
  {
    *v8 = 0LL;
  }
  RtlReleaseSRWLockExclusive(v4);
  v33 = v40;
  while ( v33 != &v40 )
  {
    v34 = v33 - 31;
    LOBYTE(v31) = v5;
    v33 = (_QWORD *)*v33;
    TppSingleTimerExpiration(v34, v4, v31);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v30, v29, v31, v32) )
    v38 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v38 = 2147353478LL;
  if ( *(_BYTE *)v38 )
  {
    v45 = v8;
    v44 = 7215;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v38, v35, v36, v37) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    NtTraceEvent(*(unsigned __int8 *)v12, 1026LL, 8LL, v43);
  }
  return ZwAssociateWaitCompletionPacket(
           *((_QWORD *)v8 + 4),
           *((_QWORD *)v4 - 6),
           *((_QWORD *)v8 + 3),
           v8 + 5,
           v4,
           0,
           v5,
           0LL);
}
