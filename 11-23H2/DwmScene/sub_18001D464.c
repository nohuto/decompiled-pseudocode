/*
 * XREFs of sub_18001D464 @ 0x18001D464
 * Callers:
 *     sub_18001D194 @ 0x18001D194 (sub_18001D194.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001D464()
{
  __int64 v0; // rax

  if ( dword_1801D3E20 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D3E20);
    if ( dword_1801D3E20 == -1 )
    {
      v0 = sub_18001C190();
      *(_QWORD *)v0 = v0;
      *(_QWORD *)(v0 + 8) = v0;
      *(_QWORD *)(v0 + 16) = v0;
      *(_WORD *)(v0 + 24) = 257;
      qword_1801D3E28 = v0;
      atexit(sub_1800F2540);
      sub_18000C538(&dword_1801D3E20);
    }
  }
  return &qword_1801D3E28;
}
