/*
 * XREFs of ExSystemTimeToLocalTime @ 0x14022D770
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     sub_1405101D0 @ 0x1405101D0 (sub_1405101D0.c)
 *     sub_14082848C @ 0x14082848C (sub_14082848C.c)
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_140850F5C @ 0x140850F5C (sub_140850F5C.c)
 *     sub_14085EDEC @ 0x14085EDEC (sub_14085EDEC.c)
 *     sub_1409082EC @ 0x1409082EC (sub_1409082EC.c)
 *     sub_140992918 @ 0x140992918 (sub_140992918.c)
 *     sub_1409986C4 @ 0x1409986C4 (sub_1409986C4.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A52E00 @ 0x140A52E00 (sub_140A52E00.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B2EBF4 @ 0x140B2EBF4 (sub_140B2EBF4.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v5 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v5 = &unk_140D32580;
  LocalTime->QuadPart = SystemTime->QuadPart - *(_QWORD *)(v5[157] + 440LL);
}
