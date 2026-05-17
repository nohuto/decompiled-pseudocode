/*
 * XREFs of GetModuleFullPathNameUnicode @ 0x18000B19C
 * Callers:
 *     GetModuleFullPathName @ 0x18000B21C (GetModuleFullPathName.c)
 * Callees:
 *     LdrGetDllFullName @ 0x1800346C0 (LdrGetDllFullName.c)
 */

__int64 __fastcall GetModuleFullPathNameUnicode(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  int DllFullName; // eax
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v7 = 0LL;
  if ( (a1 & 3) != 0 )
    return 0LL;
  if ( a3 > 0x7FFF )
  {
    v3 = 0x7FFF;
    goto LABEL_4;
  }
  if ( !a3 )
    return 0LL;
LABEL_4:
  *((_QWORD *)&v7 + 1) = a2;
  WORD1(v7) = 2 * v3 - 2;
  DllFullName = LdrGetDllFullName(a1, &v7);
  v5 = (unsigned __int16)v7 >> 1;
  *(_WORD *)(*((_QWORD *)&v7 + 1) + 2 * v5) = 0;
  if ( DllFullName == -1073741789 )
    LODWORD(v5) = v3;
  return (unsigned int)v5;
}
