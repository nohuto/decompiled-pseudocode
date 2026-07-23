/*
 * XREFs of RtlGetCurrentDirectory_U @ 0x18007B6C0
 * Callers:
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DCA08 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

ULONG __cdecl RtlGetCurrentDirectory_U(ULONG BufferLength, PWSTR Buffer)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rax
  HANDLE *v5; // rbx
  wchar_t *v6; // rdx
  unsigned int Length; // edi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx

  v2 = BufferLength;
  LOBYTE(BufferLength) = 1;
  v4 = RtlpReferenceCurrentDirectory(BufferLength, Buffer);
  v5 = (HANDLE *)v4;
  if ( v4 )
  {
    v6 = *(wchar_t **)(v4 + 32);
    Length = *(unsigned __int16 *)(v4 + 24);
  }
  else
  {
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    v6 = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    Length = ProcessParameters->CurrentDirectory.DosPath.Length;
  }
  v8 = Length >> 1;
  v9 = (unsigned int)(v8 - 2);
  if ( (unsigned int)v8 < 2 || v6[v9] == 58 )
  {
    v10 = v8;
    if ( v2 > 2 * v8 )
      goto LABEL_6;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
    return 2 * v8 + 2;
  }
  else
  {
    v10 = v8;
    if ( v2 >= 2 * v8 )
    {
LABEL_6:
      memmove(Buffer, v6, v10 * 2);
      if ( v5 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        {
          NtClose(v5[1]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        }
      }
      else
      {
        RtlLeaveCriticalSection(&FastPebLock);
      }
      if ( (unsigned int)v8 > 1 && Buffer[v9] == 58 )
      {
        Buffer[v10] = 0;
      }
      else
      {
        LODWORD(v8) = v8 - 1;
        Buffer[(unsigned int)v8] = 0;
      }
      return 2 * v8;
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v4 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
    else
    {
      RtlLeaveCriticalSection(&FastPebLock);
    }
    return 2 * v8;
  }
}
