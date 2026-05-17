/*
 * XREFs of LdrpGetBaseNameFromFullName @ 0x180042D7C
 * Callers:
 *     LdrpFastpthReloadedDll @ 0x18003F710 (LdrpFastpthReloadedDll.c)
 *     LdrpFindLoadedDllByName @ 0x180041240 (LdrpFindLoadedDllByName.c)
 *     LdrpCheckKnownDllFullPath @ 0x18004F308 (LdrpCheckKnownDllFullPath.c)
 *     LdrpResolveDllName @ 0x18004F58C (LdrpResolveDllName.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x180083010 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall LdrpGetBaseNameFromFullName(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  _WORD *i; // r8
  __int16 v5; // cx
  __int16 result; // ax

  v3 = *((_QWORD *)a1 + 1);
  for ( i = (_WORD *)(*a1 + v3 - 2); (unsigned __int64)i > v3; --i )
  {
    if ( *i == 92 || *i == 47 )
    {
      ++i;
      break;
    }
  }
  v5 = (_WORD)i - a1[4];
  *(_QWORD *)(a2 + 8) = i;
  *(_WORD *)a2 = *a1 - v5;
  result = a1[1] - v5;
  *(_WORD *)(a2 + 2) = result;
  return result;
}
