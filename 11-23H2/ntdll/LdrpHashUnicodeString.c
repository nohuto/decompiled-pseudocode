/*
 * XREFs of LdrpHashUnicodeString @ 0x180014A04
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011480 (LdrpMapDllFullPath.c)
 *     LdrpInsertDataTableEntry @ 0x18002CF08 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadKnownDll @ 0x18002D2B0 (LdrpLoadKnownDll.c)
 *     LdrpAddRedirectedFunction @ 0x1800E09C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 */

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  unsigned int v1; // r11d
  int v2; // ebx
  unsigned __int16 *i; // rdi
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  int v6; // r11d

  v1 = 0;
  if ( !a1 )
    return 0x80000000;
  v2 = *a1 >> 1;
  for ( i = (unsigned __int16 *)*((_QWORD *)a1 + 1); v2; --v2 )
  {
    v4 = *i++;
    v5 = NLS_UPCASE(qword_180184808, v4);
    v1 = v5 + 65599 * v6;
  }
  if ( !v1 )
    return 0x80000000;
  return v1;
}
