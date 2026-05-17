/*
 * XREFs of LdrpGetBaseNameFromFullName @ 0x180029F48
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x180029A40 (LdrpFindLoadedDllByName.c)
 *     LdrpResolveDllName @ 0x18002A874 (LdrpResolveDllName.c)
 *     LdrpCheckKnownDllFullPath @ 0x18002E214 (LdrpCheckKnownDllFullPath.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x18007EE30 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpAddRedirectedFunction @ 0x1800E09C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall LdrpGetBaseNameFromFullName(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int16 v6; // r8
  __int16 result; // ax

  v3 = *(_WORD *)a1 >> 1;
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    do
    {
      if ( *(_WORD *)(v4 + 2LL * v3 - 2) == 92 )
        break;
      if ( *(_WORD *)(v4 + 2LL * v3 - 2) == 47 )
        break;
      --v3;
    }
    while ( v3 );
  }
  v5 = v3;
  v6 = 2 * v3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8) + 2 * v5;
  *(_WORD *)a2 = *(_WORD *)a1 - v6;
  result = *(_WORD *)(a1 + 2) - v6;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
