/*
 * XREFs of RtlpCheckForSameCurdir @ 0x18007B610
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18007B470 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlEqualUnicodeString @ 0x180029E40 (RtlEqualUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007B7A8 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

bool __fastcall RtlpCheckForSameCurdir(_WORD *a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rax
  __int64 v6; // rbx
  _UNICODE_STRING DosPath; // xmm0
  _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = RtlpReferenceCurrentDirectory(0LL, a2, a3);
  v6 = v5;
  if ( v5 )
    DosPath = *(_UNICODE_STRING *)(v5 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  v9 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != (unsigned __int16)*a1 )
      goto LABEL_7;
    v9.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == *a1 )
LABEL_6:
    v4 = RtlEqualUnicodeString(&v9.Length, (__int64)a1, 0) != 0;
LABEL_7:
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
  return v4;
}
