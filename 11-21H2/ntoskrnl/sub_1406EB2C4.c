/*
 * XREFs of sub_1406EB2C4 @ 0x1406EB2C4
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 */

__int64 __fastcall sub_1406EB2C4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 1040) & 0x10) == 0 || (unsigned int)KeIsSubsetAffinityEx(a2, a1 + 712) )
    return 0LL;
  else
    return 3221225473LL;
}
