/*
 * XREFs of sub_18001D4F0 @ 0x18001D4F0
 * Callers:
 *     sub_18001D194 @ 0x18001D194 (sub_18001D194.c)
 * Callees:
 *     atexit @ 0x18000B968 (atexit.c)
 *     sub_18000C538 @ 0x18000C538 (sub_18000C538.c)
 *     sub_18000C5A0 @ 0x18000C5A0 (sub_18000C5A0.c)
 */

void *sub_18001D4F0()
{
  if ( dword_1801D3DC8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5A0(&dword_1801D3DC8);
    if ( dword_1801D3DC8 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_1801D3DD0, 2);
      atexit(sub_1800F2580);
      sub_18000C538(&dword_1801D3DC8);
    }
  }
  return &unk_1801D3DD0;
}
