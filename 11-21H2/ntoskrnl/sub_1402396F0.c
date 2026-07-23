/*
 * XREFs of sub_1402396F0 @ 0x1402396F0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1405723EC @ 0x1405723EC (sub_1405723EC.c)
 *     sub_1405DA0C4 @ 0x1405DA0C4 (sub_1405DA0C4.c)
 *     sub_1405DB5F4 @ 0x1405DB5F4 (sub_1405DB5F4.c)
 *     sub_1405DC7AC @ 0x1405DC7AC (sub_1405DC7AC.c)
 *     sub_1405DC8A8 @ 0x1405DC8A8 (sub_1405DC8A8.c)
 */

char sub_1402396F0()
{
  unsigned int v1; // ebx
  __int64 *v2; // r14
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // r13d
  unsigned int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int8 *v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  __int64 v14; // r14
  unsigned __int64 v15; // r14
  unsigned int v16; // r15d
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int16 v20; // dx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r13
  __int16 v27; // ax
  __int16 v28; // ax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int8 *v31; // r9
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // r14d
  int v35; // eax
  unsigned int v36; // r8d
  unsigned int v37; // eax
  unsigned int v38; // r15d
  bool v39; // zf
  int v40; // eax
  char v41; // cl
  char v42; // dl
  char v43; // r13
  __int64 v44; // rbx
  int v45; // r9d
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // eax
  __int64 v49; // [rsp+38h] [rbp-C8h]
  unsigned int v50; // [rsp+80h] [rbp-80h]
  unsigned __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-70h]
  __int128 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h]
  unsigned int i; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int8 *v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  char *v63; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v64; // [rsp+F8h] [rbp-8h]
  __int64 *v65; // [rsp+100h] [rbp+0h]
  _QWORD v66[2]; // [rsp+108h] [rbp+8h] BYREF
  __int16 v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+11Ah] [rbp+1Ah]
  __int16 v69; // [rsp+11Eh] [rbp+1Eh]
  unsigned int v70; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v71; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v72; // [rsp+180h] [rbp+80h]
  int v73; // [rsp+188h] [rbp+88h]

  v53 = 0LL;
  v54 = 0LL;
  v70 = 0;
  v51 = 0LL;
  v60 = 0LL;
  v57 = 0LL;
  if ( dword_140C1CF20 )
  {
    v1 = 0;
    v50 = 0;
    v2 = &off_140C03040[534 * dword_140C232CC + 5];
    v65 = v2;
    v3 = 100 * *((unsigned __int8 *)v2 + 124);
    for ( i = v3; v1 < dword_140C1CF34; v50 = v1 )
    {
      v4 = qword_140C1CF38 + 336LL * v1;
      v62 = v4;
      if ( (*(_BYTE *)(v4 + 146) & 1) == 0 )
      {
        v5 = 0LL;
        v6 = *(unsigned __int8 *)(v4 + 135);
        *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
        v7 = *(unsigned __int8 *)(v4 + 137);
        v68 = 0;
        v69 = 0;
        if ( (unsigned __int8)v6 >= (unsigned __int8)v7 )
          v6 = v7;
        v71 = 0;
        v67 = *(_WORD *)(v4 + 4);
        v66[1] = *(_QWORD *)(v4 + 8);
        v72 = v6;
        v66[0] = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v71, v66) )
        {
          v8 = sub_140348800(v71);
          if ( *(_DWORD *)(v8 + 34012) >= v3 )
            v5 |= *(_QWORD *)(v8 + 200);
        }
        v59 = v5;
        v9 = MEMORY[0xFFFFF78000000008] / (unsigned __int64)(unsigned int)(10000 * dword_140D05254);
        *(_BYTE *)(v4 + 288) = 0;
        *(_QWORD *)(v4 + 272) = v9;
        if ( v9 != *(_QWORD *)(v4 + 280) )
        {
          *(_BYTE *)(v4 + 288) = 1;
          *(_QWORD *)(v4 + 280) = v9;
        }
        v73 = 0;
        v10 = (unsigned __int8 *)(v4 + 128);
        v11 = (__int64 *)(v4 + 56);
        v63 = (char *)v2 - v4;
        v58 = (unsigned __int8 *)(v4 + 128);
        v61 = v4 + 56;
        do
        {
          v12 = *(v11 - 5);
          v56 = v12;
          if ( !v12 )
            break;
          v13 = 0x100000;
          if ( (unsigned __int8)byte_140C1CF31 <= 1u )
          {
            v14 = *v11;
          }
          else
          {
            v14 = 0LL;
            LOWORD(v54) = *(_WORD *)(v4 + 4);
            *((_QWORD *)&v53 + 1) = *v11;
            *(_QWORD *)&v53 = 0LL;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v70, &v53) )
              v14 |= *(_QWORD *)(sub_140348800(v70) + 34912);
          }
          v15 = v12 & v14;
          v64 = v15;
          if ( v15 )
            v13 = 1114112;
          v71 = v13;
          v16 = v6;
          if ( *v10
             - ((unsigned int)((0x101010101010101LL
                              * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) <= v6 )
            v16 = *v10
                - ((unsigned int)((0x101010101010101LL
                                 * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                   + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                   + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
          v17 = 0LL;
          LODWORD(v18) = 0;
          v52 = 0LL;
          if ( !byte_140D068E5 )
          {
            v70 = dword_140C2B1C0;
            v19 = sub_140348800((unsigned int)dword_140C2B1C0);
            v20 = *(_WORD *)(v4 + 4);
            if ( *(unsigned __int8 *)(v19 + 208) == v20 )
            {
              v21 = *(_QWORD *)(v19 + 200);
              if ( (v21 & v12) != 0 )
              {
                *(_QWORD *)&v53 = 0LL;
                LOWORD(v54) = v20;
                *((_QWORD *)&v53 + 1) = v21;
                while ( !(unsigned int)KeEnumerateNextProcessor(&v70, &v53) && (unsigned int)v18 < v16 )
                {
                  v22 = sub_140348800(v70);
                  v23 = *(_QWORD *)(v22 + 200);
                  if ( (v23 & v15) == 0 )
                  {
                    if ( (unsigned __int8)byte_140C1CF31 > 1u )
                      v23 = *(_QWORD *)(v22 + 34912);
                    v13 |= 0x100u;
                    v71 = v13;
                    v17 |= v23;
                    v18 = (0x101010101010101LL
                         * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
                  }
                }
                v4 = v62;
                v12 = v56;
                v52 = v17;
              }
            }
          }
          v24 = sub_1405723EC(*(unsigned __int16 *)(v4 + 4), v12, &v51);
          v25 = v51;
          LODWORD(v26) = v24;
          if ( v24 )
          {
            if ( (unsigned __int8)byte_140C1CF31 > 1u )
            {
              v27 = *(_WORD *)(v4 + 4);
              *(_QWORD *)&v53 = 0LL;
              LOWORD(v54) = v27;
              *((_QWORD *)&v53 + 1) = v51;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v70, &v53) )
                v25 |= *(_QWORD *)(sub_140348800(v70) + 34912);
              v51 = v25;
              v26 = (0x101010101010101LL
                   * ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                     + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                     + ((((v25 - ((v25 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                       + (((v25 - ((v25 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            }
            v28 = *(_WORD *)(v4 + 4);
            *(_QWORD *)&v53 = 0LL;
            LOWORD(v54) = v28;
            *((_QWORD *)&v53 + 1) = v25;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v70, &v53) && (unsigned int)v18 < v16 )
            {
              v29 = sub_140348800(v70);
              v30 = *(_QWORD *)(v29 + 200);
              if ( (v30 & v15) == 0 )
              {
                if ( (unsigned __int8)byte_140C1CF31 > 1u )
                  v30 = *(_QWORD *)(v29 + 34912);
                v13 |= 0x10u;
                v52 |= v30;
                v71 = v13;
                v18 = (0x101010101010101LL
                     * ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                       + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                       + ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
              }
            }
          }
          v31 = v58;
          v32 = v58[2];
          if ( (unsigned int)v18 < v32 && (unsigned int)v18 < v16 )
          {
            LODWORD(v18) = v16;
            if ( v32 < v16 )
              LODWORD(v18) = v58[2];
            v13 |= 4u;
            v71 = v13;
          }
          v33 = v58[4];
          v34 = v16;
          if ( v16 > v33 && (unsigned int)v18 < v16 )
          {
            v13 |= 8u;
            v34 = v58[4];
            v71 = v13;
            if ( v33 <= (unsigned int)v18 )
              v34 = v18;
          }
          v35 = *v58;
          if ( byte_140C239E0 )
          {
            v13 |= 0x40000u;
            v36 = *v58;
            v71 = v13;
          }
          else
          {
            v36 = v58[10];
            if ( (unsigned __int8)v36 >= (unsigned __int8)v35 )
              v36 = *v58;
            if ( dword_140C204A4 && (v35 * (unsigned int)v58[(_QWORD)v63 - 49] + 50) / 0x64 > v36 )
            {
              v13 |= 0x40u;
              v36 = (v35 * (unsigned int)v58[(_QWORD)v63 - 49] + 50) / 0x64;
              v71 = v13;
            }
            if ( (unsigned __int8)byte_140C1CF31 > 1u )
              v36 = (unsigned __int8)byte_140C1CF31
                  - 1
                  + v36
                  - ((unsigned __int8)byte_140C1CF31 - 1 + v36) % (unsigned __int8)byte_140C1CF31;
          }
          v37 = v36 + v26;
          v58[10] = v36;
          v38 = v18;
          if ( v36 + (unsigned int)v26 >= v34 )
            v37 = v34;
          if ( v37 > (unsigned int)v18 )
            v38 = v37;
          v72 -= v34;
          v39 = byte_140D069A7 == 0;
          v31[15] = v38;
          if ( v39 )
          {
            v34 = v38;
            v71 = v13 | 0x200000;
          }
          v40 = 0;
          v41 = 0;
          v42 = 0;
          if ( byte_140D068BC )
          {
            v40 = *(unsigned __int8 *)(v4 + 296);
            v41 = *(_BYTE *)(v4 + 328);
            v42 = *(_BYTE *)(v4 + 312);
          }
          v43 = v64;
          v44 = v56 & v59;
          sub_1405DC8A8(
            *(unsigned __int16 *)(v4 + 4),
            v56,
            v56 & *(_DWORD *)(v4 + 40),
            v56 & v59,
            v38,
            v34,
            v64,
            v52,
            (__int64)&v60,
            (__int64)&v57,
            (__int64)&v71,
            v4 + 272,
            v40,
            v42,
            v41);
          LOBYTE(v45) = v34;
          v46 = ~v56;
          LOBYTE(v47) = v38;
          *(_QWORD *)(v4 + 32) = v60 | v57 | *(_QWORD *)(v4 + 32) & ~v56;
          *(_QWORD *)(v4 + 48) = v57 | v46 & *(_QWORD *)(v4 + 48);
          v49 = v44;
          LODWORD(v44) = v73;
          sub_1405DB5F4(v4, v73, v47, v45, v18, v43, v52, v49, v25, v71);
          v11 = (__int64 *)(v61 + 8);
          v6 = v72;
          v10 = v58 + 1;
          v73 = v44 + 1;
          v61 += 8LL;
          ++v58;
        }
        while ( (unsigned int)(v44 + 1) < 2 );
        v1 = v50;
        v2 = v65;
        v3 = i;
      }
      ++v1;
    }
    sub_1405DC7AC();
    if ( dword_140D048E0 != (dword_140D01530 != 0) || (v48 = 0, dword_140D048E4) )
      v48 = 1;
    dword_140D048E0 = dword_140D01530 != 0;
    dword_140D048E4 = 0;
    if ( v48 )
      sub_1405DA0C4();
  }
  return 1;
}
