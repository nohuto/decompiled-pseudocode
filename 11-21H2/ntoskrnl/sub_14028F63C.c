/*
 * XREFs of sub_14028F63C @ 0x14028F63C
 * Callers:
 *     sub_140238BC4 @ 0x140238BC4 (sub_140238BC4.c)
 *     IoApplyPriorityInfoThread @ 0x14028F280 (IoApplyPriorityInfoThread.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14062E0D0 @ 0x14062E0D0 (sub_14062E0D0.c)
 */

__int64 __fastcall sub_14028F63C(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1376);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1376), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(xmmword_140D06900) & 0x2000) != 0 )
    sub_14062E0D0(a1, 1331, v4, a2, 0LL);
  return v4;
}
