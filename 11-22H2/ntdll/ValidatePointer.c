/*
 * XREFs of ValidatePointer @ 0x18006C078
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BDFC (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     GetResourceDirectoryEntry @ 0x18006C0B4 (GetResourceDirectoryEntry.c)
 *     FindDirectoryEntry @ 0x18006C0F8 (FindDirectoryEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidatePointer(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r10

  v3 = *a1;
  v4 = a1[1];
  v5 = a2 + a3;
  v6 = v3 + v4;
  return v6 >= v3 && v5 >= a2 && a2 <= v6 && v5 <= v6 && a2 >= v3 && v5 >= v3;
}
