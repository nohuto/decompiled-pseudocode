/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140B5FB44
 * Callers:
 *     MiInitializeSystemVa @ 0x140B5FA88 (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 */

__int64 MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140C66F80 = (unsigned __int8)ExGenRandom(1);
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C66F60;
  xmmword_140C66F60 = 0LL;
  xmmword_140C66F70 = 0LL;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x100000) == 0 )
    BYTE13(xmmword_140C66F70) &= ~0x20u;
  return 1LL;
}
