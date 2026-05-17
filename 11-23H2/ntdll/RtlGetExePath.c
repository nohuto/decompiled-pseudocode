/*
 * XREFs of RtlGetExePath @ 0x180083FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 *     RtlpGetCachedPath @ 0x180031DD0 (RtlpGetCachedPath.c)
 *     wcschr @ 0x180095160 (wcschr.c)
 */

__int64 __fastcall RtlGetExePath(const wchar_t *a1, _QWORD *a2)
{
  _BOOL8 v3; // r8
  __int64 CachedPath; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v3 = !wcschr(a1, 0x5Cu)
    && (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &v6) != -1073741568;
  CachedPath = RtlpGetCachedPath(
                 (__int64 *)&RtlpExeSearchPath,
                 (__int64 (__fastcall *)(__int64, __int64))RtlpComputeExePath,
                 v3,
                 0LL);
  if ( CachedPath )
  {
    *a2 = CachedPath + 128;
    return 0LL;
  }
  else
  {
    *a2 = 0LL;
    return 3221225495LL;
  }
}
