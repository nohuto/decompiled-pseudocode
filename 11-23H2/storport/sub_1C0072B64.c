/*
 * XREFs of sub_1C0072B64 @ 0x1C0072B64
 * Callers:
 *     sub_1C0021620 @ 0x1C0021620 (sub_1C0021620.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0061F7C @ 0x1C0061F7C (sub_1C0061F7C.c)
 *     sub_1C006A988 @ 0x1C006A988 (sub_1C006A988.c)
 *     sub_1C006EC48 @ 0x1C006EC48 (sub_1C006EC48.c)
 *     sub_1C006ECA8 @ 0x1C006ECA8 (sub_1C006ECA8.c)
 *     sub_1C006F3E0 @ 0x1C006F3E0 (sub_1C006F3E0.c)
 */

void __fastcall sub_1C0072B64(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // r15
  _BYTE *v3; // rax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // r9
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  int v11; // eax
  __int64 v12; // rdi
  unsigned int v13; // r12d
  char v14; // al
  char v15; // al
  int v16; // r8d
  unsigned int v17; // r14d
  __int16 v18; // dx
  PVOID *v19; // rbx
  __int64 v20; // rdi
  int v21; // [rsp+78h] [rbp-190h]
  char v22; // [rsp+188h] [rbp-80h]
  int v23; // [rsp+18Ch] [rbp-7Ch] BYREF
  unsigned int v24; // [rsp+190h] [rbp-78h]
  __int64 v25; // [rsp+198h] [rbp-70h]
  _BYTE *v26; // [rsp+1A0h] [rbp-68h]
  _QWORD v27[8]; // [rsp+1A8h] [rbp-60h] BYREF
  int v28; // [rsp+1ECh] [rbp-1Ch]
  int v29; // [rsp+1F0h] [rbp-18h]
  int v30; // [rsp+1F4h] [rbp-14h]
  int v31; // [rsp+1F8h] [rbp-10h]
  __int64 v32; // [rsp+200h] [rbp-8h]
  __int64 v33; // [rsp+208h] [rbp+0h]
  __int64 v34; // [rsp+210h] [rbp+8h]
  __int64 v35; // [rsp+218h] [rbp+10h]
  __int64 v36; // [rsp+220h] [rbp+18h]
  __int64 v37; // [rsp+228h] [rbp+20h]
  __int16 v38; // [rsp+230h] [rbp+28h]
  char v39; // [rsp+232h] [rbp+2Ah]
  char v40; // [rsp+233h] [rbp+2Bh]
  unsigned __int32 v41; // [rsp+234h] [rbp+2Ch]
  _BYTE *v42; // [rsp+238h] [rbp+30h]
  int v43; // [rsp+240h] [rbp+38h]
  _BYTE *v44; // [rsp+248h] [rbp+40h]
  int v45; // [rsp+250h] [rbp+48h]
  _BYTE *v46; // [rsp+258h] [rbp+50h]
  int v47; // [rsp+260h] [rbp+58h]
  _BYTE *v48; // [rsp+268h] [rbp+60h]
  int v49; // [rsp+270h] [rbp+68h]
  _BYTE *v50; // [rsp+278h] [rbp+70h]
  int v51; // [rsp+280h] [rbp+78h]
  _BYTE *v52; // [rsp+288h] [rbp+80h]
  int v53; // [rsp+290h] [rbp+88h]
  _BYTE *v54; // [rsp+298h] [rbp+90h]
  int v55; // [rsp+2A0h] [rbp+98h]
  _BYTE *v56; // [rsp+2A8h] [rbp+A0h]
  int v57; // [rsp+2B0h] [rbp+A8h]
  _QWORD Dst[8]; // [rsp+2B8h] [rbp+B0h] BYREF
  _DWORD v59[2]; // [rsp+2F8h] [rbp+F0h]
  _DWORD v60[2]; // [rsp+300h] [rbp+F8h]

  v25 = a1;
  v1 = a1;
  v60[0] = 218956546;
  v60[1] = 353439246;
  v23 = 256;
  v59[0] = 0x1000000;
  v59[1] = 256;
  v2 = 0LL;
  memset_0(Dst, 0, sizeof(Dst));
  memset_0(v27, 0, 0x110uLL);
  if ( (*(_DWORD *)(v1 + 2040) & 0x10) == 0 )
  {
    v3 = (_BYTE *)sub_1C0007CF4(256LL, 256LL, 1700028754LL, *(_QWORD *)(v1 + 8));
    v26 = v3;
    v2 = v3;
    if ( v3 )
    {
      v4 = sub_1C0061F7C(v1, 0LL, 0, 0, (char *)&v23, v3);
      if ( (int)(v4 + 0x80000000) < 0 || v4 == -2147483643 )
      {
        v6 = 0;
        v24 = 0;
        v7 = 0LL;
        while ( 1 )
        {
          v8 = *(_QWORD *)(v1 + 8);
          v23 = 4096;
          v9 = (_BYTE *)sub_1C0007CF4(256LL, 4096LL, 1700028754LL, v8);
          Dst[v7] = v9;
          v10 = v9;
          if ( !v9 )
            break;
          v22 = *((_BYTE *)v59 + v7);
          v11 = sub_1C0061F7C(v1, 0LL, *((_BYTE *)v60 + v7), v22, (char *)&v23, v9);
          if ( ((v11 + 0x80000000) & 0x80000000) != 0 || v11 == -2147483643 )
          {
            v12 = (__int64)(v10 + 4);
            v13 = v23 - 4;
            switch ( *v10 & 0x3F )
            {
              case 2:
                v42 = v10;
                v43 = v23;
                break;
              case 3:
                v44 = v10;
                v45 = v23;
                break;
              case 13:
                v15 = v10[1];
                if ( v15 )
                {
                  if ( v15 == 1 )
                  {
                    v48 = v10;
                    v49 = v23;
                  }
                }
                else
                {
                  v46 = v10;
                  v47 = v23;
                }
                break;
              case 14:
                v14 = v10[1];
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    v52 = v10;
                    v53 = v23;
                  }
                }
                else
                {
                  v50 = v10;
                  v51 = v23;
                }
                break;
              case 17:
                v54 = v10;
                v55 = v23;
                break;
              case 21:
                v56 = v10;
                v57 = v23;
                break;
            }
            if ( v13 >= 4 )
            {
              do
              {
                v16 = *(unsigned __int8 *)(v12 + 3);
                v17 = v16 + 4;
                if ( v13 < v16 + 4 )
                  break;
                v18 = __ROR2__(*(_WORD *)v12, 8);
                switch ( *v10 & 0x3F )
                {
                  case 2:
                    sub_1C006F3E0(v12, v18, v27);
                    break;
                  case 3:
                    sub_1C006EC48(v12, v18, v27);
                    break;
                  case 13:
                    if ( !v10[1] && (_BYTE)v16 == 2 )
                    {
                      if ( v18 )
                      {
                        if ( v18 == 1 )
                          BYTE1(v27[0]) = *(_BYTE *)(v12 + 5);
                      }
                      else
                      {
                        LOBYTE(v27[0]) = *(_BYTE *)(v12 + 5);
                      }
                    }
                    break;
                  case 14:
                    if ( v10[1] )
                    {
                      if ( v22 == 1 && !v18 && (_BYTE)v16 == 2 )
                        v38 = __ROR2__(*(_WORD *)(v12 + 4), 8);
                    }
                    else
                    {
                      sub_1C006ECA8(v12, v18, v27);
                    }
                    break;
                  case 17:
                    if ( (_BYTE)v16 == 4 && v18 == 1 )
                      v39 = *(_BYTE *)(v12 + 7);
                    break;
                  default:
                    if ( (*v10 & 0x3F) == 0x15 && (_BYTE)v16 == 12 && !v18 )
                    {
                      v40 = *(_BYTE *)(v12 + 9);
                      v41 = _byteswap_ulong(*(_DWORD *)(v12 + 4));
                    }
                    break;
                }
                v13 -= v17;
                v12 += v17;
              }
              while ( v13 >= 4 );
              v1 = v25;
              v2 = v26;
              v6 = v24;
            }
          }
          ++v6;
          ++v7;
          v24 = v6;
          if ( v6 >= 8 )
          {
            if ( byte_1C0093A04 < 0 )
              sub_1C006A988(
                v1 + 186,
                v1 + 169,
                v1 + 160,
                *(_DWORD *)(*(_QWORD *)(v1 + 24) + 56LL),
                *(_BYTE *)(v1 + 96),
                *(_BYTE *)(v1 + 97),
                *(_BYTE *)(v1 + 98),
                v1 + 2024,
                *(_QWORD *)(v1 + 24) + 5000LL,
                *(const wchar_t **)(*(_QWORD *)(v1 + 24) + 4656LL),
                (const char *)(v1 + 160),
                (const char *)(v1 + 169),
                (const char *)(v1 + 186),
                *(_BYTE *)(v1 + 450) & 1,
                v21,
                v27[0],
                SBYTE1(v27[0]),
                (const wchar_t *)v27 + 1,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40,
                v41,
                v43,
                (__int64)v42,
                v45,
                (__int64)v44,
                v47,
                (__int64)v46,
                v49,
                (__int64)v48,
                v51,
                (__int64)v50,
                v53,
                (__int64)v52,
                v55,
                (__int64)v54,
                v57,
                (__int64)v56);
            break;
          }
        }
      }
      else if ( v4 != -1073741670 )
      {
        v5 = *(_DWORD *)(v1 + 2040);
        if ( (v5 & 1) == 0 )
          *(_DWORD *)(v1 + 2040) = v5 | 0x10;
      }
    }
  }
  v19 = (PVOID *)Dst;
  v20 = 8LL;
  do
  {
    if ( *v19 )
      ExFreePoolWithTag(*v19, 0x65546152u);
    ++v19;
    --v20;
  }
  while ( v20 );
  if ( v2 )
    ExFreePoolWithTag(v2, 0x65546152u);
}
