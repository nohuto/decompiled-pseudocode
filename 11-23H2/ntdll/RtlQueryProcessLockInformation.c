/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800E3C30
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180001934 (RtlpCommitQueryDebugInfo.c)
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800E4280 (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x18010D5B0 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  char *DebugInfo; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  char *v6; // r14
  _QWORD *v8; // rsi
  _UNKNOWN **v9; // rdi
  _UNKNOWN **v10; // r15
  char *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  _UNKNOWN **v14; // [rsp+20h] [rbp-78h]
  _QWORD *v15; // [rsp+28h] [rbp-70h]
  bool v16; // [rsp+A8h] [rbp+10h]
  int v17; // [rsp+B0h] [rbp+18h]

  v17 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v6 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v16 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock, v3, v4, v5);
  v8 = RtlCriticalSectionList;
  v15 = RtlCriticalSectionList;
  v9 = (_UNKNOWN **)RtlCriticalSectionList;
  v14 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v9 != &RtlCriticalSectionList )
  {
    v10 = v9 - 2;
    v11 = RtlpCommitQueryDebugInfo(a1, 0x30u);
    if ( !v11 )
    {
      v17 = -1073741801;
      break;
    }
    *(_OWORD *)v11 = 0LL;
    *((_OWORD *)v11 + 1) = 0LL;
    *((_OWORD *)v11 + 2) = 0LL;
    *(_QWORD *)v11 = v10[1];
    *((_WORD *)v11 + 4) = *(_WORD *)v10;
    *((_WORD *)v11 + 5) = *((_WORD *)v10 + 1);
    if ( *((_WORD *)v11 + 4) )
    {
      if ( *((_WORD *)v11 + 4) == 1 )
      {
        v13 = v10[1];
        *((_DWORD *)v11 + 7) = *(_DWORD *)(v13[11] + 36LL);
        *((_QWORD *)v11 + 2) = v13[9];
        *((_DWORD *)v11 + 6) = *((_DWORD *)v13 + 17);
        *((_DWORD *)v11 + 10) = *((_DWORD *)v13 + 12);
        *((_DWORD *)v11 + 11) = *((_DWORD *)v13 + 16);
        v9 = v14;
        v8 = v15;
      }
      else if ( (unsigned __int8)RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v12 = v10[1];
      *((_QWORD *)v11 + 2) = v12[2];
      *((_DWORD *)v11 + 6) = *((_DWORD *)v12 + 2);
      *((_DWORD *)v11 + 9) = *((_DWORD *)v12 + 3);
      *((_DWORD *)v11 + 7) = *((_DWORD *)v10 + 9);
      *((_DWORD *)v11 + 8) = *((_DWORD *)v10 + 8);
    }
    ++*(_DWORD *)v6;
    v9 = (_UNKNOWN **)*v9;
    v14 = v9;
    if ( v9 == v8 )
    {
      v17 = -1073741595;
      break;
    }
    if ( v16 )
    {
      v8 = (_QWORD *)*v8;
      v15 = v8;
    }
    v16 = !v16;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v17 < 0 )
    RtlpDeCommitQueryDebugInfo(a1, v6, 8LL);
  else
    a1[15] = v6;
  return (unsigned int)v17;
}
