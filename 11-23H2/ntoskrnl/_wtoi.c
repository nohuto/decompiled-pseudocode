/*
 * XREFs of _wtoi @ 0x1403D9DB0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1406C64E4 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x14086B060 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D9DD0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
