/*
 * XREFs of MmPageEntireDriver @ 0x140761010
 * Callers:
 *     sub_140617590 @ 0x140617590 (sub_140617590.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1407610B4 @ 0x1407610B4 (sub_1407610B4.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  void *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx

  if ( (unsigned int)sub_1402FDD20((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = sub_1402FDA80((unsigned __int64)AddressWithinSection, 1);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = (void *)v2[6];
  if ( (dword_140D051B4 & 1) == 0 && (unsigned int)sub_14027B080((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    v5 = sub_140313C70((unsigned __int64)v4);
    v6 = v5 + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12);
    sub_1407610B4(v3);
    sub_1402D8F30(v3, v5, v6 - 8);
  }
  return v4;
}
