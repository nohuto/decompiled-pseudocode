/*
 * XREFs of sub_14028F698 @ 0x14028F698
 * Callers:
 *     sub_14025C430 @ 0x14025C430 (sub_14025C430.c)
 *     sub_140288EE4 @ 0x140288EE4 (sub_140288EE4.c)
 *     IoSetIoPriorityHintIntoThread @ 0x14028F250 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x14028F280 (IoApplyPriorityInfoThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14028F718 @ 0x14028F718 (sub_14028F718.c)
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

__int64 __fastcall sub_14028F698(__int64 a1, unsigned int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1376);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1376), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(xmmword_140D06900) & 0x2000) != 0 )
    sub_14062E0D0(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    sub_14028F718(a1, v6, a2);
  return v6;
}
