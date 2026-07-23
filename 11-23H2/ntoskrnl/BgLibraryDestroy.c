/*
 * XREFs of BgLibraryDestroy @ 0x140AF12E8
 * Callers:
 *     BgkDestroy @ 0x140AEEA68 (BgkDestroy.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385840 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140385890 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140AEEA88 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140C0E4B0;
  v2 = 0;
  if ( (dword_140C0E4B0 & 1) == 0
    || (qword_140C0E610 = 0LL, xmmword_140C0E620 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
