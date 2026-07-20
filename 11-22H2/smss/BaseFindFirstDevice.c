/*
 * XREFs of BaseFindFirstDevice @ 0x140014250
 * Callers:
 *     InternalFindFirstFileExW @ 0x140014490 (InternalFindFirstFileExW.c)
 * Callees:
 *     memmove_0 @ 0x140014B43 (memmove_0.c)
 *     memset_0 @ 0x140014B4F (memset_0.c)
 */

__int64 __fastcall BaseFindFirstDevice(const void **a1, __int64 a2)
{
  size_t v4; // r8

  memset_0((void *)(a2 + 4), 0, 0x24CuLL);
  v4 = 520LL;
  *(_DWORD *)a2 = 32;
  if ( *(_WORD *)a1 < 0x208u )
    v4 = *(unsigned __int16 *)a1;
  memmove_0((void *)(a2 + 44), a1[1], v4);
  *(_WORD *)(a2 + 562) = 0;
  return 1LL;
}
