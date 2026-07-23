/*
 * XREFs of sub_14037443C @ 0x14037443C
 * Callers:
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 *     sub_140374278 @ 0x140374278 (sub_140374278.c)
 * Callees:
 *     sub_1403744D8 @ 0x1403744D8 (sub_1403744D8.c)
 *     sub_140374864 @ 0x140374864 (sub_140374864.c)
 */

__int64 __fastcall sub_14037443C(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 128);
  v7 = 7;
  if ( v5 > a3 )
  {
    do
    {
      v8 = v5 - v4;
      if ( v7 )
      {
        v9 = *(_QWORD *)(a1 + 8LL * v7 + 40);
        if ( v9 > v8 )
          v9 = v8;
        v8 = v9;
      }
      if ( v8 )
      {
        LOBYTE(a3) = a2;
        sub_1403744D8(a1, v8, a3, v7, 80);
        if ( !v7 )
          break;
      }
      v5 = *(_QWORD *)(a1 + 128);
      --v7;
    }
    while ( v5 > v4 );
  }
  LOBYTE(v5) = a2;
  return sub_140374864(a1, v5);
}
