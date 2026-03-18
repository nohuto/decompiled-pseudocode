/*
 * XREFs of ?TraceLoggingUpdateProcessedRecalcCounters@@YAXI@Z @ 0x1C00AF090
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingUpdateProcessedRecalcCounters(char a1)
{
  ++qword_1C03361F0;
  if ( (a1 & 1) != 0 )
    ++qword_1C03361F8;
  if ( (a1 & 2) != 0 )
    ++qword_1C0336200;
  if ( (a1 & 4) != 0 )
    ++qword_1C0336208;
  if ( (a1 & 8) != 0 )
    ++qword_1C0336210;
  if ( (a1 & 0x10) != 0 )
    ++qword_1C0336218;
  if ( (a1 & 0x20) != 0 )
    ++qword_1C0336220;
  if ( (a1 & 0x40) != 0 )
    ++qword_1C0336228;
}
