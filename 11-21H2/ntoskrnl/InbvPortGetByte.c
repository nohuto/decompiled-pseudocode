/*
 * XREFs of InbvPortGetByte @ 0x1406543F8
 * Callers:
 *     HdlspDispatch @ 0x140AA8ED0 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x140AA9660 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  if ( a1 < 4 && *((_QWORD *)&Ports + 5 * a1) )
  {
    if ( *((_BYTE *)&Ports + 40 * a1 + 33) )
    {
      *a2 = *((_BYTE *)&Ports + 40 * a1 + 32);
      *((_BYTE *)&Ports + 40 * a1 + 33) = 0;
      return 1;
    }
    if ( !(*(unsigned int (__fastcall **)(char *))(UartHardwareDriver + 16))((char *)&Ports + 40 * a1) )
      return 1;
  }
  return 0;
}
