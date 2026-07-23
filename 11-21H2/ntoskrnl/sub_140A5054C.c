/*
 * XREFs of sub_140A5054C @ 0x140A5054C
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 * Callees:
 *     sub_14039174C @ 0x14039174C (sub_14039174C.c)
 *     sub_14041B0A0 @ 0x14041B0A0 (sub_14041B0A0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140A5054C(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  unsigned __int8 v3; // di
  unsigned __int8 *v4; // rbx
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  unsigned __int8 v8; // al
  unsigned __int16 v9; // dx

  for ( i = qword_140C4BC90; (__int64 *)i != &qword_140C4BC90; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    sub_14042A5E0(v5, a2);
  }
  if ( sub_14039174C() )
  {
    __outbyte(0xFu, 0xFu);
    __outbyte(0xDEu, 0xEu);
    sub_14041B0A0();
    __outbyte(8u, 0);
    __outbyte(0xD0u, 0);
    sub_14041B0A0();
    v3 = 0;
    v4 = (unsigned __int8 *)&unk_140CF69C3;
    do
    {
      if ( v4[1] )
      {
        v6 = *(v4 - 2);
        v7 = *(_QWORD *)(v4 - 19);
        if ( v3 >= 4u )
        {
          __outbyte(v7 + 22, v6);
          v8 = *v4;
          v9 = *(_QWORD *)(v4 - 19) + 20;
        }
        else
        {
          __outbyte(v7 + 11, v6);
          v8 = *v4;
          v9 = *(_QWORD *)(v4 - 19) + 10;
        }
        __outbyte(v9, v8);
        sub_14041B0A0();
      }
      ++v3;
      v4 += 24;
    }
    while ( v3 < 8u );
  }
}
