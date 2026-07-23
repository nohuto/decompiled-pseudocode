/*
 * XREFs of sub_14022D9C0 @ 0x14022D9C0
 * Callers:
 *     sub_14022D82C @ 0x14022D82C (sub_14022D82C.c)
 *     sub_140396AF4 @ 0x140396AF4 (sub_140396AF4.c)
 *     sub_1405184BC @ 0x1405184BC (sub_1405184BC.c)
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

char sub_14022D9C0()
{
  int v0; // ebx
  char result; // al

  sub_14022D9F0();
  v0 = 0;
  __outbyte(0x70u, 0xAu);
  while ( 1 )
  {
    result = __inbyte(0x71u);
    if ( result >= 0 )
      break;
    if ( ++v0 == 100 )
    {
      _InterlockedExchange(&dword_140C0B460, -1);
      v0 = 0;
      if ( byte_140C4C1F0 )
        _enable();
      sub_14022D9F0();
    }
    __outbyte(0x70u, 0xAu);
  }
  return result;
}
