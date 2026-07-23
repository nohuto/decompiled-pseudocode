/*
 * XREFs of _wtoi @ 0x1403D9F90
 * Callers:
 *     WmipPrepareWnodeSI @ 0x1406C6514 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x14086B2A0 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140A10464 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1403D9FB0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
