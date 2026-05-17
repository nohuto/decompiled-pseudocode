/*
 * XREFs of TppWorkerFindTask @ 0x1800378B0
 * Callers:
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180031890 (RtlpWakeSRWLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008A7BC (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x1801266E4 (TppETWWorkerNodeSwitch.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, volatile signed __int64 **a3)
{
  __int64 v4; // r14
  unsigned __int64 Number; // rbp
  unsigned int v6; // r8d
  unsigned int v7; // r13d
  int Group; // edi
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rsi
  __int16 v15; // di
  int v16; // ebx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rsi
  _QWORD *v24; // r14
  volatile signed __int64 *v25; // rdi
  signed __int64 v26; // rdx
  volatile signed __int64 *v27; // rbp
  volatile signed __int64 v28; // rax
  signed __int64 v29; // rax
  __int64 v30; // rcx
  signed __int64 v31; // rtt
  _QWORD *v32; // r15
  __int64 v33; // rsi
  _QWORD *v34; // r14
  volatile signed __int64 *v35; // rdi
  volatile signed __int64 v36; // rax
  signed __int64 v37; // rax
  __int64 v38; // rcx
  signed __int64 v39; // rtt
  __int64 v41; // r14
  volatile signed __int64 *v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rdi
  unsigned __int8 v45; // si
  int v46; // ebx
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // r11
  __int64 v50; // r9
  __int64 v51; // rcx
  __int16 v52; // r15
  __int64 v53; // rax
  unsigned int v54; // eax
  unsigned int v55; // [rsp+30h] [rbp-88h]
  _WORD v56[2]; // [rsp+34h] [rbp-84h] BYREF
  _WORD v57[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v58; // [rsp+40h] [rbp-78h]
  volatile signed __int64 **v59; // [rsp+48h] [rbp-70h]
  __int64 v60; // [rsp+50h] [rbp-68h]
  __int128 v61; // [rsp+58h] [rbp-60h] BYREF
  __int128 v62; // [rsp+68h] [rbp-50h] BYREF

  v59 = a3;
  v4 = a1;
  v60 = a2;
  v58 = a1;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  v7 = TppNumberNodes;
  v55 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v9 = *(_DWORD *)(a1 + 440), v6 = TppNumberNodes, !v9) )
    v9 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v9 )
  {
    RtlAcquireSRWLockExclusive(a1 + 72);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v4 + 72));
    v6 = TppNumberNodes;
  }
  v10 = 0;
  v11 = 0LL;
  if ( v6 )
  {
    v12 = *(_QWORD *)(v4 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v12 + 16LL * (unsigned int)(Group + TppMaximumGroups * v11) + 8) == (_WORD)Group )
      {
        v13 = *(_QWORD *)(v12 + 16LL * (unsigned int)(Group + TppMaximumGroups * v11));
        if ( _bittest64(&v13, Number) )
          break;
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= v6 )
        goto LABEL_13;
    }
    v7 = v11;
    v55 = v11;
  }
LABEL_13:
  v14 = *(unsigned int *)(a2 + 352);
  v15 = -1;
  v16 = *(unsigned __int16 *)(a2 + 362);
  v17 = *(_DWORD *)(v4 + 428);
  if ( v7 == (_DWORD)v14 )
  {
    if ( v17 == -1 && !*(_BYTE *)(a2 + 360) )
    {
      *(_BYTE *)(a2 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 40) + 4LL * v7));
    }
  }
  else
  {
    if ( v17 == -1 )
    {
      if ( *(_BYTE *)(a2 + 360) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 40) + 4 * v14));
      else
        *(_BYTE *)(a2 + 360) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 40) + 4LL * v7));
    }
    v18 = (unsigned int)TppMaximumGroups;
    v19 = *(_QWORD *)(v4 + 48);
    v20 = TppMaximumGroups * v7;
    v21 = 2LL * (unsigned int)(v20 + v16);
    if ( ((1LL << Number) & *(_QWORD *)(v19 + 16LL * (unsigned int)(v20 + v16))) != 0 )
    {
      v15 = v16;
    }
    else
    {
      v11 = 0LL;
      if ( TppMaximumGroups )
      {
        while ( 1 )
        {
          if ( (_WORD)v11 != (_WORD)v16 )
          {
            v21 = 2LL * ((unsigned int)v20 + (unsigned __int16)v11);
            if ( ((1LL << Number) & *(_QWORD *)(v19 + 16LL * ((unsigned int)v20 + (unsigned __int16)v11))) != 0 )
              break;
          }
          LOWORD(v11) = v11 + 1;
          if ( (unsigned __int16)v11 >= (unsigned int)TppMaximumGroups )
            goto LABEL_30;
        }
        v15 = v11;
      }
    }
LABEL_30:
    *(_DWORD *)(a2 + 352) = v7;
    *(_WORD *)(a2 + 362) = v15;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v11, v18, v20) )
      v22 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v22 = 2147353478LL;
    if ( *(_BYTE *)v22 )
      TppETWWorkerNodeSwitch(v4, v14, v7, (unsigned __int16)v16, v15);
    v61 = 0LL;
    NtSetInformationThread(-2LL, 30LL, &v61);
    v56[0] = v15;
    v56[1] = (unsigned __int8)Number;
    NtSetInformationThread(-2LL, 33LL, v56);
  }
  if ( *(_DWORD *)(v4 + 428) == -1
    && *(_DWORD *)(a2 + 356) >= 0x10u
    && !(unsigned int)TppAreNodeWorkersSteadyState(v4, v11) )
  {
LABEL_54:
    v32 = (_QWORD *)(v4 + 16);
    if ( !*(_BYTE *)(v4 + 377) )
    {
      do
      {
        v33 = 0LL;
        v34 = v32;
        while ( 1 )
        {
          v35 = (volatile signed __int64 *)(*v34 + 24LL * v7);
          RtlAcquireSRWLockExclusive(v35 + 2);
          v27 = (volatile signed __int64 *)*v35;
          if ( *(volatile signed __int64 **)(*v35 + 8) != v35 )
            goto LABEL_101;
          v36 = *v27;
          if ( *(volatile signed __int64 **)(*v27 + 8) != v27 )
            goto LABEL_101;
          *v35 = v36;
          *(_QWORD *)(v36 + 8) = v35;
          v37 = _InterlockedCompareExchange64(v35 + 2, 0LL, 1LL);
          if ( v37 != 1 )
          {
            do
            {
              if ( (v37 & 4) != 0 || (v38 = 3LL, (v37 & 2) == 0) )
                v38 = -1LL;
              v26 = v38 + v37;
              v39 = v37;
              v37 = _InterlockedCompareExchange64(v35 + 2, v38 + v37, v37);
            }
            while ( v39 != v37 );
            if ( v38 == 3 )
              RtlpWakeSRWLock(v35 + 2, v26, 0);
          }
          if ( v27 == v35 )
            v27 = 0LL;
          if ( v27 )
            goto LABEL_74;
          if ( ++v7 >= TppNumberNodes )
            v7 = 0;
          if ( v7 == v55 )
          {
            ++v33;
            ++v34;
            if ( v33 > 2 )
              break;
          }
        }
      }
      while ( !*(_BYTE *)(v58 + 377) );
    }
    return 0LL;
  }
  else
  {
    v23 = 0LL;
    v24 = (_QWORD *)(v4 + 16);
    while ( 1 )
    {
      v25 = (volatile signed __int64 *)(24LL * v55 + *v24);
      RtlAcquireSRWLockExclusive(v25 + 2);
      v27 = (volatile signed __int64 *)*v25;
      if ( *(volatile signed __int64 **)(*v25 + 8) != v25
        || (v28 = *v27, *(volatile signed __int64 **)(*v27 + 8) != v27) )
      {
LABEL_101:
        __fastfail(3u);
      }
      *v25 = v28;
      *(_QWORD *)(v28 + 8) = v25;
      v29 = _InterlockedCompareExchange64(v25 + 2, 0LL, 1LL);
      if ( v29 != 1 )
      {
        do
        {
          if ( (v29 & 4) != 0 || (v30 = 3LL, (v29 & 2) == 0) )
            v30 = -1LL;
          v26 = v30 + v29;
          v31 = v29;
          v29 = _InterlockedCompareExchange64(v25 + 2, v30 + v29, v29);
        }
        while ( v31 != v29 );
        if ( v30 == 3 )
          RtlpWakeSRWLock(v25 + 2, v26, 0);
      }
      if ( v27 == v25 )
        v27 = 0LL;
      if ( v27 )
        break;
      ++v23;
      ++v24;
      if ( v23 > 2 )
      {
        v4 = v58;
        goto LABEL_54;
      }
    }
LABEL_74:
    v41 = v60;
    v42 = v27 - 2;
    v43 = v58;
    *v59 = v42;
    v44 = *(unsigned int *)(v41 + 352);
    v45 = *((_BYTE *)v42 + 12);
    v46 = *(unsigned __int16 *)(v41 + 362);
    v47 = *(_DWORD *)(v43 + 428);
    if ( v7 == (_DWORD)v44 )
    {
      if ( v47 == -1 && !*(_BYTE *)(v41 + 360) )
      {
        *(_BYTE *)(v41 + 360) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v43 + 40) + 4LL * v7));
      }
    }
    else
    {
      if ( v47 == -1 )
      {
        if ( *(_BYTE *)(v41 + 360) )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v43 + 40) + 4 * v44));
        else
          *(_BYTE *)(v41 + 360) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v43 + 40) + 4LL * v7));
      }
      v48 = (unsigned int)TppMaximumGroups;
      v49 = *(_QWORD *)(v43 + 48);
      v50 = TppMaximumGroups * v7;
      v51 = 2LL * (unsigned int)(v50 + v46);
      if ( ((1LL << v45) & *(_QWORD *)(v49 + 16LL * (unsigned int)(v50 + v46))) != 0 )
      {
        v52 = v46;
      }
      else
      {
        v26 = 0LL;
        if ( TppMaximumGroups )
        {
          while ( 1 )
          {
            if ( (_WORD)v26 != (_WORD)v46 )
            {
              v51 = 2LL * ((unsigned int)v50 + (unsigned __int16)v26);
              if ( ((1LL << v45) & *(_QWORD *)(v49 + 16LL * ((unsigned int)v50 + (unsigned __int16)v26))) != 0 )
                break;
            }
            LOWORD(v26) = v26 + 1;
            if ( (unsigned __int16)v26 >= (unsigned int)TppMaximumGroups )
              goto LABEL_89;
          }
          v52 = v26;
        }
        else
        {
LABEL_89:
          v52 = -1;
        }
      }
      *(_DWORD *)(v41 + 352) = v7;
      *(_WORD *)(v41 + 362) = v52;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v51, v26, v48, v50) )
        v53 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v53 = 2147353478LL;
      if ( *(_BYTE *)v53 )
        TppETWWorkerNodeSwitch(v43, v44, v7, (unsigned __int16)v46, v52);
      v62 = 0LL;
      NtSetInformationThread(-2LL, 30LL, &v62);
      v57[0] = v52;
      v57[1] = v45;
      NtSetInformationThread(-2LL, 33LL, v57);
    }
    if ( v7 == v55 )
    {
      v54 = *(_DWORD *)(v41 + 356);
      v10 = v54 + 1;
      if ( v54 >= 0x10 )
        v10 = 16;
    }
    *(_DWORD *)(v41 + 356) = v10;
    return 1LL;
  }
}
