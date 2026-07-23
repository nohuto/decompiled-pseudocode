/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140B636B4
 * Callers:
 *     MiInitializeSystemVa @ 0x140B635F8 (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetBits @ 0x1402E0530 (RtlSetBits.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 */

__int64 MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140C67080 = (unsigned __int8)ExGenRandom(1);
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C67060;
  xmmword_140C67060 = 0LL;
  xmmword_140C67070 = 0LL;
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
    BYTE13(xmmword_140C67070) &= ~0x20u;
  return 1LL;
}
