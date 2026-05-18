/*
 * XREFs of sub_1800BA85C @ 0x1800BA85C
 * Callers:
 *     sub_1800BAB48 @ 0x1800BAB48 (sub_1800BAB48.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *sub_1800BA85C()
{
  if ( dword_1801FAED4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FAED4);
    if ( dword_1801FAED4 == -1 )
    {
      sub_180012190(qword_1801F6920, "Blur8", 5uLL);
      qword_1801F6950 = 0LL;
      qword_1801F6958 = 15LL;
      byte_1801F6940 = 0;
      sub_180012190((__int64 *)&byte_1801F6940, "Blur16", 6uLL);
      qword_1801F6970 = 0LL;
      qword_1801F6978 = 15LL;
      byte_1801F6960 = 0;
      sub_180012190((__int64 *)&byte_1801F6960, "Blur32", 6uLL);
      atexit(sub_18011B990);
      sub_18000C548(&dword_1801FAED4);
    }
  }
  return qword_1801F6920;
}
