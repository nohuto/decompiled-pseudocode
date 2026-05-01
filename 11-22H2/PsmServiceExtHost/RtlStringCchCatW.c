/*
 * XREFs of RtlStringCchCatW @ 0x18008FE7C
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051804 (SdbGetMergeRedirectPath.c)
 *     AslpFileQueryVersionString @ 0x18009CFB8 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x18009DD0C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x18009DEE8 (AslPathToSystemPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A097C (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180002328 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _WORD *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = a2;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 == 0 ? 0xC000000D : 0;
    if ( v5 )
    {
      v8 = (a2 - v5) & -(__int64)(v5 != 0);
      return (unsigned int)RtlStringCopyWorkerW(&a1[v8], a2 - v8, v8, a3);
    }
  }
  return v7;
}
