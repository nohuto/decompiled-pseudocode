/*
 * XREFs of sub_18001A67C @ 0x18001A67C
 * Callers:
 *     RmActivityImportanceTakeMostImportant @ 0x18001A5B0 (RmActivityImportanceTakeMostImportant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A67C(unsigned int a1, unsigned int a2)
{
  __int16 v2; // bp
  __int16 v3; // di
  __int16 v4; // r11
  __int16 v5; // si
  __int16 v6; // bp
  __int16 v7; // bp
  char v8; // al
  unsigned int v10; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      v2 = (unsigned __int16)a1 >> 11;
      v3 = (unsigned __int16)a1 >> 1;
      v4 = (unsigned __int16)a1 >> 4;
      if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
        v2 = (unsigned __int16)a2 >> 11;
      v6 = (v2 & 1) << 7;
      if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
        v4 = (unsigned __int16)a2 >> 4;
      v7 = 8 * (v4 & 3 | v6);
      if ( (unsigned __int8)(v3 & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
        v3 = (unsigned __int16)a2 >> 1;
      if ( HIBYTE(a1) <= HIBYTE(a2) )
      {
        if ( HIBYTE(a1) >= HIBYTE(a2) )
        {
          HIBYTE(v10) = HIBYTE(a1);
          v8 = BYTE2(a2);
          if ( BYTE2(a1) > BYTE2(a2) )
            v8 = BYTE2(a1);
          BYTE2(v10) = v8;
        }
        else
        {
          BYTE2(v10) = BYTE2(a2);
          HIBYTE(v10) = HIBYTE(a2);
        }
      }
      else
      {
        BYTE2(v10) = BYTE2(a1);
        HIBYTE(v10) = HIBYTE(a1);
      }
      v5 = a1 | a2;
      LOWORD(v10) = ((v5 & 0x40) == 0 ? 1 : 65) | ((v5 & 0x80) != 0 ? 0x80 : 0) | ((v5 & 0x100) != 0 ? 0x100 : 0) | ((v5 & 0x200) != 0 ? 0x200 : 0) | ((v5 & 0x400) != 0 ? 0x400 : 0) | (2 * (v3 & 7 | v7));
      return v10;
    }
    else
    {
      return a1;
    }
  }
  return a2;
}
