/*
 * XREFs of RtlQueryEnvironmentVariable @ 0x18001ED70
 * Callers:
 *     RtlQueryEnvironmentVariable_U @ 0x180058F20 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings @ 0x180059B50 (RtlExpandEnvironmentStrings.c)
 *     RtlpComputePath @ 0x18006A490 (RtlpComputePath.c)
 *     RtlGetExePath @ 0x1800837E0 (RtlGetExePath.c)
 *     LdrpCorInitialize @ 0x18008DA54 (LdrpCorInitialize.c)
 * Callees:
 *     RtlpFindEnvironmentHashEntry @ 0x18001F080 (RtlpFindEnvironmentHashEntry.c)
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlpScanEnvironment @ 0x1800588D0 (RtlpScanEnvironment.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 *     _wcsnicmp @ 0x1800907F0 (_wcsnicmp.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpQueryEnvironmentHashTable @ 0x1800D9604 (RtlpQueryEnvironmentHashTable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable(
        PVOID Environment,
        PCWSTR Name,
        SIZE_T NameLength,
        PWSTR Value,
        SIZE_T ValueLength,
        PSIZE_T ReturnLength)
{
  const wchar_t *v8; // r10
  NTSTATUS PseudoEnvironmentVariable; // ebx
  unsigned int v12; // esi
  __int64 v13; // rax
  SIZE_T v14; // rsi
  void *v15; // r15
  PCWSTR v16; // rbx
  __int64 EnvironmentHashEntry; // rax
  __int64 v18; // rcx
  ULONG_PTR v19; // rax
  const void *v20; // rdx
  ULONG_PTR v21; // rbx
  int v22; // eax
  _PEB *ProcessEnvironmentBlock; // rdx
  int v24; // ecx
  _RTL_CRITICAL_SECTION *FastPebLock; // rdx
  NTSTATUS v27; // [rsp+40h] [rbp-38h]
  struct _TEB *v29; // [rsp+90h] [rbp+18h]
  __int64 ReturnLengtha; // [rsp+A8h] [rbp+30h]

  v8 = Name;
  v29 = NtCurrentTeb();
  *ReturnLength = 0LL;
  if ( NameLength )
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
          ReturnLengtha = v13;
          if ( NameLength <= *((_QWORD *)&unk_180131210 + 3 * v12) )
            continue;
        }
        v14 = ValueLength;
        goto LABEL_8;
      }
      while ( NameLength != *((_QWORD *)&unk_180131210 + 3 * v12) );
      if ( !wcsnicmp(v8, *((const wchar_t **)&unk_180131210 + v13 + 1), NameLength) )
        break;
      v8 = Name;
    }
    v14 = ValueLength;
    PseudoEnvironmentVariable = RtlpQueryPseudoEnvironmentVariable(
                                  *((unsigned int *)&unk_180131210 + 2 * ReturnLengtha + 4),
                                  Value,
                                  ValueLength,
                                  ReturnLength);
    v8 = Name;
LABEL_8:
    if ( PseudoEnvironmentVariable != -1073741568 )
      return PseudoEnvironmentVariable;
    if ( !Environment )
    {
      RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
      v15 = v29->ProcessEnvironmentBlock->ProcessParameters->Environment;
      v16 = Name;
      EnvironmentHashEntry = RtlpFindEnvironmentHashEntry(&RtlpEnvironmentHashTable, Name, NameLength);
      v18 = EnvironmentHashEntry;
      if ( !EnvironmentHashEntry )
      {
        v22 = -1073741568;
        goto LABEL_14;
      }
      v19 = *(_QWORD *)(EnvironmentHashEntry + 40);
      v20 = *(const void **)(v18 + 24);
      if ( Value )
      {
        if ( v19 < v14 )
        {
          *ReturnLength = v19;
          v21 = v19;
          memmove(Value, v20, 2 * v19);
          Value[v21] = 0;
          v22 = 0;
          v16 = Name;
LABEL_14:
          v27 = v22;
          if ( v22 == -1073741568 )
          {
            if ( byte_180184AB0 )
              v27 = -1073741568;
            else
              v27 = RtlpScanEnvironment(v15, v16, NameLength, Value, v14, ReturnLength, 1);
          }
          RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
          return v27;
        }
        if ( v14 )
          *Value = 0;
      }
      *ReturnLength = v19 + 1;
      v22 = -1073741789;
      goto LABEL_14;
    }
    if ( *(_WORD *)Environment )
    {
      ProcessEnvironmentBlock = v29->ProcessEnvironmentBlock;
      if ( ProcessEnvironmentBlock->ProcessParameters->Environment != Environment
        || (FastPebLock = ProcessEnvironmentBlock->FastPebLock) != 0LL
        && FastPebLock->OwningThread != NtCurrentTeb()->ClientId.UniqueThread )
      {
        v24 = 0;
        return RtlpScanEnvironment(Environment, Name, NameLength, Value, v14, ReturnLength, v24);
      }
      PseudoEnvironmentVariable = RtlpQueryEnvironmentHashTable(
                                    &RtlpEnvironmentHashTable,
                                    v8,
                                    NameLength,
                                    Value,
                                    v14,
                                    ReturnLength);
      if ( PseudoEnvironmentVariable != -1073741568 )
        return PseudoEnvironmentVariable;
      if ( !byte_180184AB0 )
      {
        v24 = 1;
        return RtlpScanEnvironment(Environment, Name, NameLength, Value, v14, ReturnLength, v24);
      }
    }
    return -1073741568;
  }
  return -1073741568;
}
