/*
 * XREFs of sub_18001D614 @ 0x18001D614
 * Callers:
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 */

void *sub_18001D614()
{
  if ( dword_1801D3E38 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D3E38);
    if ( dword_1801D3E38 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_1801D3E40, 2);
      atexit(sub_1800F25A0);
      sub_18000C538(&dword_1801D3E38);
    }
  }
  return &unk_1801D3E40;
}
