/*
 * XREFs of sub_18001EB1C @ 0x18001EB1C
 * Callers:
 *     sub_18001ED90 @ 0x18001ED90 (sub_18001ED90.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 */

void *sub_18001EB1C()
{
  if ( dword_1801F7F48 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801F7F48);
    if ( dword_1801F7F48 == -1 )
    {
      Mtx_init_in_situ((_Mtx_t)&unk_1801F7F50, 2);
      atexit(sub_18010DAB0);
      sub_18000C548(&dword_1801F7F48);
    }
  }
  return &unk_1801F7F50;
}
