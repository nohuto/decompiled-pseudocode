/*
 * XREFs of TppWorkerFindTask @ 0x180018A28
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkerSwitchNode @ 0x18001B15C (TppWorkerSwitchNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x18001E4A4 (RtlpWakeSRWLock.c)
 *     TppAreNodeWorkersSteadyState @ 0x1800914F4 (TppAreNodeWorkersSteadyState.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180123E80 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TppWorkerFindTask(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // edi
  __int64 v4; // rbx
  unsigned __int64 Number; // r14
  unsigned int v7; // r9d
  unsigned int v8; // ebp
  unsigned __int16 Group; // r15
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // r13
  _RTL_SRWLOCK *v19; // r14
  _RTL_SRWLOCK *Value; // rbx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v24; // r15
  _QWORD *v25; // rdx
  _RTL_SRWLOCK *v26; // r14
  volatile signed __int64 *v27; // r13
  unsigned __int64 v28; // rax
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  __int64 v31; // rdx
  signed __int64 v32; // rdx
  signed __int64 v33; // rtt
  _QWORD *v34; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = a2;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v10 = *(_DWORD *)(a1 + 440), v7 = TppNumberNodes, !v10) )
    v10 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v10 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    v7 = TppNumberNodes;
    v4 = a2;
  }
  v11 = 0;
  if ( v7 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v12 + 16LL * v11 + 8) == Group )
      {
        v13 = *(_QWORD *)(v12 + 16LL * v11);
        if ( _bittest64(&v13, Number) )
          break;
      }
      if ( ++v11 >= v7 )
        goto LABEL_10;
    }
    v8 = v11;
  }
LABEL_10:
  v14 = v8 < v7 ? v8 : 0;
  TppWorkerSwitchNode(a1, v4, v14, (unsigned int)Number);
  v15 = v14;
  if ( *(_DWORD *)(a1 + 428) != -1 || *(_DWORD *)(v4 + 348) < 0x10u || (unsigned int)TppAreNodeWorkersSteadyState(a1) )
  {
    v16 = 3LL * v14;
    v17 = 0LL;
    v18 = (_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v19 = (_RTL_SRWLOCK *)(*v18 + 8 * v16);
      RtlAcquireSRWLockExclusive(v19 + 2);
      Value = (_RTL_SRWLOCK *)v19->Value;
      if ( *(_RTL_SRWLOCK **)(v19->Value + 8) != v19 )
        goto LABEL_46;
      v21 = Value->Value;
      if ( *(_RTL_SRWLOCK **)(Value->Value + 8) != Value )
        goto LABEL_46;
      v19->Value = v21;
      *(_QWORD *)(v21 + 8) = v19;
      RtlReleaseSRWLockExclusive(v19 + 2);
      if ( Value == v19 )
        Value = 0LL;
      if ( Value )
        break;
      v16 = 3LL * v14;
      ++v17;
      ++v18;
      if ( v17 > 2 )
        goto LABEL_27;
    }
LABEL_19:
    *a3 = Value - 2;
    TppWorkerSwitchNode(a1, a2, v15, BYTE4(Value[-1].Ptr));
    if ( v15 == v14 )
    {
      v22 = *(_DWORD *)(a2 + 348);
      v3 = v22 + 1;
      if ( v22 >= 0x10 )
        v3 = 16;
    }
    *(_DWORD *)(a2 + 348) = v3;
    return 1LL;
  }
  else
  {
LABEL_27:
    if ( !*(_BYTE *)(a1 + 377) )
    {
      v24 = 0LL;
      v25 = (_QWORD *)(a1 + 16);
      v34 = (_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v26 = (_RTL_SRWLOCK *)(*v25 + 24LL * v15);
        v27 = (volatile signed __int64 *)&v26[2];
        RtlAcquireSRWLockExclusive(v26 + 2);
        Value = (_RTL_SRWLOCK *)v26->Value;
        if ( *(_RTL_SRWLOCK **)(v26->Value + 8) != v26 )
          break;
        v28 = Value->Value;
        if ( *(_RTL_SRWLOCK **)(Value->Value + 8) != Value )
          break;
        v26->Value = v28;
        *(_QWORD *)(v28 + 8) = v26;
        v29 = _InterlockedCompareExchange64(v27, 0LL, 1LL);
        if ( v29 != 1 )
        {
          do
          {
            v30 = v29 & 6;
            v31 = 3LL;
            if ( v30 != 2 )
              v31 = -1LL;
            v32 = v29 + v31;
            v33 = v29;
            v29 = _InterlockedCompareExchange64(v27, v32, v29);
          }
          while ( v33 != v29 );
          if ( v30 == 2 )
            RtlpWakeSRWLock(&v26[2], v32, 0LL);
        }
        if ( Value == v26 )
          Value = 0LL;
        if ( Value )
          goto LABEL_19;
        v25 = v34;
        v15 = v15 + 1 < TppNumberNodes ? v15 + 1 : 0;
        if ( v15 == v14 )
        {
          v25 = v34 + 1;
          ++v24;
          ++v34;
          if ( v24 > 2 )
            goto LABEL_27;
        }
      }
LABEL_46:
      __fastfail(3u);
    }
    return 0LL;
  }
}
