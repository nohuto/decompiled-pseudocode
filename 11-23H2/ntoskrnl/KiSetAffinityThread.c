/*
 * XREFs of KiSetAffinityThread @ 0x14020327C
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403AEC48 (KeSetAffinityProcess.c)
 * Callees:
 *     KiRescheduleThreadAfterAffinityChange @ 0x140203570 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14020377C (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiCopyAffinityEx @ 0x140254680 (KiCopyAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE2FC (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1402BFAC4 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1402C0050 (KiUpdateNodeAffinitizedFlag.c)
 *     KiCheckPrcbAffinityEx @ 0x140307B20 (KiCheckPrcbAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeFirstGroupAffinityEx @ 0x140309370 (KeFirstGroupAffinityEx.c)
 *     EtwTraceThreadAffinity @ 0x140467B10 (EtwTraceThreadAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405FD300 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 *v10; // r9
  __int64 result; // rax
  char v12; // r13
  __int64 v13; // rsi
  volatile signed __int32 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  bool v17; // zf
  int v18; // r9d
  __int64 v19; // r15
  unsigned __int16 v20; // ax
  char v21; // al
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+40h] [rbp-40h]
  int v26; // [rsp+44h] [rbp-3Ch] BYREF
  int v27; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-34h]
  unsigned int v29; // [rsp+50h] [rbp-30h]
  __int64 v30; // [rsp+58h] [rbp-28h] BYREF
  __int64 v31; // [rsp+60h] [rbp-20h]
  __int128 v32; // [rsp+68h] [rbp-18h] BYREF
  __int16 v33; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+48h]
  int v35; // [rsp+D8h] [rbp+58h]

  v34 = a2;
  v3 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v30 = 0LL;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_DWORD *)(a1 + 196);
  v7 = *(_DWORD *)(a1 + 588);
  v8 = *(_QWORD *)(a1 + 552);
  v29 = v7;
  v28 = v6;
  v25 = v6;
  KiCopyAffinityEx(v8, *(unsigned __int16 *)(v8 + 2), a3);
  v35 = *(_DWORD *)(a1 + 196);
  v9 = KiProcessorBlock[v35];
  v31 = v9;
  if ( !(unsigned __int8)KiCheckPrcbAffinityEx(a3, v9) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    KeFirstGroupAffinityEx(&v32, a3);
    v33 = *(unsigned __int8 *)(v9 + 209);
    v20 = KiReselectIdealProcessorAfterAffinityChange(a1, &v32, v9, &v33);
    v10 = KiProcessorBlock;
    *(_DWORD *)(a1 + 196) = v20;
    v25 = v20;
    v35 = v20;
    v31 = KiProcessorBlock[v20];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v31 + 208);
  }
  result = *(unsigned int *)(a1 + 116);
  if ( (result & 8) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    goto LABEL_22;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_BYTE *)(a1 + 388);
      v13 = 0LL;
      v14 = 0LL;
      if ( v12 == 1 )
        break;
      switch ( *(_BYTE *)(a1 + 388) )
      {
        case 2:
LABEL_16:
          v16 = *(unsigned int *)(a1 + 536);
          if ( (int)v16 >= 0 )
          {
            v13 = v10[v16];
            KiAcquirePrcbLocksForIsolationUnit(v13, 0LL, &v30);
            v17 = a1 == *(_QWORD *)(v13 + 8);
            goto LABEL_18;
          }
          break;
        case 3:
          v15 = *(unsigned int *)(a1 + 536);
          if ( (int)v15 >= 0 )
          {
            v13 = v10[v15];
            KiAcquirePrcbLocksForIsolationUnit(v13, 0LL, &v30);
            if ( a1 == *(_QWORD *)(v13 + 16) )
              goto LABEL_19;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v15 )
              __fastfail(0x1Eu);
            goto LABEL_12;
          }
          break;
        case 5:
          v21 = *(_BYTE *)(a1 + 112) & 7;
          if ( v21 == 1 || (unsigned __int8)(v21 - 3) <= 3u )
            goto LABEL_19;
          v12 = 2;
          goto LABEL_16;
        default:
          goto LABEL_19;
      }
    }
    v22 = *(unsigned int *)(a1 + 536);
    if ( (int)v22 >= 0 )
    {
      v13 = v10[v22];
      KiAcquirePrcbLocksForIsolationUnit(v13, 0LL, &v30);
      if ( *(_BYTE *)(a1 + 388) != 1 )
      {
LABEL_12:
        KiReleasePrcbLocksForIsolationUnit(&v30);
        goto LABEL_13;
      }
      v17 = *(_DWORD *)(a1 + 536) == (_DWORD)v22;
LABEL_18:
      if ( v17 )
        break;
      goto LABEL_12;
    }
    v23 = (unsigned int)v22;
    v27 = 0;
    LODWORD(v23) = v22 & 0x7FFFFFFF;
    v14 = *(volatile signed __int32 **)(v10[v23] + 34888);
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(_QWORD *)v14 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v22 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
LABEL_13:
    v10 = KiProcessorBlock;
  }
LABEL_19:
  KiCopyAffinityEx(*(_QWORD *)(a1 + 576), *(unsigned __int16 *)(*(_QWORD *)(a1 + 576) + 2LL), a3);
  if ( !(unsigned int)KiComputeThreadAffinity(a1) )
  {
    v19 = v31;
    *(_DWORD *)(a1 + 588) = v35;
    *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v19 + 208);
    KiUpdateNodeAffinitizedFlag(a1);
    KiUpdateSharedReadyQueueAffinityThread(v19, a1);
  }
  LOBYTE(v18) = v12;
  v7 = *(_DWORD *)(a1 + 588);
  result = KiRescheduleThreadAfterAffinityChange(
             a1,
             *(_QWORD *)(a1 + 576),
             0,
             v18,
             v13,
             (__int64)&v30,
             (__int64)v14,
             v34);
  v6 = v28;
LABEL_22:
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, v29, v7);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL, v6, v25);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    v24 = *(unsigned __int16 *)(a1 + 560);
    WORD4(v32) = v24;
    if ( (unsigned __int16)v24 < *a3 )
      v3 = *(_QWORD *)&a3[4 * v24 + 4];
    *(_QWORD *)&v32 = v3;
    return EtwTraceThreadAffinity(a1, &v32);
  }
  return result;
}
