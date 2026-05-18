/*
 * XREFs of sub_1800BAAC4 @ 0x1800BAAC4
 * Callers:
 *     sub_1800C2234 @ 0x1800C2234 (sub_1800C2234.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

__int64 *sub_1800BAAC4()
{
  if ( dword_1801FAEF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FAEF0);
    if ( dword_1801FAEF0 == -1 )
    {
      sub_180012190(qword_1801F6980, "<dummy>", 7uLL);
      atexit(sub_18011B9F0);
      sub_18000C548(&dword_1801FAEF0);
    }
  }
  return qword_1801F6980;
}
