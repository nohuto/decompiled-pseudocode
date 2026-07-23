/*
 * XREFs of sub_1406529D4 @ 0x1406529D4
 * Callers:
 *     sub_1406528E8 @ 0x1406528E8 (sub_1406528E8.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 */

__int64 sub_1406529D4()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140C10CB0 )
  {
    xmmword_140C10D00 = 0LL;
    if ( BYTE8(xmmword_140C10CB0) )
    {
      *(_QWORD *)&xmmword_140C10D00 = xmmword_140C10CB0;
      DWORD2(xmmword_140C10D00) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140C10D00 = MmMapIoSpaceEx(xmmword_140C10CB0, 2LL * BYTE8(xmmword_140C10CA0), 0x204u);
      if ( (_QWORD)xmmword_140C10D00 )
        DWORD2(xmmword_140C10D00) = 2 * BYTE8(xmmword_140C10CA0);
      else
        return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v0;
}
