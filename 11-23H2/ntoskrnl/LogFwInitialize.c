/*
 * XREFs of LogFwInitialize @ 0x140AF2A18
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *LogFwInitialize()
{
  dword_140C0E4B0 |= 0x80u;
  qword_140CF7B00 = 0LL;
  qword_140CF7B70 = 0LL;
  qword_140D18050 = 0LL;
  dword_140CF7B24 = 0;
  qword_140CF7B10 = 0LL;
  qword_140CF7B30 = 0LL;
  qword_140CF7B48 = 0LL;
  qword_140CF7B18 = 0LL;
  qword_140CF7B40 = 0LL;
  qword_140CF7B50 = 0LL;
  qword_140CF7B58 = 0LL;
  qword_140CF7B80 = 0LL;
  qword_140CF7B90 = 0LL;
  qword_140CF7B88 = 0LL;
  qword_140CF7B60 = 0LL;
  dword_140CF7B08 = 0;
  dword_140CF7B3C = 0;
  dword_140CF7B20 = 0;
  dword_140CF7B78 = 0;
  dword_140CF7B28 = 0;
  dword_140CF7B38 = 0;
  qword_140C0C9C0 = 1LL;
  qword_140C0B708 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140C0B710 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_140C70D80, 0, sizeof(stru_140C70D80));
}
