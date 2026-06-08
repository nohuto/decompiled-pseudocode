/*
 * XREFs of WriteIoMemRaw @ 0x1C0003FBC
 * Callers:
 *     PerfControlCpc @ 0x1C00018A0 (PerfControlCpc.c)
 *     WriteGenAddr @ 0x1C00029AC (WriteGenAddr.c)
 *     WriteIoMemRawEx @ 0x1C000402C (WriteIoMemRawEx.c)
 * Callees:
 *     <none>
 */

char __fastcall WriteIoMemRaw(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r11
  char v3; // r8
  char result; // al

  v2 = *(_QWORD *)(a1 + 4);
  v3 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 == 1 )
  {
    switch ( v3 )
    {
      case 8:
        result = a2;
        __outbyte(v2, a2);
        break;
      case 16:
        result = a2;
        __outword(v2, a2);
        break;
      case 32:
        result = a2;
        __outdword(v2, a2);
        break;
    }
  }
  else if ( *(_BYTE *)a1 == 127 && v3 == 64 )
  {
    result = a2;
    __writemsr(v2, a2);
  }
  return result;
}
