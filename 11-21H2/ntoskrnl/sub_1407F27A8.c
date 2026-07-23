/*
 * XREFs of sub_1407F27A8 @ 0x1407F27A8
 * Callers:
 *     sub_1407F22AC @ 0x1407F22AC (sub_1407F22AC.c)
 * Callees:
 *     <none>
 */

bool sub_1407F27A8()
{
  char v0; // dl

  v0 = 0;
  switch ( (_DWORD)xmmword_140C20BD0 )
  {
    case 0:
      return (xmmword_140C20BF8 & 0xFFFFFFFD) == 0;
    case 1:
      if ( (_DWORD)xmmword_140C20BF8 == 1 )
        return *((_QWORD *)&xmmword_140C20BF8 + 1) == (_QWORD)xmmword_140C20BE0;
      break;
    case 2:
      return (xmmword_140C20BF8 & 0xFFFFFFFD) == 0;
    case 3:
      return (_DWORD)xmmword_140C20BF8 == 5;
  }
  return v0;
}
