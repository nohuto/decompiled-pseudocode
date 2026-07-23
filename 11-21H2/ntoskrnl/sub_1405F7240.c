/*
 * XREFs of sub_1405F7240 @ 0x1405F7240
 * Callers:
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall sub_1405F7240(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  PMDL PagesForMdl; // rax

  v2 = *(_QWORD *)(a1 + 6216);
  v3 = 0;
  v4 = a2;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, *(unsigned int *)(a1 + 6208), MmCached, 0xDu);
  if ( PagesForMdl )
    *(_QWORD *)(v2 + 8 * v4) = PagesForMdl;
  else
    return (unsigned int)-1073741670;
  return v3;
}
