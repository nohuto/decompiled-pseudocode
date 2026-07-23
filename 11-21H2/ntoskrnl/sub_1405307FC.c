/*
 * XREFs of sub_1405307FC @ 0x1405307FC
 * Callers:
 *     sub_140AF9490 @ 0x140AF9490 (sub_140AF9490.c)
 * Callees:
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405302D4 @ 0x1405302D4 (sub_1405302D4.c)
 *     sub_140530540 @ 0x140530540 (sub_140530540.c)
 *     sub_140532D90 @ 0x140532D90 (sub_140532D90.c)
 *     sub_140B4BF38 @ 0x140B4BF38 (sub_140B4BF38.c)
 */

__int64 __fastcall sub_1405307FC(__int64 a1, __int64 a2, char *a3)
{
  char v6; // di
  bool v7; // cf
  __int64 *v8; // rax
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  __int16 v11; // ax
  __int16 v12; // r15
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  int v19; // edx
  unsigned int *v20; // rbx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v27; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v28; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v29[14]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[18]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v31[30]; // [rsp+140h] [rbp+40h] BYREF
  char v32; // [rsp+248h] [rbp+148h] BYREF
  char v33; // [rsp+250h] [rbp+150h] BYREF
  __int64 v34; // [rsp+258h] [rbp+158h] BYREF

  v6 = 0;
  v26 = 0LL;
  memset(v30, 0, 0x88uLL);
  memset(v31, 0, 0xB8uLL);
  v7 = *(_WORD *)(a2 + 2) < 0x28u;
  v28 = 0LL;
  v34 = 0LL;
  v27 = 0LL;
  *a3 = 0;
  v33 = 0;
  v32 = 0;
  if ( v7 || *(_BYTE *)a2 != 17 && *(_BYTE *)a2 != 64 )
    return 3221225485LL;
  v8 = (__int64 *)qword_140C49C80;
  if ( (__int64 *)qword_140C49C80 != &qword_140C49C80 )
  {
    while ( v8[2] != *(_QWORD *)(a2 + 8) )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == &qword_140C49C80 )
        goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  v9 = *(_QWORD *)(a2 + 24);
  v10 = (4 * (_BYTE)v9) & 8 | (16 * ((v9 >> 45) & 1));
  if ( ((*(_BYTE *)(a2 + 1) >> 4) & ((v9 & 0x600000000008LL) == 0x600000000008LL)) != 0 )
    v10 = (4 * (_BYTE)v9) & 8 | (16 * ((*(_QWORD *)(a2 + 24) >> 45) & 1)) | 1;
  v11 = v10 | 4;
  if ( ((unsigned __int8)-((v9 & 0xC000) != 0) & ((v11 & 1) != 0 && (v9 & 0x20000000012LL) == 0x20000000012LL)) == 0
    || (BYTE4(v9) & 0x1Fu) < 8 )
  {
    v11 &= ~4u;
  }
  v12 = v11 | 2;
  if ( (v9 & 0x84) != 0x84 )
    v12 = v11;
  if ( (v12 & 3) == 0 )
    return 0LL;
  result = sub_140532D90(a2, a1 + *(unsigned int *)(a1 + 4), &v32, &v27);
  if ( (int)result >= 0 )
  {
    result = sub_1403CE24C(v14, 0xF0u, &v34);
    if ( (int)result >= 0 )
    {
      memset(&v30[2], 0, 0x78uLL);
      v15 = v34;
      v16 = (_QWORD *)(v34 + 224);
      *(_QWORD *)(v34 + 232) = v34 + 224;
      *v16 = v16;
      *(_BYTE *)(v15 + 16) = *(_BYTE *)(a2 + 1);
      *(_WORD *)(v15 + 18) = v12;
      *(_QWORD *)(v15 + 8) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v15 + 160) = *(unsigned __int16 *)(a2 + 16);
      *(_DWORD *)(v15 + 164) = *(unsigned __int8 *)(a2 + 5);
      *(_DWORD *)(v15 + 168) ^= (*(_DWORD *)(v15 + 168) ^ (*(unsigned __int16 *)(a2 + 4) >> 3)) & 0x1F;
      v17 = *(_DWORD *)(v15 + 168) ^ ((unsigned __int8)*(_DWORD *)(v15 + 168) ^ (unsigned __int8)(32 * *(_WORD *)(a2 + 4))) & 0xE0u;
      *(_DWORD *)(v15 + 168) = v17;
      result = sub_1403CE24C(v17, 0x2000u, &v26);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)(v15 + 192) = v26;
        *(_DWORD *)(v15 + 184) = 0x10000;
        RtlClearBits((PRTL_BITMAP)(v15 + 184), 0, 0x10000u);
        *(_QWORD *)(v15 + 152) = 0LL;
        result = sub_140530540(v15, a2, &v33);
        if ( (int)result >= 0 )
        {
          result = sub_1403BE4F0(*(_QWORD *)(v15 + 8), 0x2040u);
          if ( (int)result >= 0 )
          {
            memset(v29, 0, 0x68uLL);
            HIDWORD(v29[9]) = *(_DWORD *)(v15 + 160);
            v18 = 2076;
            v29[10] = *(_QWORD *)(v15 + 164);
            v29[7] = v30;
            v29[8] = v31;
            v30[0] = sub_140A647E0;
            v30[1] = sub_140A64A00;
            v29[0] = 0x6800000001LL;
            v29[1] = v15;
            v29[2] = 0x81C00000000LL;
            LODWORD(v29[9]) = 1;
            LODWORD(v29[12]) = 16;
            if ( (v12 & 1) != 0 )
            {
              v30[4] = sub_140531560;
              v30[5] = sub_140531660;
              v31[0] = sub_140531900;
              v31[5] = sub_140531A20;
              v31[6] = sub_140531930;
              v31[19] = sub_140532F40;
              v31[20] = sub_140532790;
              if ( !v32 )
              {
                v18 = 2332;
                v31[17] = sub_140531850;
                v31[18] = sub_140532EF0;
                v30[7] = sub_140531190;
                v30[8] = sub_140531690;
              }
              v18 |= 0x6000u;
              v30[9] = sub_1405319C0;
              v30[10] = _misaligned_access;
              v30[11] = _misaligned_access;
              HIDWORD(v29[2]) = v18;
            }
            v19 = 0x40000;
            if ( (unsigned int)((1 << ((BYTE4(v9) & 0x1F) + 1)) - 1) < 0x40000 )
              v19 = (1 << ((BYTE4(v9) & 0x1F) + 1)) - 1;
            LODWORD(v29[11]) = v19;
            if ( (v12 & 4) != 0 )
            {
              v18 |= 0x20u;
              v31[1] = sub_140533000;
              v31[2] = sub_140532FD0;
              v31[3] = sub_1405327F0;
              v31[4] = sub_140533030;
              v31[7] = sub_1405316B0;
              v31[8] = &sub_140532460;
              v31[14] = sub_140A64F30;
              HIDWORD(v29[2]) = v18;
            }
            if ( (v12 & 2) != 0 )
            {
              v30[14] = &sub_140533520;
              v18 = v18 & 0xFFFFFFAF | 0x40;
              HIDWORD(v29[2]) = v18;
              v30[15] = sub_140532A10;
              v30[16] = sub_140533370;
              v30[12] = sub_140530DE0;
              v30[13] = sub_140532200;
            }
            if ( (v12 & 4) != 0 )
            {
              v31[9] = sub_140A64FE0;
              v31[10] = sub_140A64840;
              v31[11] = sub_14090B2D0;
              v31[12] = sub_1405328C0;
              HIDWORD(v29[2]) = v18 | 2;
            }
            v20 = v27;
            v21 = *v27;
            HIDWORD(v29[11]) = 65534 - *v27;
            result = sub_1405302D4(v15, 65534 - v21, v21);
            if ( (int)result >= 0 )
            {
              *(_DWORD *)(v15 + 200) = 65534;
              *(_QWORD *)(v15 + 208) = v20;
              result = sub_140B4BF38(v29, v22, 0LL);
              if ( (int)result >= 0 )
              {
                result = sub_1403CE24C(v23, 0x18u, &v28);
                if ( (int)result >= 0 )
                {
                  v24 = v28;
                  v28[2] = *(_QWORD *)(a2 + 8);
                  v25 = (_QWORD *)qword_140C49C88;
                  if ( *(__int64 **)qword_140C49C88 != &qword_140C49C80 )
                    __fastfail(3u);
                  *v24 = &qword_140C49C80;
                  v24[1] = v25;
                  *v25 = v24;
                  qword_140C49C88 = (__int64)v24;
                  if ( v32 || v33 )
                    v6 = 1;
                  *a3 = v6;
                  return 0LL;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
