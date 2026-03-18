/*
 * XREFs of Phase1Initialization @ 0x140820F30
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x140383780 (InbvSetProgressBarSubset.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084D9FC (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140B5D6A0 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D81760 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheckEx(0x69u, (unsigned int)IopInitFailCode, 0LL, 0LL, 0LL);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
