/*
 * XREFs of RtlpEnsureBufferSize @ 0x1800753A0
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180002A90 (sxsisol_RespectDotLocal.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075290 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D7410 (RtlNtPathNameToDosPathName.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800EA85C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, SIZE_T a3)
{
  char v5; // bp
  PVOID StringRoutine; // rax
  PVOID v7; // rsi

  v5 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return 3221225485LL;
  if ( a3 <= *(_QWORD *)(a2 + 16) )
    return 0LL;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) && a3 <= *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  StringRoutine = NtdllpAllocateStringRoutine(a3);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( (v5 & 1) == 0 )
      memmove(StringRoutine, *(const void **)a2, *(_QWORD *)(a2 + 16));
    if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
      NtdllpFreeStringRoutine(*(void **)a2);
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  return 3221225495LL;
}
