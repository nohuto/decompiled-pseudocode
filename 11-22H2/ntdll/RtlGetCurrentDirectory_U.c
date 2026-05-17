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

__int64 __fastcall RtlGetCurrentDirectory_U(__int64 a1, char *a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  wchar_t *Buffer; // rdx
  unsigned int Length; // edi
  __int64 v9; // rdi
  __int64 v10; // rbp
  size_t v11; // rsi
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
  v10 = (unsigned int)(v9 - 2);
  if ( (unsigned int)v9 < 2 || Buffer[v10] == 58 )
  {
    v11 = 2 * v9;
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
    v11 = 2 * v9;
    if ( v3 >= 2 * v9 )
    {
LABEL_6:
      memmove(a2, Buffer, v11);
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
      if ( (unsigned int)v9 > 1 && *(_WORD *)&a2[2 * v10] == 58 )
      {
        *(_WORD *)&a2[v11] = 0;
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
    return (unsigned int)v11;
  }
}
