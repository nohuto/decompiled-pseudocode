/*
 * XREFs of sub_1403BD8C8 @ 0x1403BD8C8
 * Callers:
 *     sub_1403BCA40 @ 0x1403BCA40 (sub_1403BCA40.c)
 * Callees:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1403BD8C8()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r14
  unsigned int *v3; // r15
  unsigned int v4; // esi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // r12d
  int v8; // esi
  bool v9; // zf
  unsigned int v10; // esi
  unsigned int v11; // r13d
  __int64 v12; // rbx
  unsigned int *v13; // r15
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v16; // edi
  int v17; // eax
  char v18; // cl
  int v20; // r9d
  unsigned __int8 v21; // dl
  signed __int32 v22[8]; // [rsp+8h] [rbp-100h] BYREF
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v24; // [rsp+30h] [rbp-D8h]
  _QWORD v25[18]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v28; // [rsp+D8h] [rbp-30h]
  _OWORD v29[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v30; // [rsp+100h] [rbp-8h]

  LOWORD(v23) = 0;
  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  v0 = sub_1403BE664(1413828680LL);
  v2 = v0;
  if ( v0 )
  {
    if ( !*(_BYTE *)(v0 + 40) && (int)sub_1403B36F4(1, v1, (char *)&v23 + 1) >= 0 )
    {
      qword_140C4A1D0 = *(_QWORD *)(v2 + 44);
      if ( !HIDWORD(qword_140C4A1D0) || BYTE1(v23) )
      {
        v27 = sub_1403BE7F0(qword_140C4A1D0, 1024LL, 0LL);
        v3 = (unsigned int *)v27;
        if ( v27 )
        {
          if ( (int)sub_1403BE4F0(qword_140C4A1D0, 1024LL) >= 0 )
          {
            v4 = *v3;
            v5 = HIWORD(*v3);
            if ( v5 )
            {
              if ( v5 != 0xFFFF )
              {
                dword_140C4A1BC = 2;
                if ( RtlCompareMemory((const void *)(v2 + 10), "VMWARE", 6uLL) == 6 )
                  dword_140C4A1BC = 1;
                if ( (v4 & 0x8000) != 0 )
                  byte_140C4A1D8 = 1;
                v6 = (((unsigned __int64)v3[1] >> 1) + 1000000000000000LL) / v3[1];
                v28 = v6;
                if ( v5 != 4318 )
                {
                  v7 = 1;
                  v8 = (v4 >> 8) & 0x1F;
                  v9 = v8 == -1;
                  v10 = v8 + 1;
                  v11 = 0;
                  if ( v9 )
                    goto LABEL_29;
                  v12 = (unsigned int)v6;
                  v13 = v3 + 64;
                  v26 = (unsigned int)v6;
                  while ( 1 )
                  {
                    memset(v25, 0, sizeof(v25));
                    v30 = 0LL;
                    v25[11] = v29;
                    v25[0] = 0x9000000001LL;
                    v25[1] = sub_1403BE770;
                    v25[3] = sub_1405230C0;
                    v25[4] = sub_140523100;
                    v25[5] = sub_140372C40;
                    memset((char *)v29 + 4, 0, 20);
                    HIDWORD(v25[17]) = (v11 + 1) | (*(unsigned __int8 *)(v2 + 52) << 16);
                    *((_QWORD *)&v29[1] + 1) = qword_140C4A1D0;
                    v25[13] = v12;
                    v25[12] = 0x1F00000028LL;
                    v25[16] = 0x100000001LL;
                    LODWORD(v25[17]) = 3;
                    v25[14] = 0x3000000001LL;
                    v24 = v11 + 1;
                    LODWORD(v29[0]) = v11;
                    v15 = *v13 & 0xFFFFBFFB;
                    *v13 = v15;
                    _InterlockedOr(v22, 0);
                    if ( (v15 & 0x10) != 0 )
                    {
                      v16 = 112;
                      BYTE12(v29[0]) = 1;
                      HIDWORD(v25[14]) = 112;
                    }
                    else
                    {
                      v16 = HIDWORD(v25[14]);
                    }
                    if ( (v15 & 0x20) != 0 )
                    {
                      *v13 = v15 | 0x100;
                      _InterlockedOr(v22, 0);
                      v15 = *v13;
                      if ( (*v13 & 0x100) == 0 )
                        goto LABEL_27;
                      v16 = HIDWORD(v25[14]);
                    }
                    LODWORD(v30) = v15;
                    if ( byte_140C4A1D8 )
                    {
                      v17 = sub_1403B36F4(2, v14, (char *)&v23);
                      v18 = v23;
                      if ( v17 < 0 )
                        v18 = 0;
                      LOBYTE(v23) = v18;
                      if ( !v11 )
                      {
                        v16 |= 0x100u;
                        LODWORD(v25[15]) = v18 == 0 ? 2 : 0;
                        v7 |= 4u;
LABEL_33:
                        HIDWORD(v25[14]) = v16;
LABEL_25:
                        if ( (v16 & 0xF00) != 0 )
                          sub_1403BE0BC(v25, 0LL);
                        goto LABEL_27;
                      }
                      if ( v11 == 1 )
                      {
                        LODWORD(v25[15]) = 8;
                        v16 |= 0x100u;
                        v7 |= 0x100u;
                        goto LABEL_33;
                      }
                      if ( (v15 & 0x8000) != 0 )
                        goto LABEL_25;
                    }
                    else
                    {
                      v20 = ~v7 & v13[1];
                      if ( v20 )
                      {
                        v21 = 0;
                        while ( ((1 << v21) & v20) == 0 )
                        {
                          if ( ++v21 >= 0x20u )
                          {
                            LOWORD(v16) = WORD2(v25[14]);
                            goto LABEL_25;
                          }
                        }
                        v16 = HIDWORD(v25[14]) | 0x200;
                        HIDWORD(v25[15]) = v21 + (unsigned __int16)word_140C4A1C0;
                        v7 |= 1 << v21;
                        BYTE4(v29[0]) = v21;
                        goto LABEL_33;
                      }
                    }
LABEL_27:
                    v11 = v24;
                    v13 += 8;
                    v12 = v26;
                    if ( v24 >= v10 )
                    {
                      v3 = (unsigned int *)v27;
                      goto LABEL_29;
                    }
                  }
                }
                byte_140C4A1D8 = 0;
LABEL_29:
                memset(v25, 0, sizeof(v25));
                v25[0] = 0x9000000001LL;
                v30 = 0LL;
                v25[13] = (unsigned int)v28;
                memset(v29, 0, sizeof(v29));
                LODWORD(v29[0]) = -1;
                v25[11] = v29;
                v25[1] = sub_1403BE770;
                v25[2] = sub_140372C20;
                v25[3] = sub_1405230C0;
                v25[4] = sub_140523100;
                HIDWORD(v25[17]) = *(unsigned __int8 *)(v2 + 52) << 16;
                v25[12] = 0x2000000028LL;
                LODWORD(v25[17]) = 3;
                v25[14] = 0x200000001LL;
                sub_1403BE0BC(v25, 0LL);
              }
            }
          }
          sub_1403BF310(v3, 1LL, 0LL);
        }
      }
    }
  }
  return 0LL;
}
