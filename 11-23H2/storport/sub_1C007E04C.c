/*
 * XREFs of sub_1C007E04C @ 0x1C007E04C
 * Callers:
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 */

__int64 __fastcall sub_1C007E04C(__int64 a1, int *a2, unsigned int a3, _DWORD *a4)
{
  char v7; // r15
  unsigned int v8; // r14d
  int v9; // edx
  unsigned int v10; // esi
  _DWORD *i; // rbx
  __int16 v12; // dx
  unsigned __int16 v13; // r12
  unsigned int v14; // r13d
  __int16 v15; // r14
  bool v16; // al
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  bool v20; // al
  unsigned int v23; // [rsp+70h] [rbp+50h] BYREF

  v7 = 0;
  memset_0(a4, 0, 0xA8uLL);
  if ( a3 > 0x30 )
  {
    v8 = *a2;
    v23 = *a2;
    sub_1C007A4E8((char *)&v23, 4u);
    if ( a3 < v23 + 4 || (v23 = v8, sub_1C007A4E8((char *)&v23, 4u), a3 = v9 + v23, v9 + v23 > 0x30) )
    {
      v10 = a3 - 48;
      for ( i = a2 + 12; v10 >= 4; i = (_DWORD *)((char *)i + v13) )
      {
        LOWORD(v23) = *(_WORD *)i;
        sub_1C007A4E8((char *)&v23, 2u);
        v12 = *((unsigned __int8 *)i + 3);
        v13 = v12 + 4;
        v14 = (unsigned __int16)(v12 + 4);
        if ( v14 > v10 )
          return v7 == 0 ? 0xC00000BB : 0;
        v15 = v23;
        if ( (_WORD)v23 == 2 )
        {
          if ( (_BYTE)v12 == 12 )
          {
            *((_BYTE *)a4 + 52) = i[1] & 1;
            *((_BYTE *)a4 + 53) = (i[1] & 2) != 0;
            *((_BYTE *)a4 + 54) = (i[1] & 4) != 0;
            *((_BYTE *)a4 + 55) = (i[1] & 8) != 0;
            *((_BYTE *)a4 + 56) = (i[1] & 0x10) != 0;
            *((_BYTE *)a4 + 57) = (i[1] & 0x20) != 0;
          }
          goto LABEL_31;
        }
        if ( (_WORD)v23 == 512 )
        {
          if ( (_BYTE)v12 != 16 )
            goto LABEL_31;
          if ( *a4 != 512 )
            goto LABEL_14;
        }
        if ( (_WORD)v23 != 515 )
        {
          switch ( (_WORD)v23 )
          {
            case 0x201:
              if ( (_BYTE)v12 == 12 )
              {
                v23 = i[1];
                sub_1C007A4E8((char *)&v23, 4u);
                a4[32] = v23;
                *((_BYTE *)a4 + 132) = i[2] & 1;
                *((_BYTE *)a4 + 133) = (i[2] & 2) != 0;
                v16 = (i[2] & 4) != 0;
                *((_BYTE *)a4 + 121) = 1;
                *((_BYTE *)a4 + 134) = v16;
              }
              break;
            case 0x202:
              if ( (_BYTE)v12 == 12 )
              {
                LOWORD(v23) = *((_WORD *)i + 3);
                sub_1C007A4E8((char *)&v23, 2u);
                v17 = (unsigned __int16)v23;
                *((_WORD *)a4 + 68) = v23;
                *(_DWORD *)(a1 + 36) = v17;
                v23 = i[2];
                sub_1C007A4E8((char *)&v23, 4u);
                v18 = v23;
                v19 = *((unsigned __int16 *)a4 + 68);
                a4[35] = v23;
                *(_DWORD *)(a1 + 40) = v18 / v19;
                v23 = i[3];
                sub_1C007A4E8((char *)&v23, 4u);
                a4[36] = v23;
              }
              break;
            case 0x402:
              if ( (_BYTE)v12 == 12 )
              {
                *((_BYTE *)a4 + 148) = 1;
                *((_BYTE *)a4 + 149) = (i[1] & 2) != 0;
                *((_BYTE *)a4 + 150) = (i[1] & 1) == 0;
                *((_BYTE *)a4 + 151) = *((_BYTE *)i + 5) & 1;
              }
              break;
            default:
              if ( (_WORD)v23 == 1027 && (_BYTE)v12 == 16 )
              {
                *((_BYTE *)a4 + 152) = 1;
                v20 = (*((_BYTE *)i + 2) & 0xF0u) >= 0x20 && (i[1] & 0x20) != 0;
                *((_BYTE *)a4 + 153) = v20;
                *((_BYTE *)a4 + 154) = *((_BYTE *)i + 4) >> 7;
                *((_BYTE *)a4 + 155) = (i[1] & 0x40) != 0;
                v23 = i[2];
                sub_1C007A4E8((char *)&v23, 4u);
                a4[39] = v23;
                v23 = i[3];
                sub_1C007A4E8((char *)&v23, 4u);
                a4[40] = v23;
                v23 = i[4];
                sub_1C007A4E8((char *)&v23, 4u);
                a4[41] = v23;
              }
              break;
          }
          goto LABEL_31;
        }
        if ( (_BYTE)v12 == 16 )
        {
LABEL_14:
          *a4 = 512;
          v7 = 1;
          *(_DWORD *)(a1 + 32) = 512;
          LOWORD(v23) = *((_WORD *)i + 2);
          sub_1C007A4E8((char *)&v23, 2u);
          *(_WORD *)(a1 + 28) = v23;
          *((_BYTE *)a4 + 120) = (i[2] & 1) == 0;
          if ( v15 == 515 )
          {
            LOWORD(v23) = *(_WORD *)((char *)i + 9);
            sub_1C007A4E8((char *)&v23, 2u);
            *((_WORD *)a4 + 61) = v23;
            LOWORD(v23) = *(_WORD *)((char *)i + 11);
            sub_1C007A4E8((char *)&v23, 2u);
            *((_WORD *)a4 + 62) = v23;
            *((_BYTE *)a4 + 126) = *((_BYTE *)i + 13);
            *((_BYTE *)a4 + 127) = *((_BYTE *)i + 14);
          }
        }
LABEL_31:
        v10 -= v14;
      }
    }
  }
  return v7 == 0 ? 0xC00000BB : 0;
}
