/*
 * XREFs of LdrpHashUnicodeString @ 0x180014C14
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011690 (LdrpMapDllFullPath.c)
 *     LdrpInsertDataTableEntry @ 0x18002D0D8 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadKnownDll @ 0x18002D480 (LdrpLoadKnownDll.c)
 *     LdrpAddRedirectedFunction @ 0x1800DF694 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
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
    v5 = NLS_UPCASE(qword_1801817B8, v4);
    v1 = v5 + 65599 * v6;
  }
  if ( !v1 )
    return 0x80000000;
  return v1;
}
