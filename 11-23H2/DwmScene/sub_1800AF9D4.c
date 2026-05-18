/*
 * XREFs of sub_1800AF9D4 @ 0x1800AF9D4
 * Callers:
 *     sub_1800AFAA8 @ 0x1800AFAA8 (sub_1800AFAA8.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *sub_1800AF9D4()
{
  if ( dword_1801D8FA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8FA0);
    if ( dword_1801D8FA0 == -1 )
    {
      sub_180010DD0(qword_1801D8FB0, (__int64)"DepthOnly");
      sub_180010DD0(qword_1801D8FD0, (__int64)"Diagnostics");
      sub_180010DD0(qword_1801D8FF0, (__int64)"AlphaMask");
      sub_180010DD0(qword_1801D9010, (__int64)"AlphaBlend");
      sub_180010DD0(qword_1801D9030, (__int64)"Skinning");
      atexit(sub_1800F9610);
      sub_18000C538(&dword_1801D8FA0);
    }
  }
  return qword_1801D8FB0;
}
