/*
 * XREFs of sub_14025C460 @ 0x14025C460
 * Callers:
 *     sub_140268CA8 @ 0x140268CA8 (sub_140268CA8.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_1403773D8 @ 0x1403773D8 (sub_1403773D8.c)
 *     sub_14038A914 @ 0x14038A914 (sub_14038A914.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

LONG __fastcall sub_14025C460(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 716) )
      KeSetEvent((PRKEVENT)(a1 + 720), 0, 0);
    if ( *(_DWORD *)(a1 + 744) != 18 && (unsigned __int8)sub_140347810(a1 + 976) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 968));
      sub_1402AD030(a1 + 976);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 752) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 760), 0, 0);
}
