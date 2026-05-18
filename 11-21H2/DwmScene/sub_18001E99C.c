/*
 * XREFs of sub_18001E99C @ 0x18001E99C
 * Callers:
 *     sub_18001E4D4 @ 0x18001E4D4 (sub_18001E4D4.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 */

void *sub_18001E99C()
{
  if ( dword_1801F7ED0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801F7ED0);
    if ( dword_1801F7ED0 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_1801F7EE0, 2);
      atexit(sub_18010DA90);
      sub_18000C548(&dword_1801F7ED0);
    }
  }
  return &unk_1801F7EE0;
}
