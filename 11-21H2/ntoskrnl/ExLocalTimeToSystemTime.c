/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14022D7D0
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     sub_14039157C @ 0x14039157C (sub_14039157C.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 *     sub_14050FD3C @ 0x14050FD3C (sub_14050FD3C.c)
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_140835844 @ 0x140835844 (sub_140835844.c)
 *     sub_14090805C @ 0x14090805C (sub_14090805C.c)
 *     sub_1409986C4 @ 0x1409986C4 (sub_1409986C4.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B2EBF4 @ 0x140B2EBF4 (sub_140B2EBF4.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  __int64 ThreadServerSilo; // rax
  _QWORD *v5; // rax

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v5 = *(_QWORD **)(ThreadServerSilo + 1464);
  else
    v5 = &unk_140D32580;
  SystemTime->QuadPart = LocalTime->QuadPart + *(_QWORD *)(v5[157] + 440LL);
}
