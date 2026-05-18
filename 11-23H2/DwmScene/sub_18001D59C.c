/*
 * XREFs of sub_18001D59C @ 0x18001D59C
 * Callers:
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_18001D13C @ 0x18001D13C (sub_18001D13C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001D59C()
{
  if ( dword_1801D3E90 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D3E90);
    if ( dword_1801D3E90 == -1 )
    {
      sub_18001D13C(qword_1801D3E98);
      atexit(sub_1800F2560);
      sub_18000C538(&dword_1801D3E90);
    }
  }
  return qword_1801D3E98;
}
