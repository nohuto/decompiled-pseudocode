/*
 * XREFs of sub_1405234F0 @ 0x1405234F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

__int64 __fastcall sub_1405234F0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  char v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  __int64 i; // r8
  unsigned __int8 v10; // al

  v4 = a1 + a3;
  v5 = a1;
  sub_14022D9F0(a1, a2, a3);
  do
  {
    __outbyte(0x70u, 0xAu);
    v6 = __inbyte(0x71u);
  }
  while ( v6 < 0 );
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  v8 = v7 | 0x80;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    __outbyte(0x71u, v8);
    if ( v5 >= v4 )
      break;
    __outbyte(0x70u, v5);
    v8 = *(_BYTE *)(i + a2);
    ++v5;
  }
  __outbyte(0x70u, 0xBu);
  v10 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v10 & 0x7F);
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return (unsigned int)i;
}
