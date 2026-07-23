/*
 * XREFs of sub_14065B6A0 @ 0x14065B6A0
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_140922C44 @ 0x140922C44 (sub_140922C44.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_14065B3DC @ 0x14065B3DC (sub_14065B3DC.c)
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14065C388 @ 0x14065C388 (sub_14065C388.c)
 *     sub_14065C63C @ 0x14065C63C (sub_14065C63C.c)
 *     sub_14065C6C0 @ 0x14065C6C0 (sub_14065C6C0.c)
 *     sub_14065CB84 @ 0x14065CB84 (sub_14065CB84.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_14091D2E4 @ 0x14091D2E4 (sub_14091D2E4.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 */

__int64 __fastcall sub_14065B6A0(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  __int16 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  int v12; // eax
  __int16 *v14; // [rsp+20h] [rbp-59h] BYREF
  __int64 v15; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v16[14]; // [rsp+30h] [rbp-49h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  memset((char *)v16 + 2, 0, 0x66uLL);
  LOWORD(v16[0]) = -2;
  sub_14069F2B4(&v16[2]);
  if ( a1 )
    v4 = sub_14091D2E4(v16, a1);
  else
    v4 = sub_14065C6C0(v16, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      v6 = sub_14065B81C(v16);
      v5 = v6;
      if ( v6 == -2147483622 )
        break;
      if ( v6 < 0 )
        goto LABEL_14;
      sub_14065C388(v16, &v15, &v14);
      v7 = v14;
      v8 = *(_QWORD *)(408LL * SLOWORD(v16[0]) + v16[12] - 392);
      v11 = *(_QWORD *)(sub_14069F1CC(v14) + 16);
      if ( v15 )
      {
        LOBYTE(v9) = 1;
        v12 = sub_140922984(v10, v15, v9);
      }
      else if ( v10 )
      {
        LOBYTE(v9) = 1;
        v12 = sub_140922B20(v10, v7, v9);
      }
      else
      {
        v5 = sub_14065B3DC(v8, (__int64)v7);
        if ( v5 < 0 )
          goto LABEL_14;
        v12 = sub_14065AAAC(v8, v7);
      }
      v5 = v12;
      if ( v12 < 0 )
        goto LABEL_14;
      if ( !v11 )
        sub_14065CB84(v16[12] + 56LL + 408LL * (SLOWORD(v16[0]) - 1));
    }
    v5 = 0;
  }
LABEL_14:
  sub_14065C63C(v16);
  return (unsigned int)v5;
}
