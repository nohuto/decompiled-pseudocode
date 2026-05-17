/*
 * XREFs of FindDirectoryEntry @ 0x18006C0F8
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDFC (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18006C078 (ValidatePointer.c)
 */

int *__fastcall FindDirectoryEntry(unsigned __int64 *a1, int *a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // r8
  int v9; // r11d

  if ( !a3 )
    return 0LL;
  v7 = 2LL;
  while ( *a2 < 0 || *(unsigned __int16 *)a2 != a4 )
  {
    if ( !ValidatePointer(a1, (unsigned __int64)&a2[v7], v7 * 4) || v9 + 1 >= a3 )
      return 0LL;
  }
  if ( a2[1] < 0 )
    return a2;
  else
    return 0LL;
}
