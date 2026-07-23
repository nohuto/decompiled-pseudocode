/*
 * XREFs of BgpFwReserveAllocate @ 0x140387F74
 * Callers:
 *     BgpFwAllocateMemory @ 0x14038780C (BgpFwAllocateMemory.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140296130 (RtlFindClearBitsAndSet.c)
 */

__int64 __fastcall BgpFwReserveAllocate(__int64 a1)
{
  unsigned __int64 v1; // rbx
  ULONG ClearBitsAndSet; // r8d
  int v3; // eax
  __int64 result; // rax

  v1 = ((a1 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 32;
  ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C70D60, v1, dword_140C70D58);
  v3 = dword_140C70D70;
  if ( ClearBitsAndSet > dword_140C70D70 - 16 )
  {
    dword_140C70D58 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(&stru_140C70D60, v1, 0);
    v3 = dword_140C70D70;
  }
  if ( ClearBitsAndSet > v3 - 16 )
    return 0LL;
  dword_140C70D58 = v1 + ClearBitsAndSet;
  result = ClearBitsAndSet + qword_140C70D50 + 32;
  *(_QWORD *)(result - 8) = 0LL;
  *(_DWORD *)(result - 24) = 1262700354;
  *(_QWORD *)(result - 16) = v1;
  return result;
}
