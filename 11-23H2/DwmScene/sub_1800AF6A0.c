/*
 * XREFs of sub_1800AF6A0 @ 0x1800AF6A0
 * Callers:
 *     sub_1800AF71C @ 0x1800AF71C (sub_1800AF71C.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 */

_QWORD *sub_1800AF6A0()
{
  if ( dword_1801D8F70 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D8F70);
    if ( dword_1801D8F70 == -1 )
    {
      sub_180010DD0(qword_1801D8F78, (__int64)"<dummy>");
      atexit(sub_1800F95E0);
      sub_18000C538(&dword_1801D8F70);
    }
  }
  return qword_1801D8F78;
}
