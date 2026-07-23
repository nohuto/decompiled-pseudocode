/*
 * XREFs of RtlQueryProcessLockInformation @ 0x1800E3C20
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180001970 (RtlpCommitQueryDebugInfo.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800E42B4 (RtlpDeCommitQueryDebugInfo.c)
 *     RtlIsAnyDebuggerPresent @ 0x18010BF70 (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryProcessLockInformation(_QWORD *a1)
{
  char *DebugInfo; // rax
  char *v3; // r14
  _QWORD *v5; // rdi
  _UNKNOWN **v6; // rsi
  _UNKNOWN **v7; // r15
  char *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  _UNKNOWN **v11; // [rsp+20h] [rbp-78h]
  _QWORD *v12; // [rsp+28h] [rbp-70h]
  bool v13; // [rsp+A8h] [rbp+10h]
  int v14; // [rsp+B0h] [rbp+18h]

  v14 = 0;
  DebugInfo = RtlpCommitQueryDebugInfo(a1, 8u);
  v3 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  v13 = 0;
  RtlAcquireSRWLockShared(&RtlCriticalSectionLock);
  v5 = RtlCriticalSectionList;
  v12 = RtlCriticalSectionList;
  v6 = (_UNKNOWN **)RtlCriticalSectionList;
  v11 = (_UNKNOWN **)RtlCriticalSectionList;
  while ( v6 != &RtlCriticalSectionList )
  {
    v7 = v6 - 2;
    v8 = RtlpCommitQueryDebugInfo(a1, 0x30u);
    if ( !v8 )
    {
      v14 = -1073741801;
      break;
    }
    *(_OWORD *)v8 = 0LL;
    *((_OWORD *)v8 + 1) = 0LL;
    *((_OWORD *)v8 + 2) = 0LL;
    *(_QWORD *)v8 = v7[1];
    *((_WORD *)v8 + 4) = *(_WORD *)v7;
    *((_WORD *)v8 + 5) = *((_WORD *)v7 + 1);
    if ( *((_WORD *)v8 + 4) )
    {
      if ( *((_WORD *)v8 + 4) == 1 )
      {
        v10 = v7[1];
        *((_DWORD *)v8 + 7) = *(_DWORD *)(v10[11] + 36LL);
        *((_QWORD *)v8 + 2) = v10[9];
        *((_DWORD *)v8 + 6) = *((_DWORD *)v10 + 17);
        *((_DWORD *)v8 + 10) = *((_DWORD *)v10 + 12);
        *((_DWORD *)v8 + 11) = *((_DWORD *)v10 + 16);
        v6 = v11;
        v5 = v12;
      }
      else if ( RtlIsAnyDebuggerPresent() )
      {
        __debugbreak();
      }
    }
    else
    {
      v9 = v7[1];
      *((_QWORD *)v8 + 2) = v9[2];
      *((_DWORD *)v8 + 6) = *((_DWORD *)v9 + 2);
      *((_DWORD *)v8 + 9) = *((_DWORD *)v9 + 3);
      *((_DWORD *)v8 + 7) = *((_DWORD *)v7 + 9);
      *((_DWORD *)v8 + 8) = *((_DWORD *)v7 + 8);
    }
    ++*(_DWORD *)v3;
    v6 = (_UNKNOWN **)*v6;
    v11 = v6;
    if ( v6 == v5 )
    {
      v14 = -1073741595;
      break;
    }
    if ( v13 )
    {
      v5 = (_QWORD *)*v5;
      v12 = v5;
    }
    v13 = !v13;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  if ( v14 < 0 )
    RtlpDeCommitQueryDebugInfo(a1, v3, 8LL);
  else
    a1[15] = v3;
  return (unsigned int)v14;
}
