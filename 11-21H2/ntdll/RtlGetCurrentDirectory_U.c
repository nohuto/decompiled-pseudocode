/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x180080260
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DC4E8 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x180080340 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlGetCurrentDirectory_U(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  wchar_t *Buffer; // rdx
  unsigned int Length; // edi
  __int64 v9; // rdi
  size_t v10; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v3 = (unsigned int)a1;
  LOBYTE(a1) = 1;
  v5 = RtlpReferenceCurrentDirectory(a1, a2, a3);
  v6 = v5;
  if ( v5 )
  {
    Buffer = *(wchar_t **)(v5 + 32);
    Length = *(unsigned __int16 *)(v5 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v9 = Length >> 1;
  if ( (unsigned int)v9 < 2 || Buffer[(unsigned int)(v9 - 2)] == 58 )
  {
    v10 = 2 * v9;
    if ( v3 > 2 * v9 )
      goto LABEL_6;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v5 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      }
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    return (unsigned int)(2 * v9 + 2);
  }
  else
  {
    v10 = 2 * v9;
    if ( v3 >= 2 * v9 )
    {
LABEL_6:
      memmove(a2, Buffer, v10);
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        {
          NtClose(*(HANDLE *)(v6 + 8));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        }
      }
      else
      {
        RtlLeaveCriticalSection((__int64)&FastPebLock);
      }
      if ( (unsigned int)v9 > 1 && *(_WORD *)&a2[2 * (unsigned int)(v9 - 2)] == 58 )
      {
        *(_WORD *)&a2[v10] = 0;
      }
      else
      {
        LODWORD(v9) = v9 - 1;
        *(_WORD *)&a2[2 * (unsigned int)v9] = 0;
      }
      return (unsigned int)(2 * v9);
    }
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v5 + 8));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      }
    }
    else
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
    }
    return (unsigned int)v10;
  }
}
