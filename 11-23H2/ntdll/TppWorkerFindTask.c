/*
 * XREFs of TppWorkerFindTask @ 0x180037750
 * Callers:
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180031730 (RtlpWakeSRWLock.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     TppAreNodeWorkersSteadyState @ 0x18008AFBC (TppAreNodeWorkersSteadyState.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A1050 (NtSetInformationThread.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180126D40 (TppAdjustRunningThreadGoalWithLock.c)
 *     TppETWWorkerNodeSwitch @ 0x180127B64 (TppETWWorkerNodeSwitch.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, _RTL_SRWLOCK **a3)
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
  __int64 v18; // r11
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // r14
  _RTL_SRWLOCK *v23; // rdi
  _RTL_SRWLOCK *Value; // rbp
  unsigned __int64 v25; // rax
  signed __int64 v26; // rax
  __int64 v27; // rcx
  signed __int64 v28; // rdx
  signed __int64 v29; // rtt
  _QWORD *v30; // r15
  __int64 v31; // rsi
  _QWORD *v32; // r14
  _RTL_SRWLOCK *v33; // rdi
  unsigned __int64 v34; // rax
  signed __int64 v35; // rax
  __int64 v36; // rcx
  signed __int64 v37; // rdx
  signed __int64 v38; // rtt
  __int64 v40; // r14
  _RTL_SRWLOCK *v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdi
  unsigned __int8 v44; // si
  int v45; // ebx
  int v46; // eax
  __int64 v47; // r11
  __int16 v48; // r15
  unsigned __int16 v49; // dx
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // [rsp+30h] [rbp-88h]
  _WORD v53[2]; // [rsp+34h] [rbp-84h] BYREF
  _WORD v54[4]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v55; // [rsp+40h] [rbp-78h]
  _RTL_SRWLOCK **v56; // [rsp+48h] [rbp-70h]
  __int64 v57; // [rsp+50h] [rbp-68h]
  __int128 ThreadInformation; // [rsp+58h] [rbp-60h] BYREF
  __int128 v59; // [rsp+68h] [rbp-50h] BYREF

  v56 = a3;
  v4 = a1;
  v57 = a2;
  v55 = a1;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = TppNumberNodes;
  v7 = TppNumberNodes;
  v52 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v9 = *(_DWORD *)(a1 + 440), v6 = TppNumberNodes, !v9) )
    v9 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v9 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 72));
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
    v52 = v11;
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
    v18 = *(_QWORD *)(v4 + 48);
    if ( ((1LL << Number) & *(_QWORD *)(v18 + 16LL * (TppMaximumGroups * v7 + v16))) != 0 )
    {
      v15 = v16;
    }
    else
    {
      v19 = 0;
      if ( TppMaximumGroups )
      {
        while ( v19 == (_WORD)v16 || ((1LL << Number) & *(_QWORD *)(v18 + 16LL * (TppMaximumGroups * v7 + v19))) == 0 )
        {
          if ( ++v19 >= (unsigned int)TppMaximumGroups )
            goto LABEL_30;
        }
        v15 = v19;
      }
    }
LABEL_30:
    *(_DWORD *)(a2 + 352) = v7;
    *(_WORD *)(a2 + 362) = v15;
    if ( RtlGetCurrentServiceSessionId() )
      v20 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v20 = 2147353478LL;
    if ( *(_BYTE *)v20 )
      TppETWWorkerNodeSwitch(v4, v14, v7, (unsigned __int16)v16, v15);
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
    v53[0] = v15;
    v53[1] = (unsigned __int8)Number;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, v53, 4u);
  }
  if ( *(_DWORD *)(v4 + 428) == -1
    && *(_DWORD *)(a2 + 356) >= 0x10u
    && !(unsigned int)TppAreNodeWorkersSteadyState(v4, v11) )
  {
LABEL_54:
    v30 = (_QWORD *)(v4 + 16);
    if ( !*(_BYTE *)(v4 + 377) )
    {
      do
      {
        v31 = 0LL;
        v32 = v30;
        while ( 1 )
        {
          v33 = (_RTL_SRWLOCK *)(*v32 + 24LL * v7);
          RtlAcquireSRWLockExclusive(v33 + 2);
          Value = (_RTL_SRWLOCK *)v33->Value;
          if ( *(_RTL_SRWLOCK **)(v33->Value + 8) != v33 )
            goto LABEL_101;
          v34 = Value->Value;
          if ( *(_RTL_SRWLOCK **)(Value->Value + 8) != Value )
            goto LABEL_101;
          v33->Value = v34;
          *(_QWORD *)(v34 + 8) = v33;
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)&v33[2], 0LL, 1LL);
          if ( v35 != 1 )
          {
            do
            {
              if ( (v35 & 4) != 0 || (v36 = 3LL, (v35 & 2) == 0) )
                v36 = -1LL;
              v37 = v36 + v35;
              v38 = v35;
              v35 = _InterlockedCompareExchange64((volatile signed __int64 *)&v33[2], v36 + v35, v35);
            }
            while ( v38 != v35 );
            if ( v36 == 3 )
              RtlpWakeSRWLock((volatile signed __int64 *)&v33[2], v37, 0);
          }
          if ( Value == v33 )
            Value = 0LL;
          if ( Value )
            goto LABEL_74;
          if ( ++v7 >= TppNumberNodes )
            v7 = 0;
          if ( v7 == v52 )
          {
            ++v31;
            ++v32;
            if ( v31 > 2 )
              break;
          }
        }
      }
      while ( !*(_BYTE *)(v55 + 377) );
    }
    return 0LL;
  }
  else
  {
    v21 = 0LL;
    v22 = (_QWORD *)(v4 + 16);
    while ( 1 )
    {
      v23 = (_RTL_SRWLOCK *)(24LL * v52 + *v22);
      RtlAcquireSRWLockExclusive(v23 + 2);
      Value = (_RTL_SRWLOCK *)v23->Value;
      if ( *(_RTL_SRWLOCK **)(v23->Value + 8) != v23
        || (v25 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
      {
LABEL_101:
        __fastfail(3u);
      }
      v23->Value = v25;
      *(_QWORD *)(v25 + 8) = v23;
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[2], 0LL, 1LL);
      if ( v26 != 1 )
      {
        do
        {
          if ( (v26 & 4) != 0 || (v27 = 3LL, (v26 & 2) == 0) )
            v27 = -1LL;
          v28 = v27 + v26;
          v29 = v26;
          v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&v23[2], v27 + v26, v26);
        }
        while ( v29 != v26 );
        if ( v27 == 3 )
          RtlpWakeSRWLock((volatile signed __int64 *)&v23[2], v28, 0);
      }
      if ( Value == v23 )
        Value = 0LL;
      if ( Value )
        break;
      ++v21;
      ++v22;
      if ( v21 > 2 )
      {
        v4 = v55;
        goto LABEL_54;
      }
    }
LABEL_74:
    v40 = v57;
    v41 = Value - 2;
    v42 = v55;
    *v56 = v41;
    v43 = *(unsigned int *)(v40 + 352);
    v44 = BYTE4(v41[1].Ptr);
    v45 = *(unsigned __int16 *)(v40 + 362);
    v46 = *(_DWORD *)(v42 + 428);
    if ( v7 == (_DWORD)v43 )
    {
      if ( v46 == -1 && !*(_BYTE *)(v40 + 360) )
      {
        *(_BYTE *)(v40 + 360) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v42 + 40) + 4LL * v7));
      }
    }
    else
    {
      if ( v46 == -1 )
      {
        if ( *(_BYTE *)(v40 + 360) )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v42 + 40) + 4 * v43));
        else
          *(_BYTE *)(v40 + 360) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v42 + 40) + 4LL * v7));
      }
      v47 = *(_QWORD *)(v42 + 48);
      if ( ((1LL << v44) & *(_QWORD *)(v47 + 16LL * (TppMaximumGroups * v7 + v45))) != 0 )
      {
        v48 = v45;
      }
      else
      {
        v49 = 0;
        if ( TppMaximumGroups )
        {
          while ( v49 == (_WORD)v45 || ((1LL << v44) & *(_QWORD *)(v47 + 16LL * (TppMaximumGroups * v7 + v49))) == 0 )
          {
            if ( ++v49 >= (unsigned int)TppMaximumGroups )
              goto LABEL_89;
          }
          v48 = v49;
        }
        else
        {
LABEL_89:
          v48 = -1;
        }
      }
      *(_DWORD *)(v40 + 352) = v7;
      *(_WORD *)(v40 + 362) = v48;
      if ( RtlGetCurrentServiceSessionId() )
        v50 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v50 = 2147353478LL;
      if ( *(_BYTE *)v50 )
        TppETWWorkerNodeSwitch(v42, v43, v7, (unsigned __int16)v45, v48);
      v59 = 0LL;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &v59, 0x10u);
      v54[0] = v48;
      v54[1] = v44;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, v54, 4u);
    }
    if ( v7 == v52 )
    {
      v51 = *(_DWORD *)(v40 + 356);
      v10 = v51 + 1;
      if ( v51 >= 0x10 )
        v10 = 16;
    }
    *(_DWORD *)(v40 + 356) = v10;
    return 1LL;
  }
}
