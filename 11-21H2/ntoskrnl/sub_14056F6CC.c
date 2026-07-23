/*
 * XREFs of sub_14056F6CC @ 0x14056F6CC
 * Callers:
 *     sub_1403AD034 @ 0x1403AD034 (sub_1403AD034.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_1403AD40C @ 0x1403AD40C (sub_1403AD40C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_14056F6CC(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 2097153;
  result = (unsigned __int64)memset((void *)(a1 + 8), 0, 0x100uLL);
  v4 = *((unsigned __int8 *)CurrentPrcb + 208);
  v5 = *((_QWORD *)CurrentPrcb + 25);
  if ( *(_WORD *)a1 <= (unsigned __int16)v4 )
  {
    if ( *(_WORD *)(a1 + 2) <= (unsigned __int16)v4 )
      return result;
    result = (unsigned int)(v4 + 1);
    *(_WORD *)a1 = v4 + 1;
  }
  *(_QWORD *)(a1 + 8 * v4 + 8) |= v5;
  return result;
}
