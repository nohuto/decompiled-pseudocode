/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x18001EB90
 * Callers:
 *     RtlQueryEnvironmentVariable_U @ 0x180058DC0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings @ 0x180059A30 (RtlExpandEnvironmentStrings.c)
 *     RtlpComputePath @ 0x18006A470 (RtlpComputePath.c)
 *     RtlGetExePath @ 0x180083FE0 (RtlGetExePath.c)
 *     LdrpCorInitialize @ 0x18008E254 (LdrpCorInitialize.c)
 * Callees:
 *     RtlpFindEnvironmentHashEntry @ 0x18001EEA0 (RtlpFindEnvironmentHashEntry.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     RtlpScanEnvironment @ 0x180058770 (RtlpScanEnvironment.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     _wcsnicmp @ 0x180090FF0 (_wcsnicmp.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D8FB4 (RtlpQueryEnvironmentHashTable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable(
        _WORD *a1,
        const wchar_t *a2,
        size_t a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  const wchar_t *v8; // r10
  unsigned int PseudoEnvironmentVariable; // ebx
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  void *Environment; // r15
  const wchar_t *v16; // rbx
  __int64 EnvironmentHashEntry; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  const void *v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  _PEB *ProcessEnvironmentBlock; // rdx
  int v24; // ecx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  unsigned int v27; // [rsp+40h] [rbp-38h]
  struct _TEB *v29; // [rsp+90h] [rbp+18h]
  __int64 v30; // [rsp+A8h] [rbp+30h]

  v8 = a2;
  v29 = NtCurrentTeb();
  *a6 = 0LL;
  if ( a3 )
  {
    PseudoEnvironmentVariable = -1073741568;
    v12 = 4;
    while ( 1 )
    {
      do
      {
        if ( v12 )
        {
          v13 = 3LL * --v12;
          v30 = v13;
          if ( a3 <= *((_QWORD *)&unk_180133200 + 3 * v12) )
            continue;
        }
        v14 = a5;
        goto LABEL_8;
      }
      while ( a3 != *((_QWORD *)&unk_180133200 + 3 * v12) );
      if ( !wcsnicmp(v8, *((const wchar_t **)&unk_180133200 + v13 + 1), a3) )
        break;
      v8 = a2;
    }
    v14 = a5;
    PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                  *((unsigned int *)&unk_180133200 + 2 * v30 + 4),
                                  a4,
                                  a5,
                                  a6);
    v8 = a2;
LABEL_8:
    if ( PseudoEnvironmentVariable != -1073741568 )
      return PseudoEnvironmentVariable;
    if ( !a1 )
    {
      RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
      Environment = v29->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v16 = a2;
      EnvironmentHashEntry = RtlpFindEnvironmentHashEntry(&RtlpEnvironmentHashTable, a2, a3);
      v18 = EnvironmentHashEntry;
      if ( !EnvironmentHashEntry )
      {
        v22 = -1073741568;
        goto LABEL_14;
      }
      v19 = *(_QWORD *)(EnvironmentHashEntry + 40);
      v20 = *(const void **)(v18 + 24);
      if ( a4 )
      {
        if ( v19 < v14 )
        {
          *a6 = v19;
          v21 = v19;
          memmove(a4, v20, 2 * v19);
          a4[v21] = 0;
          v22 = 0;
          v16 = a2;
LABEL_14:
          v27 = v22;
          if ( v22 == -1073741568 )
          {
            if ( byte_180187B70 )
              v27 = -1073741568;
            else
              v27 = RtlpScanEnvironment(Environment, v16, a3, a4, v14, a6, 1);
          }
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          return v27;
        }
        if ( v14 )
          *a4 = 0;
      }
      *a6 = v19 + 1;
      v22 = -1073741789;
      goto LABEL_14;
    }
    if ( *a1 )
    {
      ProcessEnvironmentBlock = v29->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment != a1
        || (FastPebLock = ProcessEnvironmentBlock->FastPebLock) != 0LL
        && FastPebLock->OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
      {
        v24 = 0;
        return (unsigned int)RtlpScanEnvironment(a1, a2, a3, a4, v14, a6, v24);
      }
      PseudoEnvironmentVariable = RtlpQueryEnvironmentHashTable(&RtlpEnvironmentHashTable, v8, a3, a4, v14, a6);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      if ( !byte_180187B70 )
      {
        v24 = 1;
        return (unsigned int)RtlpScanEnvironment(a1, a2, a3, a4, v14, a6, v24);
      }
    }
    return (unsigned int)-1073741568;
  }
  return 3221225728LL;
}
