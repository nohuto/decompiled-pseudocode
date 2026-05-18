/*
 * XREFs of sub_1800A76AC @ 0x1800A76AC
 * Callers:
 *     sub_1800A78BC @ 0x1800A78BC (sub_1800A78BC.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *sub_1800A76AC()
{
  if ( dword_1801D8BF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8BF0);
    if ( dword_1801D8BF0 == -1 )
    {
      sub_180010DD0(qword_1801D8C00, (__int64)"Blur8");
      sub_180010DD0(qword_1801D8C20, (__int64)"Blur16");
      sub_180010DD0(qword_1801D8C40, (__int64)"Blur32");
      atexit(sub_1800F9550);
      sub_18000C538(&dword_1801D8BF0);
    }
  }
  return qword_1801D8C00;
}
