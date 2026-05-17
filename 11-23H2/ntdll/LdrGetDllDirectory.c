/*
 * XREFs of LdrGetDllDirectory @ 0x180082640
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // edi

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = (unsigned __int16)LdrpDllDirectory + 2;
  if ( v2 >= v3 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)a1, (unsigned __int16 *)&LdrpDllDirectory);
    v4 = 0;
  }
  else
  {
    *(_WORD *)a1 = v3;
    v4 = -1073741789;
    if ( (_WORD)v2 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v4;
}
