/*
 * XREFs of sub_1406520B8 @ 0x1406520B8
 * Callers:
 *     sub_140652340 @ 0x140652340 (sub_140652340.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1406520B8(__int64 a1)
{
  __int64 v2; // r9
  unsigned int v3; // eax

  memset((void *)(a1 + 88), 0, 0x40uLL);
  v2 = *(_QWORD *)(a1 + 176);
  if ( v2 )
  {
    v3 = 4;
    if ( *(_DWORD *)(v2 + 8) < 4u )
      v3 = *(_DWORD *)(v2 + 8);
    memmove((void *)(a1 + 88), (const void *)(v2 + 12), 16LL * v3);
  }
  return 0LL;
}
