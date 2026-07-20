/*
 * XREFs of SmpSearchKnownSubSysDatabase @ 0x140003734
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 *     SmpExecPgm @ 0x1400028A0 (SmpExecPgm.c)
 *     SmpSbCreateSession @ 0x140002B4C (SmpSbCreateSession.c)
 *     SmpHandleConnectionRequest @ 0x140003230 (SmpHandleConnectionRequest.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 */

volatile signed __int32 *__fastcall SmpSearchKnownSubSysDatabase(int a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  int *v4; // rcx
  _QWORD **v6; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // r8
  int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  v4 = *(int **)(a2 + 8);
  if ( !v4 )
  {
    v10 = 1;
    v11 = SmpKnownSubSysTable + 24LL * (a1 & 0x1F);
    RtlAcquireSRWLockShared(v11 + 16);
    v4 = &v10;
  }
  v6 = (_QWORD **)*((_QWORD *)v4 + 1);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v9 = i - 9;
    if ( *((_DWORD *)i - 2) == a1 )
    {
      if ( *(_DWORD *)a2 )
      {
        if ( *(_DWORD *)a2 == 1 && *((_DWORD *)v9 + 6) == *(_DWORD *)(a2 + 16) )
          v3 = (volatile signed __int32 *)(i - 9);
      }
      else if ( v9[6] == *(_QWORD *)(a2 + 16) )
      {
        v3 = (volatile signed __int32 *)(i - 9);
      }
      if ( v3 )
      {
        _InterlockedIncrement(v3);
        break;
      }
    }
  }
  if ( v4 == &v10 )
    SmpUnlockKnownSubSysList(v4);
  return v3;
}
