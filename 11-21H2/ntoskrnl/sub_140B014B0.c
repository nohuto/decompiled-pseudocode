/*
 * XREFs of sub_140B014B0 @ 0x140B014B0
 * Callers:
 *     sub_140B01388 @ 0x140B01388 (sub_140B01388.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sub_1408271EC @ 0x1408271EC (sub_1408271EC.c)
 */

__int64 __fastcall sub_140B014B0(__int64 a1)
{
  NTSTATUS v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rdi

  xmmword_140C5A918 = 0LL;
  qword_140C5A928 = 0xFFFFFFFFLL;
  xmmword_140C5AB58 = 0LL;
  HIDWORD(xmmword_140C5A918) = -1;
  v1 = -1073741275;
  HIDWORD(xmmword_140C5AB58) = -1;
  xmmword_140C5A8F8 = 0LL;
  qword_140C5AB68 = 0LL;
  xmmword_140C5A908 = 0LL;
  xmmword_140C5AB38 = 0LL;
  xmmword_140C5AB48 = 0LL;
  v2 = sub_140213A40(a1, 1346584902, 0, 0);
  v3 = v2;
  if ( v2 )
  {
    v1 = sub_1408271EC(word_140D00120, 0xEu, (char *)(v2 + 10), 6u);
    if ( v1 >= 0 )
    {
      v1 = sub_1408271EC(word_140CFFEF8, 0x12u, (char *)(v3 + 16), 8u);
      if ( v1 >= 0 )
      {
        v1 = sub_1408271EC(word_140CFFEE8, 0xAu, (char *)(v3 + 28), 4u);
        if ( v1 >= 0 )
        {
          *(_QWORD *)&xmmword_140C5A8F8 = word_140D00120;
          *((_QWORD *)&xmmword_140C5A8F8 + 1) = word_140CFFEE8;
          HIDWORD(xmmword_140C5A918) = *(unsigned __int8 *)(v3 + 8);
          LODWORD(qword_140C5A928) = *(_DWORD *)(v3 + 32);
          *(_QWORD *)&xmmword_140C5AB38 = word_140D00120;
          *((_QWORD *)&xmmword_140C5AB38 + 1) = word_140CFFEF8;
          HIDWORD(xmmword_140C5AB58) = *(_DWORD *)(v3 + 24);
        }
      }
    }
  }
  return (unsigned int)v1;
}
