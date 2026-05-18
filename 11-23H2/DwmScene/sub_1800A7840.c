/*
 * XREFs of sub_1800A7840 @ 0x1800A7840
 * Callers:
 *     sub_1800AF488 @ 0x1800AF488 (sub_1800AF488.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

_QWORD *sub_1800A7840()
{
  if ( dword_1801D8C78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8C78);
    if ( dword_1801D8C78 == -1 )
    {
      sub_180010DD0(qword_1801D8C80, (__int64)"<dummy>");
      atexit(sub_1800F95B0);
      sub_18000C538(&dword_1801D8C78);
    }
  }
  return qword_1801D8C80;
}
