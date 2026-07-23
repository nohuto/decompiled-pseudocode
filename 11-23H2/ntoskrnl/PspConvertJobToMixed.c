/*
 * XREFs of PspConvertJobToMixed @ 0x1409B2364
 * Callers:
 *     PspBindProcessSessionToJob @ 0x14069FBC4 (PspBindProcessSessionToJob.c)
 *     PspSetJobMemoryPartition @ 0x1409B2E24 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1, int a2)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 576) == -2 )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 1536);
  if ( (v3 & 0x10) == 0
    && ((v3 & 0x40000000) != 0 || ((*(_QWORD *)(a1 + 1776) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 || a2) )
  {
    *(_DWORD *)(a1 + 576) = -2;
    return 0LL;
  }
  return 3221225506LL;
}
