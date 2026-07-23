/*
 * XREFs of sub_140B07614 @ 0x140B07614
 * Callers:
 *     sub_140B071D0 @ 0x140B071D0 (sub_140B071D0.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 sub_140B07614()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140C51B00 = (unsigned __int8)sub_140363220(1);
  xmmword_140C51AE0 = 0LL;
  BitMapHeader.Buffer = (PULONG)&xmmword_140C51AE0;
  xmmword_140C51AF0 = 0LL;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( sub_140317A10(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (dword_140D06880 & 0x100000) == 0 )
    *((_DWORD *)&xmmword_140C51AE0 + 7) &= ~0x2000u;
  return 1LL;
}
