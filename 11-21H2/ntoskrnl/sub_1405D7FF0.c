/*
 * XREFs of sub_1405D7FF0 @ 0x1405D7FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140293CD0 @ 0x140293CD0 (sub_140293CD0.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405DAD64 @ 0x1405DAD64 (sub_1405DAD64.c)
 */

char sub_1405D7FF0()
{
  unsigned int v0; // r12d
  bool v1; // r15
  __int64 v2; // rbx
  int v3; // r8d
  __int64 v4; // rcx
  unsigned __int8 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // r13
  __int16 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // si
  __int64 v20; // rdi
  __int64 *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  __int128 v28; // [rsp+50h] [rbp-28h] BYREF
  __int64 v29; // [rsp+60h] [rbp-18h]
  bool v30; // [rsp+C0h] [rbp+48h]
  unsigned int v31; // [rsp+C8h] [rbp+50h] BYREF
  int v32; // [rsp+D0h] [rbp+58h] BYREF
  __int64 *v33; // [rsp+D8h] [rbp+60h]

  v29 = 0LL;
  v28 = 0LL;
  v32 = 0;
  v0 = 0;
  v33 = off_140C03040;
  v27 = 534LL * dword_140C232CC;
  v1 = BYTE3(off_140C03040[v27 + 20]) != 0;
  v30 = v1;
  if ( dword_140C1CF34 )
  {
    while ( 1 )
    {
      v2 = qword_140C1CF38 + 336LL * v0;
      if ( dword_140D05054 == 4 )
        break;
      LOBYTE(v25) = v1;
      sub_140293CD0(
        *(_QWORD *)(v2 + 8),
        *(_QWORD *)(v2 + 32),
        *(unsigned __int16 *)(v2 + 4),
        *(_BYTE *)(v2 + 142),
        v25,
        0,
        0LL);
LABEL_37:
      if ( ++v0 >= dword_140C1CF34 )
        return 1;
    }
    if ( *(_BYTE *)(v2 + 143) && *(_BYTE *)(v2 + 144) )
    {
      if ( !dword_140D05160 )
        goto LABEL_18;
      v3 = *(unsigned __int16 *)(v2 + 4);
      switch ( dword_140D06BF8 )
      {
        case 0:
          LOBYTE(v25) = v1;
          sub_140293CD0(
            *(_QWORD *)(v2 + 16),
            *(_QWORD *)(v2 + 32) & *(_QWORD *)(v2 + 16),
            v3,
            *(_BYTE *)(v2 + 264),
            v25,
            0,
            0LL);
          v4 = *(_QWORD *)(v2 + 24);
          v5 = *(_BYTE *)(v2 + 265);
          v6 = *(_QWORD *)(v2 + 32) & v4;
          v3 = *(unsigned __int16 *)(v2 + 4);
LABEL_16:
          v26 = 0;
          goto LABEL_17;
        case 2:
          LOBYTE(v25) = v1;
          sub_140293CD0(
            *(_QWORD *)(v2 + 24),
            *(_QWORD *)(v2 + 32) & *(_QWORD *)(v2 + 24),
            v3,
            *(_BYTE *)(v2 + 265),
            v25,
            0,
            &v32);
          v4 = *(_QWORD *)(v2 + 16);
          v5 = *(_BYTE *)(v2 + 264);
          goto LABEL_11;
        case 3:
          LOBYTE(v25) = v1;
          sub_140293CD0(
            *(_QWORD *)(v2 + 16),
            *(_QWORD *)(v2 + 32) & *(_QWORD *)(v2 + 16),
            v3,
            *(_BYTE *)(v2 + 264),
            v25,
            0,
            &v32);
          v4 = *(_QWORD *)(v2 + 24);
          v5 = *(_BYTE *)(v2 + 265);
LABEL_11:
          v6 = *(_QWORD *)(v2 + 32) & v4;
          v3 = *(unsigned __int16 *)(v2 + 4);
          v26 = v32;
LABEL_17:
          LOBYTE(v25) = v1;
          sub_140293CD0(v4, v6, v3, v5, v25, v26, 0LL);
LABEL_18:
          v7 = *(_QWORD *)(v2 + 24);
          v8 = ~*(_QWORD *)(v2 + 32);
          if ( (v7 & v8) != 0 )
          {
            v9 = 0;
            v10 = *(_WORD *)(v2 + 4);
            v11 = v7 & *(_QWORD *)(v2 + 40);
            v31 = 0;
            v12 = v8 & v11;
            *(_QWORD *)&v28 = 0LL;
            v13 = v33;
            *((_QWORD *)&v28 + 1) = v12;
            LOWORD(v29) = v10;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v31, (unsigned __int16 **)&v28) )
            {
              v14 = *(_QWORD *)(sub_140348800(v31) + 33984);
              if ( v14 )
              {
                v9 = BYTE2(v13[v27 + 537]);
                *(_BYTE *)(v14 + 238) = v9;
              }
            }
            v1 = v30;
            LOWORD(v29) = v10;
            v15 = v12 ^ *(_QWORD *)(v2 + 24);
            *(_QWORD *)&v28 = 0LL;
            *((_QWORD *)&v28 + 1) = v15;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v31, (unsigned __int16 **)&v28) )
            {
              v18 = *(_QWORD *)(sub_140348800(v31) + 33984);
              if ( v18 )
                *(_BYTE *)(v18 + 238) = 0;
            }
            v19 = 0;
            if ( !byte_140D068E1 )
            {
              v20 = *(_QWORD *)(v2 + 16) & v8;
              v21 = v33;
              *((_QWORD *)&v28 + 1) = v20;
              v31 = 0;
              LOWORD(v29) = v10;
              *(_QWORD *)&v28 = 0LL;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v31, (unsigned __int16 **)&v28) )
              {
                v22 = *(_QWORD *)(sub_140348800(v31) + 33984);
                if ( v22 )
                {
                  v19 = BYTE1(v21[v27 + 537]);
                  *(_BYTE *)(v22 + 237) = v19;
                }
              }
              v1 = v30;
              LOWORD(v29) = v10;
              *((_QWORD *)&v28 + 1) = *(_QWORD *)(v2 + 16) ^ v20;
              *(_QWORD *)&v28 = 0LL;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v31, (unsigned __int16 **)&v28) )
              {
                v23 = *(_QWORD *)(sub_140348800(v31) + 33984);
                if ( v23 )
                  *(_BYTE *)(v23 + 237) = 0;
              }
            }
            LOBYTE(v17) = v9;
            LOBYTE(v16) = v19;
            sub_1405DAD64(v2, v16, v17);
          }
          goto LABEL_37;
      }
    }
    else
    {
      v3 = *(unsigned __int16 *)(v2 + 4);
    }
    v5 = *(_BYTE *)(v2 + 142);
    v6 = *(_QWORD *)(v2 + 32);
    v4 = *(_QWORD *)(v2 + 8);
    goto LABEL_16;
  }
  return 1;
}
