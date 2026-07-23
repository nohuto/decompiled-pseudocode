/*
 * XREFs of sub_140602EB8 @ 0x140602EB8
 * Callers:
 *     sub_140603974 @ 0x140603974 (sub_140603974.c)
 *     sub_140604224 @ 0x140604224 (sub_140604224.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140602644 @ 0x140602644 (sub_140602644.c)
 *     sub_140605160 @ 0x140605160 (sub_140605160.c)
 */

__int64 sub_140602EB8()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  if ( _InterlockedCompareExchange(&dword_140C1A8D0, 1, 0) != 1
    && (!dword_140C090C0 || !sub_1402A2000((__int64)&dword_140C090C0, 0x800000000000LL)) )
  {
    qword_140D049B8 = KeQueryPerformanceCounter(0LL).QuadPart;
    v1 = sub_140602644();
    v0 = v1;
    if ( v1 < 0 )
      sub_140605160("Driver Verifier: CarLogging failed to initialize with %08lx\n", v1);
  }
  return v0;
}
