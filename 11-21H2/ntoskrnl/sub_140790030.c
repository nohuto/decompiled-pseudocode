/*
 * XREFs of sub_140790030 @ 0x140790030
 * Callers:
 *     sub_14079028C @ 0x14079028C (sub_14079028C.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 * Callees:
 *     sub_140796D80 @ 0x140796D80 (sub_140796D80.c)
 *     sub_1409F5444 @ 0x1409F5444 (sub_1409F5444.c)
 */

char __fastcall sub_140790030(__int64 a1, __int64 a2, char a3, char a4, char a5, int a6)
{
  __int64 v7; // rbp
  __int64 v9; // rbx
  __int16 v10; // ax
  char v12; // [rsp+58h] [rbp+20h] BYREF

  v7 = a2;
  if ( a4 )
    v9 = a5 != 0 ? 103LL : 101LL;
  else
    v9 = a5 != 0 ? 102LL : 100LL;
  LOBYTE(v10) = a6;
  if ( a6 == 1 )
  {
    v12 = a3;
    LOBYTE(a2) = 1;
    sub_140796D80(a1, a2, a4, a5, (__int64)&v12);
    v10 = *(_WORD *)(a1 + 98);
    if ( (v10 & 8) != 0 )
    {
      LOBYTE(v10) = v12;
      *(_BYTE *)(a1 + 100) = v12;
    }
    else
    {
      if ( (v10 & 0x400) != 0 )
      {
        if ( v12 )
        {
          LOBYTE(v10) = sub_1409F5444(v7, a1);
          if ( !(_BYTE)v10 )
          {
            LOBYTE(v10) = -1;
            _InterlockedAnd16((volatile signed __int16 *)(a1 + 98), 0xFBFFu);
          }
        }
      }
      *(_BYTE *)(v9 + a1) = v12 | *(_BYTE *)(v9 + a1) & ~a3;
    }
  }
  else if ( !a6 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *(_BYTE *)(v9 + a1) &= ~a3;
  }
  return v10;
}
