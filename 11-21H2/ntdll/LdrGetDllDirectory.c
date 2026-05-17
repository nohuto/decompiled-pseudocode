/*
 * XREFs of LdrGetDllDirectory @ 0x180086650
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpDllDirectoryLock, a2, a3, a4);
  v5 = *(unsigned __int16 *)(a1 + 2);
  v6 = (unsigned __int16)LdrpDllDirectory + 2;
  if ( v5 >= v6 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)a1, (unsigned __int16 *)&LdrpDllDirectory);
    v7 = 0;
  }
  else
  {
    *(_WORD *)a1 = v6;
    v7 = -1073741789;
    if ( (_WORD)v5 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v7;
}
