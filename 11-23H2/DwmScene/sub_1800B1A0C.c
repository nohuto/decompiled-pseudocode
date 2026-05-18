/*
 * XREFs of sub_1800B1A0C @ 0x1800B1A0C
 * Callers:
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *sub_1800B1A0C()
{
  if ( dword_1801D90F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D90F0);
    if ( dword_1801D90F0 == -1 )
    {
      sub_180010DD0(qword_1801D9100, (__int64)"DepthOnly");
      sub_180010DD0(qword_1801D9120, (__int64)"Diagnostics");
      sub_180010DD0(qword_1801D9140, (__int64)"Background");
      sub_180010DD0(qword_1801D9160, (__int64)"AlphaMask");
      sub_180010DD0(qword_1801D9180, (__int64)"AlphaBlend");
      sub_180010DD0(qword_1801D91A0, (__int64)"Skinning");
      sub_180010DD0(qword_1801D91C0, (__int64)"DepthToColor");
      sub_180010DD0(qword_1801D91E0, (__int64)"StochasticTransparency");
      sub_180010DD0(qword_1801D9200, (__int64)"GLTFMaterial");
      atexit(sub_1800F9640);
      sub_18000C538(&dword_1801D90F0);
    }
  }
  return qword_1801D9100;
}
