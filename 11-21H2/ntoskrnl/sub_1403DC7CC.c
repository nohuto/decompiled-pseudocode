/*
 * XREFs of sub_1403DC7CC @ 0x1403DC7CC
 * Callers:
 *     sub_140A7131C @ 0x140A7131C (sub_140A7131C.c)
 * Callees:
 *     <none>
 */

bool sub_1403DC7CC()
{
  char v0; // bl

  v0 = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( BYTE4(xmmword_140C31E60) )
    {
      v0 = 1;
      BYTE4(xmmword_140C31E60) = 0;
    }
    else
    {
      return (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
    }
  }
  return v0;
}
