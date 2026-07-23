/*
 * XREFs of IpmiHwKcsInit @ 0x140677DEC
 * Callers:
 *     IpmiHwInitializeContext @ 0x140677CF8 (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140335C40 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140C2CBF0 )
  {
    xmmword_140C2CC40 = 0LL;
    if ( BYTE8(xmmword_140C2CBF0) )
    {
      *(_QWORD *)&xmmword_140C2CC40 = xmmword_140C2CBF0;
      DWORD2(xmmword_140C2CC40) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140C2CC40 = MmMapIoSpaceEx(xmmword_140C2CBF0, 2LL * BYTE8(WheaIpmiContext), 0x204u);
      if ( (_QWORD)xmmword_140C2CC40 )
        DWORD2(xmmword_140C2CC40) = 2 * BYTE8(WheaIpmiContext);
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
