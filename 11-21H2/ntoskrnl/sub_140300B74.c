/*
 * XREFs of sub_140300B74 @ 0x140300B74
 * Callers:
 *     sub_1402F6170 @ 0x1402F6170 (sub_1402F6170.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407A87D0 @ 0x1407A87D0 (sub_1407A87D0.c)
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 * Callees:
 *     sub_140212034 @ 0x140212034 (sub_140212034.c)
 *     sub_1406E1570 @ 0x1406E1570 (sub_1406E1570.c)
 */

bool __fastcall sub_140300B74(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !a2 || (PEPROCESS)a1 == PsInitialSystemProcess || (PVOID)a1 == qword_140D06940 )
    return 1;
  v3 = sub_140212034(*(_QWORD *)(a1 + 1296));
  return (unsigned __int8)sub_1406E1570(v3) != 0;
}
