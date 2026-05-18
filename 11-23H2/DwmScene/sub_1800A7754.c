/*
 * XREFs of sub_1800A7754 @ 0x1800A7754
 * Callers:
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *sub_1800A7754()
{
  if ( dword_1801D8CA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8CA8);
    if ( dword_1801D8CA8 == -1 )
    {
      sub_180010DD0(qword_1801D8CB0, (__int64)"ColorGrading");
      sub_180010DD0(qword_1801D8CD0, (__int64)"ContrastCurve");
      sub_180010DD0(qword_1801D8CF0, (__int64)"Diagnostics");
      sub_180010DD0(qword_1801D8D10, (__int64)"GammaEncoding");
      sub_180010DD0(qword_1801D8D30, (__int64)"ToneMapping");
      sub_180010DD0(qword_1801D8D50, (__int64)"Vignette");
      atexit(sub_1800F9580);
      sub_18000C538(&dword_1801D8CA8);
    }
  }
  return qword_1801D8CB0;
}
