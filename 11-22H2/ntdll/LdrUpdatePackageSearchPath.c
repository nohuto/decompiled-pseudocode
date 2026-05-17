/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x180083E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     LdrpResetAppPackagesPath @ 0x18009E220 (LdrpResetAppPackagesPath.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall LdrUpdatePackageSearchPath(_WORD *Src)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *StringRoutine; // rax
  _WORD *v6; // r14
  __int64 v7; // rsi

  v1 = 0;
  if ( !Src )
    return (unsigned int)LdrpResetAppPackagesPath();
  v3 = -1LL;
  do
    ++v3;
  while ( Src[v3] );
  v4 = 2 * v3;
  if ( v4 )
  {
    if ( v4 >= 0xFFFE )
    {
      return (unsigned int)-1073741562;
    }
    else
    {
      StringRoutine = (_WORD *)NtdllpAllocateStringRoutine(v4 + 2);
      v6 = StringRoutine;
      if ( StringRoutine )
      {
        memmove(StringRoutine, Src, v4);
        v6[v4 >> 1] = 0;
        RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
        v7 = *((_QWORD *)&LdrpAppPackagesPath + 1);
        ++LdrpAppPackagesPathVersion;
        LOWORD(LdrpAppPackagesPath) = v4;
        WORD1(LdrpAppPackagesPath) = v4 + 2;
        *((_QWORD *)&LdrpAppPackagesPath + 1) = v6;
        RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
        if ( v7 != *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
          NtdllpFreeStringRoutine(v7);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)LdrpResetAppPackagesPath();
  }
  return v1;
}
