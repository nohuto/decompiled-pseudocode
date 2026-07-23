/*
 * XREFs of sub_140523400 @ 0x140523400
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022D9F0 @ 0x14022D9F0 (sub_14022D9F0.c)
 */

__int64 __fastcall sub_140523400(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  char v6; // al
  __int64 v7; // r8
  unsigned __int8 v8; // al

  v4 = a1 + a3;
  v5 = a1;
  sub_14022D9F0(a1, a2, a3);
  do
  {
    __outbyte(0x70u, 0xAu);
    v6 = __inbyte(0x71u);
  }
  while ( v6 < 0 );
  v7 = 0LL;
  while ( v5 < v4 )
  {
    __outbyte(0x70u, v5);
    v8 = __inbyte(0x71u);
    ++v5;
    *(_BYTE *)(v7 + a2) = v8;
    v7 = (unsigned int)(v7 + 1);
  }
  _InterlockedExchange(&dword_140C0B460, -1);
  if ( byte_140C4C1F0 )
    _enable();
  return (unsigned int)v7;
}
