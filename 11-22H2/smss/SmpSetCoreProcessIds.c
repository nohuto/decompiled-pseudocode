/*
 * XREFs of SmpSetCoreProcessIds @ 0x140002724
 * Callers:
 *     SmpTerminateCSR @ 0x140001660 (SmpTerminateCSR.c)
 *     SmpExecPgm @ 0x1400028A0 (SmpExecPgm.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002858 (SmpSessionIdToInitialSessionIndex.c)
 */

void __fastcall SmpSetCoreProcessIds(__int64 a1, _BYTE **a2)
{
  __int64 v3; // rbx
  char v4; // r10
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx

  v3 = SmpCoreProcessIds + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex(a1);
  if ( v4 )
    *(_DWORD *)v3 = -1;
  v5 = 0;
  RtlAcquireSRWLockExclusive(v3 + 8);
  v7 = (__int64)*a2;
  if ( *a2 )
  {
    if ( (*(_BYTE *)(v7 + 8) & 4) != 0 )
    {
      RtlReleaseSRWLockExclusive(v3 + 8, v6);
      v8 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      *(_QWORD *)&SmpGlobalLog[2 * v8 + 4] = 0LL;
      SmpGlobalLog[2 * v8 + 2] = 1117;
      SmpGlobalLog[2 * v8 + 3] = -1073741823;
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)v7);
  }
  v9 = a2;
  v10 = v3 - (_QWORD)a2;
  v11 = 2LL;
  do
  {
    v12 = *(_QWORD *)((char *)v9 + v10 + 24);
    *(_QWORD *)((char *)v9 + v10 + 24) = *v9;
    *v9++ = v12;
    --v11;
  }
  while ( v11 );
  if ( !*(_DWORD *)(v3 + 4) && *(_QWORD *)(v3 + 32) )
  {
    v5 = 1;
    *(_DWORD *)(v3 + 4) = 1;
  }
  RtlReleaseSRWLockExclusive(v3 + 8, v9);
  if ( v5 == 1 )
    RtlWakeAllConditionVariable(v3 + 16);
  if ( *a2 )
    SmpDereferenceKnownSubSys(*a2);
}
