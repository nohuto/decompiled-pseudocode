/*
 * XREFs of sub_140B18084 @ 0x140B18084
 * Callers:
 *     sub_140B179D4 @ 0x140B179D4 (sub_140B179D4.c)
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E08C8 @ 0x1403E08C8 (sub_1403E08C8.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

char __fastcall sub_140B18084(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  _BYTE *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r15
  unsigned __int64 v7; // r13
  char *v8; // r14
  char result; // al
  char v10; // dl
  char v11; // r8
  char v12; // cl
  int v13; // ebx
  int v14; // ecx
  char v15; // r8
  char v16; // dl
  unsigned int v18; // [rsp+24h] [rbp-3Ch]
  _TBYTE Buf2; // [rsp+30h] [rbp-30h] BYREF
  char v21; // [rsp+3Ah] [rbp-26h]
  _TBYTE Buf1; // [rsp+40h] [rbp-20h] BYREF
  char v23; // [rsp+4Ah] [rbp-16h]

  Buf1 = 0.0;
  v4 = (_BYTE *)(a1 + 2);
  v23 = 0;
  v5 = a3;
  v6 = a1;
  v7 = a2 + a1 - 5;
  if ( a1 + 2 < v7 )
  {
    v8 = (char *)(a1 + 6);
    do
    {
      if ( *v4 == 47
        && v4[3] == 47
        && (unsigned __int8)(*(v4 - 1) - 48) <= 9u
        && (unsigned __int8)(v4[1] - 48) <= 9u
        && (unsigned __int8)(v4[2] - 48) <= 9u )
      {
        v10 = *v8;
        if ( (unsigned __int8)(*v8 - 48) <= 9u )
        {
          v11 = v4[5];
          if ( (unsigned __int8)(v11 - 48) <= 9u )
          {
            *(_DWORD *)((char *)&Buf2 + 5) = *(_DWORD *)v6;
            v12 = BYTE5(Buf2);
            HIBYTE(Buf2) = *(_BYTE *)(v6 + 4);
            BYTE2(Buf2) = v10;
            BYTE3(Buf2) = v11;
            v21 = 0;
            if ( (unsigned __int8)(BYTE5(Buf2) - 48) > 9u )
              v12 = 48;
            BYTE7(Buf2) = 0;
            BYTE5(Buf2) = v12;
            BYTE4(Buf2) = 0;
            v18 = sub_1403E08C8((unsigned __int8 *)&Buf2 + 2, 0LL, 0x10u);
            v13 = sub_1403E08C8((unsigned __int8 *)&Buf2 + 5, 0LL, 0x10u);
            v14 = sub_1403E08C8((unsigned __int8 *)&Buf2 + 8, 0LL, 0x10u);
            if ( (unsigned int)(v13 - 1) <= 0x11 && (unsigned int)(v14 - 1) <= 0x30 )
            {
              if ( a4
                && (v15 = v4[6], (unsigned __int8)(v15 - 48) <= 9u)
                && (v16 = v4[7], (unsigned __int8)(v16 - 48) <= 9u)
                && (*(_WORD *)v8 == 14641 || *(_WORD *)v8 == 12338) )
              {
                LOBYTE(Buf2) = *v8;
                BYTE1(Buf2) = v4[5];
                BYTE2(Buf2) = v15;
                BYTE3(Buf2) = v16;
              }
              else
              {
                LOWORD(Buf2) = 12338;
                if ( v18 >= 0x80 )
                  LOWORD(Buf2) = 14641;
              }
              BYTE7(Buf2) = 47;
              BYTE4(Buf2) = 47;
              if ( memcmp(&Buf1, &Buf2, 0xAuLL) < 0 )
                Buf1 = Buf2;
              v4 += 2;
              v6 += 2LL;
              v8 += 2;
            }
          }
        }
      }
      ++v4;
      ++v6;
      ++v8;
    }
    while ( (unsigned __int64)v4 < v7 );
    v5 = a3;
  }
  if ( LOBYTE(Buf1) )
  {
    result = 1;
    *(_DWORD *)v5 = *(_DWORD *)((char *)&Buf1 + 5);
    *(_BYTE *)(v5 + 4) = HIBYTE(Buf1);
    *(_WORD *)(v5 + 6) = WORD1(Buf1);
    *(_BYTE *)(v5 + 5) = 47;
    *(_BYTE *)(v5 + 8) = 0;
  }
  else
  {
    *(_BYTE *)v5 = 0;
    return 0;
  }
  return result;
}
