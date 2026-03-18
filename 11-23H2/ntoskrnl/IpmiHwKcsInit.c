/*
 * XREFs of IpmiHwKcsInit @ 0x14067789C
 * Callers:
 *     IpmiHwInitializeContext @ 0x1406777A8 (IpmiHwInitializeContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1403359B0 (MmMapIoSpaceEx.c)
 */

__int64 IpmiHwKcsInit()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (_QWORD)xmmword_140C2CC30 )
  {
    xmmword_140C2CC80 = 0LL;
    if ( BYTE8(xmmword_140C2CC30) )
    {
      *(_QWORD *)&xmmword_140C2CC80 = xmmword_140C2CC30;
      DWORD2(xmmword_140C2CC80) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_140C2CC80 = MmMapIoSpaceEx(xmmword_140C2CC30, 2LL * BYTE8(WheaIpmiContext), 0x204u);
      if ( (_QWORD)xmmword_140C2CC80 )
        DWORD2(xmmword_140C2CC80) = 2 * BYTE8(WheaIpmiContext);
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
